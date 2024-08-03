%{
#include <stdio.h>
#include <string.h>	
#include <math.h>	
#include "cgen.h"


extern int yylex(void);
%}

%union
{
	char* str;
}

%token <str> IDENTIFIER 
%token <str> INTEGER 
%token <str> SCALAR 
%token <str> STRING
%token <str> COMP_VAR


%token KW_IF 
%token KW_DEF 
%token KW_INTEGER 
%token KW_ELSE 
%token KW_ENDIF 
%token KW_SCALAR 
%token KW_STR 
%token KW_BOOLEAN 
%token KW_TRUE 
%token KW_FALSE 
%token KW_CONST 
%token KW_FOR 
%token KW_IN 
%token KW_ENDFOR 
%token KW_WHILE 
%token KW_ENDWHILE 
%token KW_BREAK 
%token KW_CONTINUE 
%token KW_ENDDEF 
%token KW_RETURN 
%token KW_COMP 
%token KW_ENDCOMP 
%token KW_OF 
%token POW 
%token EQUALS 
%token NE 
%token LE 
%token GE 
%token OP_AND 
%token OP_OR 
%token OP_NOT 
%token ASSIGN_EQ 
%token ASSIGN_PLUSEQ 
%token ASSIGN_MINUSEQ 
%token ASSIGN_MULEQ 
%token ASSIGN_DIVEQ 
%token ASSIGN_MODEQ 
%token KW_MAIN
%token SIMPLE_ARRAY
%token RETURN_ID 

%start program

%type <str> start_const_decl_list const_decl const_decl_list_item start_var_decl_list var_decl decl_list decl decl_list_item_id body
%type <str>  var_decl_list  command_list command
%type <str> func_decl_list func_decl func_var_decl_list func_var_decl func_call array_compact_integer
%type <str> type_spec
%type <str> expr

%left '+' '-'
%left '*' '/' '%'
%left '<' LE
%left '>' GE
%left EQUALS NE
%left OP_AND   
%left OP_OR
%right POW
%right OP_NOT
%right ASSIGN_EQ
%right ASSIGN_PLUSEQ ASSIGN_MINUSEQ ASSIGN_MULEQ
%right ASSIGN_DIVEQ ASSIGN_MODEQ SIMPLE_ARRAY


%%

