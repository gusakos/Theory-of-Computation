%{
  #include <stdio.h>
  #include "cgen.h"
  #include <string.h>
  #include <stdlib.h>

  extern int yylex(void);
  extern int line_num;



%}

%union
{
	char* str;
}
%nonassoc ident

%token <str> IDENTIFIER 
%token <str> POSINT 
%token <str> SCALAR 
%token <str> STRING
%token <str> COMP_VAR

%token KW_IF 
%token KW_ELSE 
%token KW_ENDIF 
%token KW_DEF 
%token KW_ENDED 
%token KW_COMP 
%token KW_ENDCOMP 
%token KW_CONTINUE 
%token KW_FOR 
%token KW_ENDFOR 
%token KW_WHILE 
%token KW_ENDWHILE 
%token KW_OF 
%token KW_BREAK 
%token OP_AND 
%token OP_OR 
%token OP_NOT  
%token KW_MAIN 
%token KW_TRUE 
%token KW_FALSE 
%token KW_BOOLEAN 
%token KW_CONST 
%token KW_STR 
%token KW_IN 
%token KW_ENDDEF 
%token KW_INTEGER 
%token KW_SCALAR 
%token KW_RETURN 
%token KW_FUNCTION 
%token KW_CHAR 
%token OP_PAW 
%token OP_EQUALS 
%token OP_NE 
%token OP_LE 
%token OP_GE 
%token OP_ARROW 
%token OP_ASSIGN 
%token OP_ASSIGN_PLUSEQ 
%token OP_ASSIGN_MULEQ 
%token OP_ASSIGN_DIVEQ 
%token OP_ASSIGN_MODEQ 
%token OP_ASSIGN_MINUSEQ 



%start input
%type <str> input
%type <str> math_expression
%type <str> primary_expression
%type <str> relational_expression
%type <str> logic_expression
%type <str> basic_data_type
%type <str> identifier_list
%type <str> identifier_single
%type <str> variable_decl
%type <str> constant_decl
%type <str> expression
%type <str> parameter_declaration
%type <str> parameter_declaration_list
%type <str> expr_comma_list
%type <str> function_call
%type <str> general_function_call
%type <str> assignment_operator
%type <str> function_command
%type <str> function_command_list
%type <str> general_identifier
%type <str> general_variable
%type <str> local_var_const_decl
%type <str> local_var_const_decl_list
%type <str> function_definition
%type <str> function_definition_list
%type <str> comp_variable
%type <str> comp_identifier
%type <str> comp_function_call
%type <str> general_comp_function_call
%type <str> comp_expr_comma_list
%type <str> comp_math_expression
%type <str> comp_relational_expression
%type <str> comp_logic_expression
%type <str> comp_expression
%type <str> comp_primary_expression
%type <str> comp_command_list
%type <str> comp_command
%type <str> comp_function_definition_list
%type <str> comp_function_definition
%type <str> comp_identifier_list
%type <str> comp_var_decl
%type <str> comp_var_decl_list
%type <str> comp_definition
%type <str> comp_definition_list
%type <str> main_unit
%type <str> const_decl_list
%type <str> variable_decl_list


%left OP_OR
%left OP_AND   
%right OP_NOT
%left OP_EQUALS OP_NE
%left OP_GE OP_LE '>' '<'
%left '-' '+'
%left '*' '/' '%'
%left OP_PAW
%right '#'


%nonassoc USIGN
%nonassoc UNOT
%nonassoc ident2


%%



input:  

/*
      function_definition_list
{ 
    $$ = template("%s\n", $1);
  if (yyerror_count == 0) {
    puts(c_prologue);
    printf("%s\n", $1); 
  }  
}
*/


    comp_definition_list local_var_const_decl_list function_definition_list main_unit
{ 
    $$ = template("%s\n%s\n%s\n%s\n", $1, $2, $3, $4);
  if (yyerror_count == 0) {
    puts(c_prologue);
    printf("%s\n%s\n%s\n%s\n", $1, $2, $3, $4); 
  }  
}





/*
|input  constant_decl   
{ 
    $$ = template("%s\n%s\n", $1, $2);
  if (yyerror_count == 0) {
    puts(c_prologue);
    printf("Expression evaluates to: %s\n", $2); 
  }  
}
|input  variable_decl  
{ 
  if (yyerror_count == 0) {
    puts(c_prologue);
    printf("Expression evaluates to: %s\n", $2); 
  }  
}
*/


