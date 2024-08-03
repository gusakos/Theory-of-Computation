/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_MYANALYSER_TAB_H_INCLUDED
# define YY_YY_MYANALYSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENTIFIER = 258,              /* IDENTIFIER  */
    INTEGER = 259,                 /* INTEGER  */
    SCALAR = 260,                  /* SCALAR  */
    STRING = 261,                  /* STRING  */
    COMP_VAR = 262,                /* COMP_VAR  */
    KW_IF = 263,                   /* KW_IF  */
    KW_DEF = 264,                  /* KW_DEF  */
    KW_INTEGER = 265,              /* KW_INTEGER  */
    KW_ELSE = 266,                 /* KW_ELSE  */
    KW_ENDIF = 267,                /* KW_ENDIF  */
    KW_SCALAR = 268,               /* KW_SCALAR  */
    KW_STR = 269,                  /* KW_STR  */
    KW_BOOLEAN = 270,              /* KW_BOOLEAN  */
    KW_TRUE = 271,                 /* KW_TRUE  */
    KW_FALSE = 272,                /* KW_FALSE  */
    KW_CONST = 273,                /* KW_CONST  */
    KW_FOR = 274,                  /* KW_FOR  */
    KW_IN = 275,                   /* KW_IN  */
    KW_ENDFOR = 276,               /* KW_ENDFOR  */
    KW_WHILE = 277,                /* KW_WHILE  */
    KW_ENDWHILE = 278,             /* KW_ENDWHILE  */
    KW_BREAK = 279,                /* KW_BREAK  */
    KW_CONTINUE = 280,             /* KW_CONTINUE  */
    KW_ENDDEF = 281,               /* KW_ENDDEF  */
    KW_RETURN = 282,               /* KW_RETURN  */
    KW_COMP = 283,                 /* KW_COMP  */
    KW_ENDCOMP = 284,              /* KW_ENDCOMP  */
    KW_OF = 285,                   /* KW_OF  */
    POW = 286,                     /* POW  */
    EQUALS = 287,                  /* EQUALS  */
    NE = 288,                      /* NE  */
    LE = 289,                      /* LE  */
    GE = 290,                      /* GE  */
    OP_AND = 291,                  /* OP_AND  */
    OP_OR = 292,                   /* OP_OR  */
    OP_NOT = 293,                  /* OP_NOT  */
    ASSIGN_EQ = 294,               /* ASSIGN_EQ  */
    ASSIGN_PLUSEQ = 295,           /* ASSIGN_PLUSEQ  */
    ASSIGN_MINUSEQ = 296,          /* ASSIGN_MINUSEQ  */
    ASSIGN_MULEQ = 297,            /* ASSIGN_MULEQ  */
    ASSIGN_DIVEQ = 298,            /* ASSIGN_DIVEQ  */
    ASSIGN_MODEQ = 299,            /* ASSIGN_MODEQ  */
    KW_MAIN = 300,                 /* KW_MAIN  */
    SIMPLE_ARRAY = 301,            /* SIMPLE_ARRAY  */
    RETURN_ID = 302                /* RETURN_ID  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 12 "myanalyser.y"

	char* str;

#line 115 "myanalyser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_MYANALYSER_TAB_H_INCLUDED  */