program:
    
    KW_DEF KW_MAIN '(' ')' ':' body KW_ENDDEF ';'{
        if(yyerror_count == 0){
            puts(c_prologue);
            printf(" /* kappa to c : result */ \n\n");
            printf("int main() {\n  %s\n} \n", $6);
        }
    }
    | start_var_decl_list KW_DEF KW_MAIN '(' ')' ':' body KW_ENDDEF ';'{
        if(yyerror_count == 0){
            puts(c_prologue);
            printf(" /* kappa to c : result */ \n\n");
            printf("%s\n\n", $1);
            printf("int main() {\n  %s\n} \n", $7);
        }
    }
    | start_const_decl_list KW_DEF KW_MAIN '(' ')' ':' body KW_ENDDEF ';'{ 
        if (yyerror_count == 0) {
            puts(c_prologue);
            printf("/* kappa to c : result  */ \n\n");
            printf("%s\n\n", $1);
            printf("\nint main() {\n  %s\n} \n", $7);
	    }
    }
    | func_decl_list KW_DEF KW_MAIN '(' ')' ':' body KW_ENDDEF ';' { 
        if (yyerror_count == 0) {
            puts(c_prologue);
            printf("/* kappa to c : result  */ \n\n");
            printf("%s\n\n", $1);
            printf("\nint main() {\n  %s\n} \n", $7);
	    }
    }

    | start_var_decl_list start_const_decl_list KW_DEF KW_MAIN '(' ')' ':' body KW_ENDDEF ';'{
        if (yyerror_count == 0) {
            puts(c_prologue);
            printf("/* kappa to c : result  */ \n\n");
            printf("%s\n\n", $1);
            printf("%s\n\n", $2);
            printf("\nint main() {\n  %s\n} \n", $8);
	    }
    }
    | start_var_decl_list func_decl_list KW_DEF KW_MAIN '(' ')' ':' body KW_ENDDEF ';'{
        if (yyerror_count == 0) {
            puts(c_prologue);
            printf("/* kappa to c : result  */ \n\n");
            printf("%s\n\n", $1);
            printf("%s\n\n", $2);
            printf("\nint main() {\n  %s\n} \n", $8);
	    }
    }

    | start_const_decl_list func_decl_list KW_DEF KW_MAIN '(' ')' ':' body KW_ENDDEF ';'{
        if (yyerror_count == 0) {
            puts(c_prologue);
            printf("/* kappa to c : result  */ \n\n");
            printf("%s\n\n", $1);
            printf("%s\n\n", $2);
            printf("\nint main() {\n  %s\n} \n", $8);
	    }
    }

    | start_const_decl_list start_var_decl_list KW_DEF KW_MAIN '(' ')' ':' body KW_ENDDEF ';'{
        if (yyerror_count == 0) {
            puts(c_prologue);
            printf("/* kappa to c : result  */ \n\n");
            printf("%s\n\n", $1);
            printf("%s\n\n", $2);
            printf("\nint main() {\n  %s\n} \n", $8);
	    }
    }

    | start_var_decl_list start_const_decl_list func_decl_list KW_DEF KW_MAIN '(' ')' ':' body KW_ENDDEF ';'{
        if (yyerror_count == 0) {
            puts(c_prologue);
            printf("/* kappa to c : result  */ \n\n");
            printf("%s\n\n", $1);
            printf("%s\n\n", $2);
            printf("%s\n\n", $3);
            printf("\nint main() {\n  %s\n} \n", $9);
	    }
    }

    | start_var_decl_list func_decl_list start_const_decl_list KW_DEF KW_MAIN '(' ')' ':' body KW_ENDDEF ';'{
        if (yyerror_count == 0) {
            puts(c_prologue);
            printf("/* kappa to c : result  */ \n\n");
            printf("%s\n\n", $1);
            printf("%s\n\n", $2);
            printf("%s\n\n", $3);
            printf("\nint main() {\n  %s\n} \n", $9);
	    }
    }

    | start_const_decl_list start_var_decl_list func_decl_list  KW_DEF KW_MAIN '(' ')' ':' body KW_ENDDEF ';'{
        if (yyerror_count == 0) {
            puts(c_prologue);
            printf("/* kappa to c : result  */ \n\n");
            printf("%s\n\n", $1);
            printf("%s\n\n", $2);
            printf("%s\n\n", $3);
            printf("\nint main() {\n  %s\n} \n", $9);
	    }
    }

    | start_const_decl_list func_decl_list start_var_decl_list  KW_DEF KW_MAIN '(' ')' ':' body KW_ENDDEF ';'{
        if (yyerror_count == 0) {
            puts(c_prologue);
            printf("/* kappa to c : result  */ \n\n");
            printf("%s\n\n", $1);
            printf("%s\n\n", $2);
            printf("%s\n\n", $3);
            printf("\nint main() {\n  %s\n} \n", $9);
	    }
    }

    | func_decl_list start_const_decl_list start_var_decl_list  KW_DEF KW_MAIN '(' ')' ':' body KW_ENDDEF ';'{
        if (yyerror_count == 0) {
            puts(c_prologue);
            printf("/* kappa to c : result  */ \n\n");
            printf("%s\n\n", $1);
            printf("%s\n\n", $2);
            printf("%s\n\n", $3);
            printf("\nint main() {\n  %s\n} \n", $9);
	    }
    }

    | func_decl_list start_var_decl_list start_const_decl_list  KW_DEF KW_MAIN '(' ')' ':' body KW_ENDDEF ';'{
        if (yyerror_count == 0) {
            puts(c_prologue);
            printf("/* kappa to c : result  */ \n\n");
            printf("%s\n\n", $1);
            printf("%s\n\n", $2);
            printf("%s\n\n", $3);
            printf("\nint main() {\n  %s\n} \n", $9);
	    }
    }


// variable declaration rule
start_var_decl_list:
    start_var_decl_list var_decl { $$ = template("%s\n%s", $1, $2); }
    | var_decl { $$ = $1; }
