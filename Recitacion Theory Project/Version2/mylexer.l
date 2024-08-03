%{
#include <stdio.h>
#include <string.h>
#include "cgen.h"
#include "myanalyser.tab.h"

int line_num = 1;
%}


SIGN [\+\-]
ID {LETTER}[A-Za-z0-9_]*
LETTER [A-Za-z]
DIGIT [0-9]
EXP [Ee]{SIGN}?[1-9]{DIGIT}*
COMP_VAR "#"{ID}
INTEGER [1-9]{DIGIT}*|("0")
SCALAR [1-9]{DIGIT}*"."{DIGIT}+{EXP}?
STRING \"({LETTER}*|{DIGIT}*|[/\\n\\t\\r\\\"/]*|[ +*/:_$%!#@&~^().]*)*\"

%x comment 

%%

if          return KW_IF;
else        return KW_ELSE;
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
True 		return KW_TRUE; 
False 		return KW_FALSE;

{ID}  { yylval.str = strdup(yytext);	return IDENTIFIER; } 

{INTEGER}  { yylval.str = strdup(yytext); return INTEGER; } 

{SCALAR}       { yylval.str = strdup(yytext); return SCALAR; }  

{STRING}	 { yylval.str = strdup(yytext);	return STRING; } 

{COMP_VAR}	 { yylval.str = strdup(yytext);	return COMP_VAR; } 



[ \r\t]			/* skip whitespace */
"+"     return '+';
"-"     return '-';
"*"     return '*';
"/"     return '/'; 
"%"     return '%';
"**"    return POW;
"=="    return EQUALS;
"!="    return NE;
"<"     return '<'; 
"<="    return LE;
">"     return '>'; 
">="    return GE;
"."     return '.';
"->"    return RETURN_ID;
":="	return SIMPLE_ARRAY;


"="     return '=';
"+="    return ASSIGN_PLUSEQ;
"-="    return ASSIGN_MINUSEQ;
"*="    return ASSIGN_MULEQ;
"/="    return ASSIGN_DIVEQ;
"%="    return ASSIGN_MODEQ; 

";"     return ';';
"("     return '(';
")"     return ')';
","     return ',';
"["     return '[';
"]"     return ']';
":"     return ':';

"--" BEGIN(comment);
<comment>[^\n] /* eat up anything thats not a newline */
<comment>\n { ++line_num; BEGIN(INITIAL); }

\n 					 ++line_num;
<<EOF>> 	return EOF;
.         { yyerror("lexical error: unrecognized literal '%s'\n", yytext); exit(1);		}