;

primary_expression :
    POSINT      {$$=template("%s",$1);}     
|   SCALAR     {$$=template("%s",$1);}
|   IDENTIFIER    {$$=template("%s",$1);}     %prec ident

|   STRING   {$$=template("%s",$1);}
|   KW_TRUE     {$$=template("1");}
|   KW_FALSE    {$$=template("0");}
|   '(' logic_expression ')'     {$$=template("(%s)",$2);}

;

math_expression:
   primary_expression {$$=template("%s",$1);}
|  '+' math_expression   { $$ = template("+%s", $2); }
|  '-' math_expression   { $$ = template("-%s", $2); }
|  math_expression '+' math_expression { $$ = template("%s + %s", $1, $3); }
|  math_expression '-' math_expression { $$ = template("%s - %s", $1, $3); }
|  math_expression '*' math_expression {$$ = template("%s * %s", $1, $3); }
|  math_expression '/' math_expression {$$ = template("%s / %s", $1, $3); }
|  math_expression '%' math_expression {$$ = template("%s %% %s", $1, $3);  }
|  math_expression OP_PAW math_expression {$$ = template("pow(%s,%s)", $1, $3);  }
| IDENTIFIER '[' expression ']' { $$ = template("%s[%s]", $1, $3); }
| IDENTIFIER '[' expression ']' '.' IDENTIFIER { $$ = template("%s[%s].%s", $1, $3 , $6); }
| IDENTIFIER '[' expression ']' '.'  IDENTIFIER '[' expression ']' { $$ = template("%s[%s].%s[%s]", $1, $3,$6,$8); }

| general_function_call { $$ = template("%s", $1); }
| IDENTIFIER '.'  IDENTIFIER '[' expression ']' { $$ = template("%s.%s[%s]", $1, $3, $5); }
| IDENTIFIER '.'  IDENTIFIER { $$ = template("%s.%s", $1, $3); }

;

relational_expression:
   math_expression {$$=template("%s",$1);}
|  relational_expression OP_EQUALS relational_expression { $$ = template("%s == %s", $1, $3); }
|  relational_expression OP_NE relational_expression { $$ = template("%s != %s", $1, $3); }
|  relational_expression '>' relational_expression {$$ = template("%s > %s", $1, $3); }
|  relational_expression '<' relational_expression {$$ = template("%s < %s", $1, $3); }
|  relational_expression OP_LE relational_expression {$$ = template("%s <= %s", $1, $3);  }
|  relational_expression OP_GE relational_expression {$$ = template("%s >= %s", $1, $3);  }
;

logic_expression:
    relational_expression   {$$=template("%s",$1);}
|   OP_NOT logic_expression    {$$=template("!%s",$2);}
|   logic_expression OP_AND logic_expression   {$$=template("%s && %s",$1,$3);}
|   logic_expression OP_OR logic_expression  {$$=template("%s || %s",$1,$3);}
;

expression:
  //all airthmetic and logic expressions
  logic_expression
  //| general_identifier { $$ = template("%s", $1); }
;

//-------------------------------

basic_data_type:
	KW_INTEGER 		{ $$ = "int"; }
	| KW_BOOLEAN	{ $$ = "int"; }
	| KW_CHAR		{ $$ = "char"; }
	| KW_SCALAR	{ $$ = "double"; }
  | KW_STR    { $$ = "char * ";}
  | IDENTIFIER    { $$ = template("%s", $1);}
	;


identifier_single:
  IDENTIFIER {$$ = template( "%s", $1);}
|  IDENTIFIER  '[' POSINT ']' { $$ = template("%s[%s]", $1, $3); }
| IDENTIFIER '[' ']' { $$ = template("*%s", $1); }
;
identifier_list:
  identifier_single ',' identifier_single  {$$ = template( "%s, %s", $1, $3);}
| identifier_single ',' identifier_list {$$ = template( "%s, %s", $1, $3); }
| identifier_single 


;