;

var_decl:
     var_decl_list ':' type_spec ';' { $$ = template("%s %s;", $3, $1); }
     | array_compact_integer { $$ = $1; }
;

var_decl_list:
    var_decl_list ',' decl_list_item_id  { $$ = template("%s, %s", $1, $3); }
    | decl_list_item_id { $$ = template("%s", $1); }
;

array_compact_integer:
    IDENTIFIER SIMPLE_ARRAY '[' expr KW_FOR expr ':' INTEGER ']' ':' type_spec ';'
       { $$ = template("%s* %s = (%s*)malloc(%s*sizeof(%s));\n    for(int i=0; i < %s; ++i){\n\t %s[i] = i; \n   }"
        , $11, $1, $11, $8, $11,  $8, $1 );
    }
;


start_const_decl_list:  
    start_const_decl_list const_decl { $$ = template("%s\n%s", $1, $2); }
    | const_decl { $$ = $1; }
;

const_decl:
    KW_CONST const_decl_list_item ':' type_spec ';' { $$ = template("const %s %s;", $4, $2); }
;

const_decl_list_item:
    decl_list_item_id '=' expr { $$ = template("%s = %s", $1, $3);}
    | decl_list_item_id '=' STRING { $$ = template("%s = %s", $1, $3);}
;


func_decl_list:
    func_decl_list func_decl { $$ = template("%s\n %s", $1, $2); }
    | func_decl { $$ = $1; }
;

func_decl:
    KW_DEF IDENTIFIER '(' func_var_decl_list ')' RETURN_ID type_spec ':' body KW_ENDDEF ';'
    { $$ = template("\n%s %s(%s) {\n%s\n} \n", $7, $2, $4, $9); }
    | KW_DEF IDENTIFIER '('  ')' RETURN_ID type_spec ':' body KW_ENDDEF ';'
    { $$ = ("\n%s %s() {\n%s\n} \n", $6, $2, $8);}

func_var_decl_list:
    func_var_decl_list ',' func_var_decl { $$ = template("  %s , %s", $1, $3); }
    | func_var_decl { $$ = $1; }
;

func_var_decl:
    decl_list_item_id ':' type_spec { $$ = template("%s %s", $3, $1); }
;

body:
    decl_list command_list { $$ = template(" %s\n %s ", $1, $2); }
    | command_list  {$$ = template(" %s", $1);}
; 

decl_list: 
    decl_list decl { $$ = template("  %s\n  %s", $1, $2); }
    | decl { $$ = $1; }
;

decl: 
    KW_CONST var_decl ':' type_spec ';' { $$ = template("const %s %s ;", $4, $2); }
    | var_decl ':' type_spec ';' { $$ = template(" %s %s ;", $3, $1); }

;


decl_list_item_id: 
    IDENTIFIER { $$ = $1; } 
    | IDENTIFIER '[' INTEGER ']' { $$ = template("%s[%s]", $1, $3); }
    | IDENTIFIER '[' ']' { $$ = template("*%s", $1); }
;

command_list:
    command_list command { $$ = template("%s\n  %s", $1, $2); }
    | command {$$ = template(" %s", $1);}
;

