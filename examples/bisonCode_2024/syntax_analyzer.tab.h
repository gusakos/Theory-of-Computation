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

#ifndef YY_YY_SYNTAX_ANALYZER_TAB_H_INCLUDED
# define YY_YY_SYNTAX_ANALYZER_TAB_H_INCLUDED
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
    ident = 258,                   /* ident  */
    IDENTIFIER = 259,              /* IDENTIFIER  */
    POSINT = 260,                  /* POSINT  */
    SCALAR = 261,                  /* SCALAR  */
    STRING = 262,                  /* STRING  */
    COMP_VAR = 263,                /* COMP_VAR  */
    KW_IF = 264,                   /* KW_IF  */
    KW_ELSE = 265,                 /* KW_ELSE  */
    KW_ENDIF = 266,                /* KW_ENDIF  */
    KW_DEF = 267,                  /* KW_DEF  */
    KW_ENDED = 268,                /* KW_ENDED  */
    KW_COMP = 269,                 /* KW_COMP  */
    KW_ENDCOMP = 270,              /* KW_ENDCOMP  */
    KW_CONTINUE = 271,             /* KW_CONTINUE  */
    KW_FOR = 272,                  /* KW_FOR  */
    KW_ENDFOR = 273,               /* KW_ENDFOR  */
    KW_WHILE = 274,                /* KW_WHILE  */
    KW_ENDWHILE = 275,             /* KW_ENDWHILE  */
    KW_OF = 276,                   /* KW_OF  */
    KW_BREAK = 277,                /* KW_BREAK  */
    OP_AND = 278,                  /* OP_AND  */
    OP_OR = 279,                   /* OP_OR  */
    OP_NOT = 280,                  /* OP_NOT  */
    KW_MAIN = 281,                 /* KW_MAIN  */
    KW_TRUE = 282,                 /* KW_TRUE  */
    KW_FALSE = 283,                /* KW_FALSE  */
    KW_BOOLEAN = 284,              /* KW_BOOLEAN  */
    KW_CONST = 285,                /* KW_CONST  */
    KW_STR = 286,                  /* KW_STR  */
    KW_IN = 287,                   /* KW_IN  */
    KW_ENDDEF = 288,               /* KW_ENDDEF  */
    KW_INTEGER = 289,              /* KW_INTEGER  */
    KW_SCALAR = 290,               /* KW_SCALAR  */
    KW_RETURN = 291,               /* KW_RETURN  */
    KW_FUNCTION = 292,             /* KW_FUNCTION  */
    KW_CHAR = 293,                 /* KW_CHAR  */
    OP_PAW = 294,                  /* OP_PAW  */
    OP_EQUALS = 295,               /* OP_EQUALS  */
    OP_NE = 296,                   /* OP_NE  */
    OP_LE = 297,                   /* OP_LE  */
    OP_GE = 298,                   /* OP_GE  */
    OP_ARROW = 299,                /* OP_ARROW  */
    OP_ASSIGN = 300,               /* OP_ASSIGN  */
    OP_ASSIGN_PLUSEQ = 301,        /* OP_ASSIGN_PLUSEQ  */
    OP_ASSIGN_MULEQ = 302,         /* OP_ASSIGN_MULEQ  */
    OP_ASSIGN_DIVEQ = 303,         /* OP_ASSIGN_DIVEQ  */
    OP_ASSIGN_MODEQ = 304,         /* OP_ASSIGN_MODEQ  */
    OP_ASSIGN_MINUSEQ = 305,       /* OP_ASSIGN_MINUSEQ  */
    USIGN = 306,                   /* USIGN  */
    UNOT = 307,                    /* UNOT  */
    ident2 = 308                   /* ident2  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 15 "syntax_analyzer.y"

	char* str;

#line 121 "syntax_analyzer.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SYNTAX_ANALYZER_TAB_H_INCLUDED  */