constant_decl:
    KW_CONST IDENTIFIER '=' expression ':' basic_data_type ';' { $$ = template("const %s %s = %s;\n", $6, $2, $4); }
    | KW_CONST IDENTIFIER '[' expression ']' '=' expression ':' basic_data_type ';' { $$ = template("const %s %s[%s] = %s;\n", $9,$2, $4, $7); }
    | KW_CONST IDENTIFIER '[' ']' '=' expression ':' basic_data_type ';' { $$ = template("const *%s %s[] = %s;\n", $8,$2, $6); }

    ;

const_decl_list:
    %empty { $$ = template(""); }
    | const_decl_list constant_decl { $$ = template("%s%s", $1, $2); }
    ;
    

local_var_const_decl_list:
    constant_decl local_var_const_decl_list { $$ = template("%s %s", $1, $2); }
    | variable_decl local_var_const_decl_list { $$ = template("%s %s", $1, $2); }
    | local_var_const_decl { $$ = template("%s", $1); }
    | %empty { $$ = template(""); }
    ;

local_var_const_decl:

      variable_decl { $$ = template("%s", $1); }
    | constant_decl { $$ = template("%s", $1); }
    | variable_decl constant_decl { $$ = template("%s %s", $1, $2); }
    | constant_decl variable_decl { $$ = template("%s %s", $1, $2); }
    

;
    
variable_decl:


    identifier_list ':' basic_data_type ';' { $$ = template("%s %s;\n", $3, $1); }
  | parameter_declaration ';' { $$ = template("%s;\n",$1); }
    ;


variable_decl_list:
    %empty { $$ = template(""); }
    | variable_decl_list variable_decl { $$ = template("%s%s", $1, $2); }
    ;
    
//--------------------------------------

parameter_declaration:
    IDENTIFIER ':' basic_data_type { $$ = template("%s %s", $3, $1); }
    | IDENTIFIER '[' ']' ':' basic_data_type { $$ = template("%s* %s", $5, $1); }
    ;


parameter_declaration_list:
    %empty { $$ = template(""); }
    | parameter_declaration
    | parameter_declaration_list ',' parameter_declaration { $$ = template("%s, %s", $1, $3); }
    ;

general_function_call:
    function_call { $$ = template("%s", $1); }
    | IDENTIFIER '.' function_call { $$ = template("%s.%s", $1, $3); }
    | IDENTIFIER '[' expression ']' '.' function_call { $$ = template("%s[%s].%s", $1, $3, $6); }
    ;
    
    
function_call:
    IDENTIFIER '(' ')' { $$ = template("%s()", $1); }
    | IDENTIFIER '(' expr_comma_list ')' { $$ = template("%s(%s)", $1, $3); }
    ;
expr_comma_list:
    expression { $$ = template("%s", $1); }
    |  expr_comma_list ',' expression { $$ = template("%s, %s", $1, $3); }
    ;

    
assignment_operator:
    '=' { $$ = "="; }
    | OP_ASSIGN { $$ = ":="; }
    | OP_ASSIGN_PLUSEQ { $$ = "+="; }
    | OP_ASSIGN_MINUSEQ { $$ = "-="; }
    | OP_ASSIGN_MULEQ { $$ = template("*="); }
    | OP_ASSIGN_DIVEQ { $$ = template("/="); }
    | OP_ASSIGN_MODEQ { $$ = template("%%="); }
    ;

general_variable:
    IDENTIFIER { $$ = template("%s", $1); }
    | IDENTIFIER '.' '#' IDENTIFIER { $$ = template("%s.%s", $1, $4); }
    | IDENTIFIER '[' expression ']' { $$ = template("%s[%s]", $1, $3); }
    | IDENTIFIER '.' '#' IDENTIFIER '[' expression ']' { $$ = template("%s.%s[%s]", $1, $4, $6); }
    ;
    



general_identifier:
    general_variable { $$ = template("%s", $1); }
    | general_function_call { $$ = template("%s", $1); }
    ;
    


function_command_list:


    function_command { $$ = template("%s", $1); }
    | function_command_list function_command { $$ = template("%s%s", $1, $2); }
    ;
    
