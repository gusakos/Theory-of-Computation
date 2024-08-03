%{

  #include <stdio.h>
  #include <string.h>
  #include <assert.h>
  #include "cgen.h"
  #include "syntax_analyzer.tab.h"
 
  int line_num = 1;


  #define MAXMACRO 128
  char* mactable[MAXMACRO][2];
  int mac_size = 0;

  // if macro is set correctly return 1 otherwise return 0 
  int set_macro(char* name, char* def);

  // if macro is found return its def otherwise return NULL
  char* get_macro(char* name);

%}



LETTER [A-Za-z]
ID      [a-zA-Z_][0-9a-zA-Z_]*
DIGIT   [0-9]
INTEGER [1-9]{DIGIT}*|(0)
DECIMAL ([+-]?"."{INTEGER})|([+-]?{INTEGER}("."{INTEGER}?)?)
SCALAR    {DECIMAL}([eE][+-]?{INTEGER})?
STRING  \"([^\'"\n]|\\\")*\"

%x macro
%x comment 

%%


if          return KW_IF;
else		    return KW_ELSE;
endif       return KW_ENDIF;
def         return KW_DEF;
enddef      return KW_ENDDEF;
comp        return KW_COMP;
endcomp     return KW_ENDCOMP;
return      return KW_RETURN;
continue    return KW_CONTINUE;
for         return KW_FOR;
endfor      return KW_ENDFOR; 
while       return KW_WHILE;
endwhile    return KW_ENDWHILE; 
of          return KW_OF; 
in          return KW_IN;
break       return KW_BREAK; 
integer     return KW_INTEGER;
scalar      return KW_SCALAR; 
str         return KW_STR; 
bool	    return KW_BOOLEAN; 
const       return KW_CONST; 
and         return OP_AND;
or          return OP_OR;
not         return OP_NOT; 
main        return KW_MAIN;
True 		    return KW_TRUE; 
False 		  return KW_FALSE;
function				return KW_FUNCTION;
char        return KW_CHAR;



{ID}  					{
						   char* def = get_macro(yytext);
						   if(def==NULL) {
                //macro not found its just an ID
                                yylval.str = strdup(yytext);
						   		return IDENTIFIER;
						   	}
                
                //macro was found replace it with its def in the input FILE
               printf("\n Line %d MACRO:%s was replaced succesfully with def:%s\n",line_num,yytext,def);
						   for(int i=strlen(def); i>0; i--) {

                //unput every character of def to the input stream strating from the end in ordr for yylex to can it next
						   	  unput(def[i-1]);
						   }
						}
{INTEGER}    { yylval.str = strdup(yytext); return POSINT; }
{SCALAR}      { yylval.str = strdup(yytext);; return SCALAR; }
{STRING}    { yylval.str = strdup(yytext);	return STRING; }


"+"     return '+';
"-"     return '-';
"*"     return '*';
"/"     return '/';
"%"     return '%';
"**"    return OP_PAW;
"=="    return OP_EQUALS;
"!="    return OP_NE;
"<"     return '<'; 
"<="    return OP_LE;
">"     return '>'; 
">="    return OP_GE;
"."     return '.';
"->"    return OP_ARROW;
":="	return OP_ASSIGN;
"#"             return '#';

"="     return '=';
"+="    return OP_ASSIGN_PLUSEQ;
"-="    return OP_ASSIGN_MINUSEQ;
"*="    return OP_ASSIGN_MULEQ;
"/="    return OP_ASSIGN_DIVEQ;
"%="    return OP_ASSIGN_MODEQ; 

";"     return ';';
"("     return '(';
")"     return ')';
","     return ',';
"["     return '[';
"]"     return ']';
":"     return ':';

@defmacro[ \r\t]+       BEGIN(macro);
<macro>{ID} {
  //get maceo name
	char* name = strdup(yytext);
	char* def = NULL;
	size_t deflen = 0;
	char c;

  //open the file
	FILE* deff = open_memstream(&def, &deflen);

  //get macro definition
	while((c=input())!='\n'){
		fputc(c, deff);
	}
	fclose(deff);
	printf("line %d name: %s, def: %s, c: %d\n",line_num, name, def, c);

  //set macro
	if(!set_macro(name, def)) 
    printf("lexxer error faailed to define macro %s \n",name);
	BEGIN(INITIAL);
};


"--" BEGIN(comment);
<comment>[^\n] /* eat up anything thats not a newline */
<comment>\n { ++line_num; BEGIN(INITIAL); }





[ \r\t]+		/* eat whitespace */
\n 					 ++line_num;




<<EOF>> 	return EOF;
.           { printf("Line %d Lexical Error: Unrecognized literal %s\n", line_num, yytext); }

%%


int set_macro(char* name, char* def)
{
  //first we need to check if macro is already defined
  // if yes we need to update the definition value
	int i;
	for(i=0; i<mac_size; i++) {
		if(strcmp(mactable[i][0], name)==0) {
			/* found ! */
			free(name);
			free(mactable[i][1]);
			mactable[i][1] = def;
			break;
		}
	}
  //check if there enough space to store a new macro
	if(i<mac_size)
		return 1;
  //store the new macro name and definition
	else if(mac_size < MAXMACRO) {
		/* new entry */
		assert(i==mac_size);
		mactable[i][0] = name;
		mactable[i][1] = def;
		mac_size++;
		return 1;
	}
	else
		return 0;
}

char* get_macro(char* name)
{ 
  //search all the macros saved until one is matched otherwise return NULL
	for(int i=0;i<mac_size; i++) {
		if(strcmp(mactable[i][0], name)==0)
			return mactable[i][1];
	}
	return NULL;
}






