%{

  #include <stdio.h>
  #include <string.h>
  #include <assert.h>

  #define TK_IDENT 258
  #define TK_INT 259
  #define TK_REAL 260
  #define TK_ASSGN 261
  #define TK_STRING 265
  #define KW_IF 262  
  #define KW_ELSE 263
  #define KW_ENDIF 266
  #define KW_DEF 267
  #define KW_ENDED 268
  #define KW_COMP 269
  #define KW_ENDCOMP 270
  #define KW_CONTINUE 271
  #define KW_FOR 272
  #define KW_ENDFOR 273
  #define KW_WHILE 274
  #define KW_ENDWHILE 275
  #define KW_OF 276
  #define KW_BREAK 277
  #define OP_AND 278
  #define OP_OR 279
  #define OP_NOT  280
  #define KW_MAIN 281
  #define KW_TRUE 282
  #define KW_FALSE 283
  #define KW_BOOLEAN 284
  #define KW_CONST 285
  #define KW_STR 286
  #define KW_IN 287
  #define KW_ENDDEF 288
  #define KW_INTEGER 289
  #define KW_SCALAR 290
  #define KW_RETURN 291
  #define KW_FUNCTION 292
  #define KW_CHAR 293
  #define OP_PAW 294
  #define OP_EQUALS 295
  #define OP_NE 296
  #define OP_LE 297
  #define OP_GE 298
  #define OP_ARROW 299
  #define OP_ASSIGN 300
  #define OP_ASSIGN_PLUSEQ 301
  #define OP_ASSIGN_MULEQ 302
  #define OP_ASSIGN_DIVEQ 303
  #define OP_ASSIGN_MODEQ 304
  #define OP_ASSIGN_MINUSEQ 305
  int lineNum = 1;


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
INTEGER [1-9]{DIGIT}*|("0")
DECIMAL ([+-]?"."{INTEGER})|([+-]?{INTEGER}("."{INTEGER}?)?)
REAL    {DECIMAL}([eE][+-]?{INTEGER})?
STRING  \"({LETTER}*|{DIGIT}*|[/\\n\\t\\r\\\"/]*|[ +*/:_$%!#@&~^().]*)*\"

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
boolean     return KW_BOOLEAN; 
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
						   		return TK_IDENT;
						   	}
                
                //macro was found replace it with its def in the input FILE
               printf("\n Line %d MACRO:%s was replaced succesfully with def:%s\n",lineNum,yytext,def);
						   for(int i=strlen(def); i>0; i--) {

                //unput every character of def to the input stream strating from the end in ordr for yylex to can it next
						   	  unput(def[i-1]);
						   }
						}
{INTEGER}    { printf("An intteger found: (%g) ", atof(yytext)); return TK_INT; }
{REAL}      { printf("A real: (%g) ", atof(yytext)); return TK_REAL; }
{STRING}    { printf("A string found in line: %d , string: %s ", lineNum,yytext);  return TK_STRING;}


"+"         printf("An operator + "); return '+';
"-"         printf("An operator - "); return '-';
"*"         printf("An operator "); return '*';
"/"         printf("An operator "); return '/';
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
	printf("line %d name: %s, def: %s, c: %d\n",lineNum, name, def, c);

  //set macro
	if(!set_macro(name, def)) 
    printf("lexxer error faailed to define macro %s \n",name);
	BEGIN(INITIAL);
};


"--" BEGIN(comment);
<comment>[^\n] /* eat up anything thats not a newline */
<comment>\n { ++lineNum; BEGIN(INITIAL); }





[ \r\t]+		/* eat whitespace */
\n 					 ++lineNum;




<<EOF>> 	return EOF;
.           { printf("Line %d Lexical Error: Unrecognized literal %s\n", lineNum, yytext); }

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

int main ()
{
   int token;
   while ( (token = yylex()) != EOF )
      printf("Line %d Token %d: %s\n", lineNum, token, yytext);

}