function_command:
    //assignment
    general_variable assignment_operator expression ';' { $$ = template("%s %s %s;\n", $1, $2,  $3); }
    
    //if statements
    | KW_IF '(' expression ')' ':' function_command_list KW_ENDIF ';' { $$ = template("if ( %s ) {\n%s\n}\n", $3, $6); }
    | KW_IF '(' expression ')' ':' function_command_list KW_ELSE ':' function_command_list KW_ENDIF ';' { $$ = template("if ( %s ) {\n%s\n}\nelse {\n%s\n}\n", $3, $6, $9); }
    
    // for statements , for can  also include an assignment of a variable
    | KW_FOR general_variable KW_IN '[' expression ':' expression ']' ':' function_command_list KW_ENDFOR ';' { $$ = template("for ( int %s = %s ; %s < %s ; %s++ ) {\n%s\n}\n", $2, $5, $2, $7, $2, $10); }
    | KW_FOR general_variable KW_IN '[' expression ':' expression ':' expression ']' ':' function_command_list KW_ENDFOR ';' { $$ = template("for ( int %s = %s ; %s < %s ; %s + (%s) ) {\n%s\n}\n", $2, $5, $2, $7, $2, $9, $12); }
    
    // new array statements
    | general_variable OP_ASSIGN '[' expression KW_FOR general_variable ':' POSINT ']' ':' basic_data_type ';' { $$ = template("%s* %s = (%s*)malloc(%s * sizeof(%s));\nfor (int %s = 0; %s < %s; ++%s)\n\t%s[%s] = %s;\n", $11, $1, $11, $8, $11, $6, $6, $8, $6, $1, $6, $4); }


    //while command
    | KW_WHILE '(' expression ')' ':' function_command_list KW_ENDWHILE ';' { $$ = template("while ( %s ) {\n%s\n}\n", $3, $6); }
    
    // break command
    | KW_BREAK ';' { $$ = template("break;\n"); }
    
    //continue command
    | KW_CONTINUE ';' { $$ = template("continue;\n"); }

    //return commands
    | KW_RETURN ';' { $$ = template("return;\n"); }
    | KW_RETURN expression ';' { $$ = template("return %s;\n", $2); }

    // function call command
    | general_function_call ';' { $$ = template("%s ;\n", $1); }
;  

function_definition_list:
    %empty { $$ = template(""); }
    | function_definition_list function_definition { $$ = template("%s%s", $1, $2); }
    ;
    
function_definition:
    // void function with multiple local decl
    KW_DEF IDENTIFIER '(' parameter_declaration_list ')' ':' local_var_const_decl_list function_command_list KW_ENDDEF ';' { $$ = template("void %s(%s) {\n%s\n%s\n} \n", $2, $4, $7, $8); }
    // void function with single local decl
    | KW_DEF IDENTIFIER '(' parameter_declaration_list ')' ':' local_var_const_decl function_command_list KW_ENDDEF ';' { $$ = template("void %s(%s) {\n%s\n%s\n} \n", $2, $4, $7, $8); }
    // void function without  local decl
    | KW_DEF IDENTIFIER '(' parameter_declaration_list ')' ':'  function_command_list KW_ENDDEF ';' { $$ = template("void %s(%s) {\n%s\n} \n", $2, $4, $7); }

    //  return function with multiple local decl
    | KW_DEF IDENTIFIER '(' parameter_declaration_list ')' '-' '>' basic_data_type ':' local_var_const_decl_list function_command_list KW_RETURN expression ';' KW_ENDDEF ';' { $$ = template("%s %s(%s) {\n%s\n%s\nreturn %s;\n}\n", $8, $2, $4, $10, $11, $13); }
    //  return function with single local decl
    | KW_DEF IDENTIFIER '(' parameter_declaration_list ')' '-' '>' basic_data_type ':' local_var_const_decl function_command_list KW_RETURN expression ';' KW_ENDDEF ';' { $$ = template("%s %s(%s) {\n%s\n%s\nreturn %s;\n}\n", $8, $2, $4, $10, $11, $13); }
        //  return function without  local decl
    | KW_DEF IDENTIFIER '(' parameter_declaration_list ')' '-' '>' basic_data_type ':'  function_command_list KW_RETURN expression ';' KW_ENDDEF ';' { $$ = template("%s %s(%s) {\n%s\nreturn %s;\n}\n", $8, $2, $4, $10, $12); }
    


    ;

//-------------------------------------------------- 
//comp function_command_list