command:
    /* simple expressions */
    IDENTIFIER '=' expr ';' { $$ = template("%s = %s;", $1, $3); }
    | IDENTIFIER '(' func_call ')' ';' { $$ = template("%s(%s);", $1, $3); }
    | IDENTIFIER '(' ')' ';' { $$ = template("%s();", $1); } 
    | IDENTIFIER '(' STRING ')' ';' { $$ = template("%s(%s);", $1, $3); }
    | KW_BREAK ';' { $$ = template("break;");}
    | KW_CONTINUE ';' { $$ = template("continue;");}
    | KW_RETURN ';' {$$ = template("return;");}
    | KW_RETURN expr ';' {$$ = template("return %s ;", $2);}
    /* if-else statements */
    | KW_IF '(' expr ')' ':' command_list KW_ENDIF ';'{ $$ = template("if(%s){\n \t%s\n}", $3, $6); }
    | KW_IF '(' expr ')' ':' command_list KW_ELSE ':' command_list KW_ENDIF ';'{ $$ = template("if(%s){ \n \t%s \n }else{ \n \t%s\n}", $3, $6, $9); }
    /* while-loop statements */
    | KW_WHILE '(' expr ')' ':' command_list KW_ENDWHILE ';' { $$ = template ("while(%s){\n%s\n}", $3, $6);}
    /* for-loop statements */
    | KW_FOR IDENTIFIER KW_IN '[' expr ':' expr ':' expr ']' ':' command_list KW_ENDFOR ';' {$$ = template("for(%s = %s; %s < %s; %s = %s + %s){\n\t%s\n\t}", $2, $5, $2, $7, $2, $2, $9, $12);}
    | KW_FOR IDENTIFIER KW_IN '[' expr ':' expr ']' ':' command_list KW_ENDFOR ';' {$$ = template("for(%s = %s; %s < %s; ++%s){\n\t%s\n\t}", $2, $5, $2, $7, $2, $10);}
    /* var/array declarations */
    | var_decl
    /* const declarations */
    | const_decl
;

expr:
    INTEGER { $$ = $1; }
    | SCALAR	{ $$ = $1; }
    | KW_TRUE { $$ = "1"; }
    | KW_FALSE { $$ = "0"; }
    | IDENTIFIER { $$ = $1; }
    | IDENTIFIER '[' expr ']' { $$ = template("%s[%s]", $1, $3); }
    | IDENTIFIER '(' func_call ')' { $$ = template("%s(%s)", $1, $3); }
    | IDENTIFIER '(' ')' { $$ = template("%s()", $1); }
    | '-' expr { $$ = template(" -%s", $2); }
    | '(' expr ')' { $$ = template("(%s)", $2); }
    | expr '+' expr { $$ = template("%s + %s", $1, $3); }
    | expr '-' expr	{ $$ = template("%s - %s", $1, $3); }
    | expr '*' expr	{ $$ = template("%s * %s", $1, $3); }
    | expr '/' expr { $$ = template("%s / %s", $1, $3); }
    | expr '%' expr	{ $$ = template("(int)%s %c (int)%s", $1, 37, $3); }
    | expr ASSIGN_PLUSEQ expr { $$ = template("%s = %s + %s", $1, $1, $3); }
    | expr ASSIGN_MINUSEQ expr { $$ = template("%s = %s - %s", $1, $1, $3); }
    | expr ASSIGN_MULEQ expr { $$ = template("%s = %s * %s", $1, $1, $3); }
    | expr ASSIGN_DIVEQ expr { $$ = template("%s = %s / %s", $1, $1, $3); }
    | expr ASSIGN_MODEQ expr { $$ = template("(int)%s = (int)%s %c (int)%s", $1, $1, 37, $3); }
    | expr POW expr { $$ = template("pow(%s,%s)", $1, $3); }
    | OP_NOT expr { $$ = template("!%s", $2); }
    | expr OP_AND expr { $$ = template("%s && %s", $1, $3); }
    | expr OP_OR expr { $$ = template("%s || %s", $1, $3); }
    | expr NE expr { $$ = template("%s != %s", $1, $3); }
    | expr EQUALS expr { $$ = template("%s == %s", $1, $3); }
    | expr '<' expr { $$ = template("%s < %s", $1, $3); }
    | expr LE expr { $$ = template("%s <= %s", $1, $3); }
    | expr '>' expr { $$ = template("%s > %s", $1, $3); }
    | expr GE expr { $$ = template("%s >= %s", $1, $3); }
;

type_spec: KW_INTEGER { $$ = "int"; }
| KW_SCALAR { $$ = "double"; }
| KW_STR { $$ = "char *" ;}
| KW_BOOLEAN { $$ = "int"; }
;

func_call:
    func_call ',' expr { $$ = template("%s , %s ", $1, $3); }
    | expr  { $$ = $1; }
;

%%
int main()
{
  if ( yyparse() == 0)
     printf("\n // Your program is syntactically correct!\n");
  else
     printf("Rejected! \n");
} 