comp_variable:
   '#' IDENTIFIER { $$ = template("%s", $2); }
    | '#' IDENTIFIER '[' comp_expression ']' { $$ = template("%s[%s]", $2, $4); }
    | comp_variable '.' '#' IDENTIFIER { $$ = template("%s.%s", $1, $4); }
    | comp_variable '.' '#' IDENTIFIER '[' POSINT ']' { $$ = template("%s.%s[%s]", $1, $4, $6); }
    | general_variable { $$ = template("%s", $1); }
    ;
    



comp_identifier:
    '#' general_variable { $$ = template("%s", $2); }
    | general_comp_function_call { $$ = template("%s", $1); }
    ;
    


//gia metaa

comp_function_call:
    IDENTIFIER '(' ')' { $$ = template("%s()", $1); }
    | IDENTIFIER '(' comp_expr_comma_list ')' { $$ = template("%s(%s)", $1, $3); }
    ;


general_comp_function_call:
    comp_function_call { $$ = template("%s", $1); }
    | '#' IDENTIFIER '.' comp_function_call { $$ = template("%s.%s", $2, $4); }
    | '#' IDENTIFIER '[' comp_expression ']' '.' comp_function_call { $$ = template("%s[%s].%s", $2, $4, $7); }
;

comp_expr_comma_list:
    comp_expression { $$ = template("%s", $1); }
    |  comp_expr_comma_list ',' comp_expression { $$ = template("%s, %s", $1, $3); }
    ;



comp_primary_expression :
    POSINT      {$$=template("%s",$1);}     
|   SCALAR     {$$=template("%s",$1);}
|   '#' IDENTIFIER    {$$=template("%s",$2);}     %prec ident
|   IDENTIFIER    {$$=template("%s",$1);}     %prec ident
|   STRING   {$$=template("%s",$1);}
|   KW_TRUE     {$$=template("1");}
|   KW_FALSE    {$$=template("0");}
|   '(' logic_expression ')'     {$$=template("(%s)",$2);}

;


comp_math_expression:
   comp_primary_expression {$$=template("%s",$1);}
|  '+' comp_math_expression   { $$ = template("+%s", $2); }
|  '-' comp_math_expression   { $$ = template("-%s", $2); }
|  comp_math_expression '+' comp_math_expression { $$ = template("%s + %s", $1, $3); }
|  comp_math_expression '-' comp_math_expression { $$ = template("%s - %s", $1, $3); }
|  comp_math_expression '*' comp_math_expression {$$ = template("%s * %s", $1, $3); }
|  comp_math_expression '/' comp_math_expression {$$ = template("%s / %s", $1, $3); }
|  comp_math_expression '%' comp_math_expression {$$ = template("%s %% %s", $1, $3);  }
|  comp_math_expression OP_PAW comp_math_expression {$$ = template("pow(%s,%s)", $1, $3);  }
| '#' IDENTIFIER '[' comp_expression ']' { $$ = template("%s[%s]", $2, $4); }
| '#' IDENTIFIER '[' comp_expression ']' '.' '#' IDENTIFIER  { $$ = template("%s[%s].%s", $2, $4,$8); }
| '#' IDENTIFIER '[' comp_expression ']' '.' '#' IDENTIFIER '[' comp_expression ']' { $$ = template("%s[%s].%s[%s]", $2, $4,$8,$10); }

| general_comp_function_call { $$ = template("%s", $1); }

| '#' IDENTIFIER '.' '#' IDENTIFIER '[' comp_expression ']' { $$ = template("%s.%s[%s]", $2, $5, $7); }
| '#' IDENTIFIER '.' '#' IDENTIFIER { $$ = template("%s.%s", $2, $5); }
;

comp_relational_expression:
   comp_math_expression {$$=template("%s",$1);}
|  comp_relational_expression OP_EQUALS comp_relational_expression { $$ = template("%s == %s", $1, $3); }
|  comp_relational_expression OP_NE comp_relational_expression { $$ = template("%s != %s", $1, $3); }
|  comp_relational_expression '>' comp_relational_expression {$$ = template("%s > %s", $1, $3); }
|  comp_relational_expression '<' comp_relational_expression {$$ = template("%s < %s", $1, $3); }
|  comp_relational_expression OP_LE comp_relational_expression {$$ = template("%s <= %s", $1, $3);  }
|  comp_relational_expression OP_GE comp_relational_expression {$$ = template("%s >= %s", $1, $3);  }
;

comp_logic_expression:
    comp_relational_expression   {$$=template("%s",$1);}
|   OP_NOT comp_logic_expression    {$$=template("!%s",$2);}
|   comp_logic_expression OP_AND comp_logic_expression   {$$=template("%s && %s",$1,$3);}
|   comp_logic_expression OP_OR comp_logic_expression  {$$=template("%s || %s",$1,$3);}
;

comp_expression:
  //all airthmetic and logic expressions
  comp_logic_expression
  //| general_identifier { $$ = template("%s", $1); }
;




comp_command_list:


    comp_command { $$ = template("%s", $1); }
    | comp_command_list comp_command { $$ = template("%s%s", $1, $2); }
    ;
    
comp_command:
    //assignment
    comp_variable assignment_operator comp_expression ';' { $$ = template("%s %s %s;\n", $1, $2,  $3); }
    
    //if statements
    | KW_IF '(' comp_expression ')' ':' comp_command_list KW_ENDIF ';' { $$ = template("if ( %s ) {\n%s\n}\n", $3, $6); }
    | KW_IF '(' comp_expression ')' ':' comp_command_list KW_ELSE ':' comp_command_list KW_ENDIF ';' { $$ = template("if ( %s ) {\n%s\n}\nelse {\n%s\n}\n", $3, $6, $9); }
    
    // for statements , for can  also include an assignment of a variable
    | KW_FOR comp_variable KW_IN '[' comp_expression ':' comp_expression ']' ':' comp_command_list KW_ENDFOR ';' { $$ = template("for ( int %s = %s ; %s < %s ; %s++ ) {\n%s\n}\n", $2, $5, $2, $7, $2, $10); }
    | KW_FOR comp_variable KW_IN '[' comp_expression ':' comp_expression ':' comp_expression ']' ':' comp_command_list KW_ENDFOR ';' { $$ = template("for ( int %s = %s ; %s < %s ; %s + (%s) ) {\n%s\n}\n", $2, $5, $2, $7, $2, $9, $12); }
    
    // new array statements
    | comp_variable OP_ASSIGN '[' comp_expression KW_FOR comp_variable ':' POSINT ']' ':' basic_data_type ';' { $$ = template("%s* %s = (%s*)malloc(%s * sizeof(%s));\nfor (int %s = 0; %s < %s; ++%s)\n\t%s[%s] = %s;\n", $11, $1, $11, $8, $11, $6, $6, $8, $6, $1, $6, $4); }

    //while command
    | KW_WHILE '(' comp_expression ')' ':' comp_command_list KW_ENDWHILE ';' { $$ = template("while ( %s ) {\n%s\n}\n", $3, $6); }
    
    // break command
    | KW_BREAK ';' { $$ = template("break;\n"); }
    
    //continue command
    | KW_CONTINUE ';' { $$ = template("continue;\n"); }

    //return commands
    | KW_RETURN ';' { $$ = template("return;\n"); }
    | KW_RETURN comp_expression ';' { $$ = template("return %s;\n", $2); }

    // function call command
    | general_comp_function_call ';' { $$ = template("%s ;\n", $1); }
;  

comp_function_definition_list:
    %empty { $$ = template(""); }
    | comp_function_definition_list comp_function_definition { $$ = template("%s%s", $1, $2); }
    ;
    
comp_function_definition:
    // void function with multible local declarations 
    KW_DEF IDENTIFIER '(' parameter_declaration_list ')' ':' local_var_const_decl_list comp_command_list KW_ENDDEF ';' { $$ = template("void %s(%s) {\n%s\n%s\n} \n", $2, $4, $7, $8); }
    // void function with single local declaration
    | KW_DEF IDENTIFIER '(' parameter_declaration_list ')' ':' local_var_const_decl comp_command_list KW_ENDDEF ';' { $$ = template("void %s(%s) {\n%s\n%s\n} \n", $2, $4, $7, $8); }
    // void function without local declaration
    | KW_DEF IDENTIFIER '(' parameter_declaration_list ')' ':'  comp_command_list KW_ENDDEF ';' { $$ = template("void %s(%s) {\n%s\n} \n", $2, $4, $7); }
    
    // return function with multiple local declr 
    | KW_DEF IDENTIFIER '(' parameter_declaration_list ')' '-' '>' basic_data_type ':' local_var_const_decl_list comp_command_list KW_RETURN comp_expression ';' KW_ENDDEF ';' { $$ = template("%s %s(%s) {\n%s\n%s\nreturn %s;\n}\n", $8, $2, $4, $10, $11, $13); }
    // return function without local declr 
    | KW_DEF IDENTIFIER '(' parameter_declaration_list ')' '-' '>' basic_data_type ':'  comp_command_list KW_RETURN comp_expression ';' KW_ENDDEF ';' { $$ = template("%s %s(%s) {\n%s\nreturn %s;\n}\n", $8, $2, $4, $10,  $12); }
     // return function with single local declr 
    | KW_DEF IDENTIFIER '(' parameter_declaration_list ')' '-' '>' basic_data_type ':' local_var_const_decl comp_command_list KW_RETURN comp_expression ';' KW_ENDDEF ';' { $$ = template("%s %s(%s) {\n%s\n%s\nreturn %s;\n}\n", $8, $2, $4, $10, $11, $13); }

    //| KW_DEF IDENTIFIER '(' parameter_declaration_list ')' '-' '>' basic_data_type ':' local_var_const_decl_list KW_RETURN comp_expression ';' KW_ENDDEF ';' { $$ = template("%s %s(%s) {\n%s\nreturn %s;\n}\n", $8, $2, $4, $10, $12); }
;

comp_var_decl_list:
    comp_var_decl { $$ = template("%s", $1); }
    | comp_var_decl_list comp_var_decl { $$ = template("%s%s", $1, $2); }
    ;

comp_var_decl:
    comp_identifier_list ':' basic_data_type ';' { $$ = template("%s %s;\n", $3, $1); }
    ;
    
comp_identifier_list:
    '#' IDENTIFIER { $$ = template("%s", $2); }
    | '#' IDENTIFIER '[' comp_expression ']' { $$ = template("%s[%s]", $2, $4); }
    | '#' IDENTIFIER '[' ']' { $$ = template("*%s", $2); }
    | comp_identifier_list ',' '#' IDENTIFIER { $$ = template("%s, %s", $1, $4); }
    | comp_identifier_list ',' '#' IDENTIFIER '[' comp_expression ']' { $$ = template("%s, %s[%s]", $1, $4, $6); }
    | comp_identifier_list ',' '#' IDENTIFIER '[' ']' { $$ = template("%s, *%s", $1, $4); }
    ;

    
comp_definition:
    // comp with multiple local definitions
    KW_COMP IDENTIFIER ':' comp_var_decl_list comp_function_definition_list KW_ENDCOMP ';' { $$ = template("typedef struct %s {\n%s\n%s} %s ;\n", $2, $4, $5, $2); }
    // comp with single local definitions
    | KW_COMP IDENTIFIER ':' comp_var_decl comp_function_definition_list KW_ENDCOMP ';' { $$ = template("typedef struct %s {\n%s\n%s} %s ;\n", $2, $4, $5, $2); }
    // comp without local definitions
    | KW_COMP IDENTIFIER ':'  comp_function_definition_list KW_ENDCOMP ';' { $$ = template("typedef struct %s {\\n%s} %s ;\n", $2, $4, $2); }
;

comp_definition_list:
    %empty { $$ = template(""); }
    | comp_definition_list comp_definition { $$ = template("%s%s", $1, $2); }
    ;


main_unit:
    // main with multiple local definition
    KW_DEF KW_MAIN '(' ')' ':' local_var_const_decl_list function_command_list KW_ENDDEF ';' { $$ = template("int main() {\n%s\n%s\nreturn 0;\n}\n", $6, $7); }
    // main with single local definition
    | KW_DEF KW_MAIN '(' ')' ':' local_var_const_decl function_command_list KW_ENDDEF ';' { $$ = template("int main() {\n%s\n%s\nreturn 0;\n}\n", $6, $7); }
    // main without lcal definition
    | KW_DEF KW_MAIN '(' ')' ':'  function_command_list KW_ENDDEF ';' { $$ = template("int main() {\n%s\nreturn 0;\n}\n", $6); }

    ;

%%
int main () {
  if ( yyparse() == 0 )
    printf("Accepted!\n");
  else
    printf("Rejected!\n");
}
