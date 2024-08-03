/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "syntax_analyzer.y"

  #include <stdio.h>
  #include "cgen.h"
  #include <string.h>
  #include <stdlib.h>

  extern int yylex(void);
  extern int line_num;




#line 84 "syntax_analyzer.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "syntax_analyzer.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ident = 3,                      /* ident  */
  YYSYMBOL_IDENTIFIER = 4,                 /* IDENTIFIER  */
  YYSYMBOL_POSINT = 5,                     /* POSINT  */
  YYSYMBOL_SCALAR = 6,                     /* SCALAR  */
  YYSYMBOL_STRING = 7,                     /* STRING  */
  YYSYMBOL_COMP_VAR = 8,                   /* COMP_VAR  */
  YYSYMBOL_KW_IF = 9,                      /* KW_IF  */
  YYSYMBOL_KW_ELSE = 10,                   /* KW_ELSE  */
  YYSYMBOL_KW_ENDIF = 11,                  /* KW_ENDIF  */
  YYSYMBOL_KW_DEF = 12,                    /* KW_DEF  */
  YYSYMBOL_KW_ENDED = 13,                  /* KW_ENDED  */
  YYSYMBOL_KW_COMP = 14,                   /* KW_COMP  */
  YYSYMBOL_KW_ENDCOMP = 15,                /* KW_ENDCOMP  */
  YYSYMBOL_KW_CONTINUE = 16,               /* KW_CONTINUE  */
  YYSYMBOL_KW_FOR = 17,                    /* KW_FOR  */
  YYSYMBOL_KW_ENDFOR = 18,                 /* KW_ENDFOR  */
  YYSYMBOL_KW_WHILE = 19,                  /* KW_WHILE  */
  YYSYMBOL_KW_ENDWHILE = 20,               /* KW_ENDWHILE  */
  YYSYMBOL_KW_OF = 21,                     /* KW_OF  */
  YYSYMBOL_KW_BREAK = 22,                  /* KW_BREAK  */
  YYSYMBOL_OP_AND = 23,                    /* OP_AND  */
  YYSYMBOL_OP_OR = 24,                     /* OP_OR  */
  YYSYMBOL_OP_NOT = 25,                    /* OP_NOT  */
  YYSYMBOL_KW_MAIN = 26,                   /* KW_MAIN  */
  YYSYMBOL_KW_TRUE = 27,                   /* KW_TRUE  */
  YYSYMBOL_KW_FALSE = 28,                  /* KW_FALSE  */
  YYSYMBOL_KW_BOOLEAN = 29,                /* KW_BOOLEAN  */
  YYSYMBOL_KW_CONST = 30,                  /* KW_CONST  */
  YYSYMBOL_KW_STR = 31,                    /* KW_STR  */
  YYSYMBOL_KW_IN = 32,                     /* KW_IN  */
  YYSYMBOL_KW_ENDDEF = 33,                 /* KW_ENDDEF  */
  YYSYMBOL_KW_INTEGER = 34,                /* KW_INTEGER  */
  YYSYMBOL_KW_SCALAR = 35,                 /* KW_SCALAR  */
  YYSYMBOL_KW_RETURN = 36,                 /* KW_RETURN  */
  YYSYMBOL_KW_FUNCTION = 37,               /* KW_FUNCTION  */
  YYSYMBOL_KW_CHAR = 38,                   /* KW_CHAR  */
  YYSYMBOL_OP_PAW = 39,                    /* OP_PAW  */
  YYSYMBOL_OP_EQUALS = 40,                 /* OP_EQUALS  */
  YYSYMBOL_OP_NE = 41,                     /* OP_NE  */
  YYSYMBOL_OP_LE = 42,                     /* OP_LE  */
  YYSYMBOL_OP_GE = 43,                     /* OP_GE  */
  YYSYMBOL_OP_ARROW = 44,                  /* OP_ARROW  */
  YYSYMBOL_OP_ASSIGN = 45,                 /* OP_ASSIGN  */
  YYSYMBOL_OP_ASSIGN_PLUSEQ = 46,          /* OP_ASSIGN_PLUSEQ  */
  YYSYMBOL_OP_ASSIGN_MULEQ = 47,           /* OP_ASSIGN_MULEQ  */
  YYSYMBOL_OP_ASSIGN_DIVEQ = 48,           /* OP_ASSIGN_DIVEQ  */
  YYSYMBOL_OP_ASSIGN_MODEQ = 49,           /* OP_ASSIGN_MODEQ  */
  YYSYMBOL_OP_ASSIGN_MINUSEQ = 50,         /* OP_ASSIGN_MINUSEQ  */
  YYSYMBOL_51_ = 51,                       /* '>'  */
  YYSYMBOL_52_ = 52,                       /* '<'  */
  YYSYMBOL_53_ = 53,                       /* '-'  */
  YYSYMBOL_54_ = 54,                       /* '+'  */
  YYSYMBOL_55_ = 55,                       /* '*'  */
  YYSYMBOL_56_ = 56,                       /* '/'  */
  YYSYMBOL_57_ = 57,                       /* '%'  */
  YYSYMBOL_58_ = 58,                       /* '#'  */
  YYSYMBOL_USIGN = 59,                     /* USIGN  */
  YYSYMBOL_UNOT = 60,                      /* UNOT  */
  YYSYMBOL_ident2 = 61,                    /* ident2  */
  YYSYMBOL_62_ = 62,                       /* '('  */
  YYSYMBOL_63_ = 63,                       /* ')'  */
  YYSYMBOL_64_ = 64,                       /* '['  */
  YYSYMBOL_65_ = 65,                       /* ']'  */
  YYSYMBOL_66_ = 66,                       /* '.'  */
  YYSYMBOL_67_ = 67,                       /* ','  */
  YYSYMBOL_68_ = 68,                       /* '='  */
  YYSYMBOL_69_ = 69,                       /* ':'  */
  YYSYMBOL_70_ = 70,                       /* ';'  */
  YYSYMBOL_YYACCEPT = 71,                  /* $accept  */
  YYSYMBOL_input = 72,                     /* input  */
  YYSYMBOL_primary_expression = 73,        /* primary_expression  */
  YYSYMBOL_math_expression = 74,           /* math_expression  */
  YYSYMBOL_relational_expression = 75,     /* relational_expression  */
  YYSYMBOL_logic_expression = 76,          /* logic_expression  */
  YYSYMBOL_expression = 77,                /* expression  */
  YYSYMBOL_basic_data_type = 78,           /* basic_data_type  */
  YYSYMBOL_identifier_single = 79,         /* identifier_single  */
  YYSYMBOL_identifier_list = 80,           /* identifier_list  */
  YYSYMBOL_constant_decl = 81,             /* constant_decl  */
  YYSYMBOL_local_var_const_decl_list = 82, /* local_var_const_decl_list  */
  YYSYMBOL_local_var_const_decl = 83,      /* local_var_const_decl  */
  YYSYMBOL_variable_decl = 84,             /* variable_decl  */
  YYSYMBOL_parameter_declaration = 85,     /* parameter_declaration  */
  YYSYMBOL_parameter_declaration_list = 86, /* parameter_declaration_list  */
  YYSYMBOL_general_function_call = 87,     /* general_function_call  */
  YYSYMBOL_function_call = 88,             /* function_call  */
  YYSYMBOL_expr_comma_list = 89,           /* expr_comma_list  */
  YYSYMBOL_assignment_operator = 90,       /* assignment_operator  */
  YYSYMBOL_general_variable = 91,          /* general_variable  */
  YYSYMBOL_function_command_list = 92,     /* function_command_list  */
  YYSYMBOL_function_command = 93,          /* function_command  */
  YYSYMBOL_function_definition_list = 94,  /* function_definition_list  */
  YYSYMBOL_function_definition = 95,       /* function_definition  */
  YYSYMBOL_comp_variable = 96,             /* comp_variable  */
  YYSYMBOL_comp_function_call = 97,        /* comp_function_call  */
  YYSYMBOL_general_comp_function_call = 98, /* general_comp_function_call  */
  YYSYMBOL_comp_expr_comma_list = 99,      /* comp_expr_comma_list  */
  YYSYMBOL_comp_primary_expression = 100,  /* comp_primary_expression  */
  YYSYMBOL_comp_math_expression = 101,     /* comp_math_expression  */
  YYSYMBOL_comp_relational_expression = 102, /* comp_relational_expression  */
  YYSYMBOL_comp_logic_expression = 103,    /* comp_logic_expression  */
  YYSYMBOL_comp_expression = 104,          /* comp_expression  */
  YYSYMBOL_comp_command_list = 105,        /* comp_command_list  */
  YYSYMBOL_comp_command = 106,             /* comp_command  */
  YYSYMBOL_comp_function_definition_list = 107, /* comp_function_definition_list  */
  YYSYMBOL_comp_function_definition = 108, /* comp_function_definition  */
  YYSYMBOL_comp_var_decl_list = 109,       /* comp_var_decl_list  */
  YYSYMBOL_comp_var_decl = 110,            /* comp_var_decl  */
  YYSYMBOL_comp_identifier_list = 111,     /* comp_identifier_list  */
  YYSYMBOL_comp_definition = 112,          /* comp_definition  */
  YYSYMBOL_comp_definition_list = 113,     /* comp_definition_list  */
  YYSYMBOL_main_unit = 114                 /* main_unit  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1101

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  192
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  530

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   308


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,    58,     2,    57,     2,     2,
      62,    63,    55,    54,    67,    53,    66,    56,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    69,    70,
      52,    68,    51,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    64,     2,    65,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    59,    60,    61
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   155,   155,   190,   191,   192,   194,   195,   196,   197,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   215,   216,   217,   222,   223,   224,   225,   226,
     227,   228,   232,   233,   234,   235,   240,   247,   248,   249,
     250,   251,   252,   257,   258,   259,   262,   263,   264,   275,
     276,   277,   288,   289,   290,   291,   296,   297,   298,   299,
     307,   308,   320,   321,   326,   327,   328,   332,   333,   334,
     339,   340,   343,   344,   349,   350,   351,   352,   353,   354,
     355,   359,   360,   361,   362,   378,   379,   384,   387,   388,
     391,   392,   395,   399,   402,   405,   408,   409,   412,   416,
     417,   422,   424,   426,   429,   431,   433,   444,   445,   446,
     447,   448,   464,   465,   470,   471,   472,   476,   477,   483,
     484,   485,   486,   487,   488,   489,   490,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   509,
     511,   512,   516,   517,   518,   519,   520,   521,   522,   526,
     527,   528,   529,   534,   544,   545,   550,   553,   554,   557,
     558,   561,   564,   567,   570,   573,   574,   577,   581,   582,
     587,   589,   591,   594,   596,   598,   604,   605,   609,   613,
     614,   615,   616,   617,   618,   624,   626,   628,   632,   633,
     639,   641,   643
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ident", "IDENTIFIER",
  "POSINT", "SCALAR", "STRING", "COMP_VAR", "KW_IF", "KW_ELSE", "KW_ENDIF",
  "KW_DEF", "KW_ENDED", "KW_COMP", "KW_ENDCOMP", "KW_CONTINUE", "KW_FOR",
  "KW_ENDFOR", "KW_WHILE", "KW_ENDWHILE", "KW_OF", "KW_BREAK", "OP_AND",
  "OP_OR", "OP_NOT", "KW_MAIN", "KW_TRUE", "KW_FALSE", "KW_BOOLEAN",
  "KW_CONST", "KW_STR", "KW_IN", "KW_ENDDEF", "KW_INTEGER", "KW_SCALAR",
  "KW_RETURN", "KW_FUNCTION", "KW_CHAR", "OP_PAW", "OP_EQUALS", "OP_NE",
  "OP_LE", "OP_GE", "OP_ARROW", "OP_ASSIGN", "OP_ASSIGN_PLUSEQ",
  "OP_ASSIGN_MULEQ", "OP_ASSIGN_DIVEQ", "OP_ASSIGN_MODEQ",
  "OP_ASSIGN_MINUSEQ", "'>'", "'<'", "'-'", "'+'", "'*'", "'/'", "'%'",
  "'#'", "USIGN", "UNOT", "ident2", "'('", "')'", "'['", "']'", "'.'",
  "','", "'='", "':'", "';'", "$accept", "input", "primary_expression",
  "math_expression", "relational_expression", "logic_expression",
  "expression", "basic_data_type", "identifier_single", "identifier_list",
  "constant_decl", "local_var_const_decl_list", "local_var_const_decl",
  "variable_decl", "parameter_declaration", "parameter_declaration_list",
  "general_function_call", "function_call", "expr_comma_list",
  "assignment_operator", "general_variable", "function_command_list",
  "function_command", "function_definition_list", "function_definition",
  "comp_variable", "comp_function_call", "general_comp_function_call",
  "comp_expr_comma_list", "comp_primary_expression",
  "comp_math_expression", "comp_relational_expression",
  "comp_logic_expression", "comp_expression", "comp_command_list",
  "comp_command", "comp_function_definition_list",
  "comp_function_definition", "comp_var_decl_list", "comp_var_decl",
  "comp_identifier_list", "comp_definition", "comp_definition_list",
  "main_unit", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-317)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-177)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -317,    15,    42,  -317,   -31,    30,    55,   -25,    -3,    25,
    -317,  -317,    25,     3,  -317,    12,   124,    47,   129,    63,
     124,  -317,    25,   118,    25,  -317,  -317,    95,    74,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,    93,   505,   637,   119,
     -25,  -317,   137,     5,  -317,  -317,  -317,   124,   211,   210,
      93,   177,    48,    78,  -317,  -317,  -317,   637,  -317,  -317,
     424,   424,   637,   178,  -317,   290,   448,   277,   194,  -317,
    -317,   192,    23,  -317,   204,   209,  -317,   228,   308,   249,
    -317,   284,  -317,   302,   266,   124,   586,   637,   326,  -317,
     132,   132,    13,   637,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   424,   424,   637,   637,   264,   124,
    -317,   334,   295,   396,   291,  -317,   289,   296,   364,   301,
    -317,  -317,   181,   319,    18,  -317,  -317,   304,  -317,   132,
     132,   341,   341,   341,   121,   121,  -317,  -317,  -317,  -317,
    -317,   367,   637,   317,   165,  -317,   189,   323,   333,  -317,
    -317,  -317,   601,  -317,  -317,   630,   630,   392,   637,  -317,
    -317,  -317,  -317,   416,   484,   282,   339,   334,  -317,  -317,
     335,  -317,  -317,   637,   340,   637,   124,   336,  -317,   343,
     -29,   334,   862,   569,  -317,   182,   182,   102,    87,   630,
     630,   630,   630,   630,   630,   630,   630,   630,   630,   630,
     630,   601,   601,  -317,   195,   489,  -317,   406,   346,   345,
     124,    74,   369,   862,  -317,   112,   356,   352,   421,   365,
     362,   142,  1036,  1036,   366,    86,   884,  -317,  -317,   217,
    -317,   601,    10,  -317,  -317,   182,   182,   387,   387,   387,
     159,   159,  -317,  -317,  -317,  -317,  -317,   414,    76,  -317,
     373,   152,  -317,  -317,  -317,   371,   124,  1036,  1036,   893,
     556,    21,   637,  -317,   224,   410,   637,  -317,  -317,   374,
     187,   914,   918,  -317,   382,  -317,  -317,  -317,  -317,  -317,
    -317,   637,   377,  -317,  -317,   601,   383,   333,   449,  -317,
     412,   657,  -317,   637,  -317,   391,   939,   948,   394,    95,
     401,   418,   464,   411,   637,   423,   419,   413,  -317,   637,
     417,   422,   637,   427,  -317,  -317,   435,   420,   124,   203,
     440,   433,    43,   442,   436,    16,   503,   803,   803,  -317,
     315,   438,   685,  -317,   450,   862,   451,   452,  -317,   453,
     454,   462,   455,   637,   465,  -317,  -317,   520,  -317,    49,
     601,   470,   556,   601,  -317,   536,    -2,   601,  -317,  -317,
     471,   254,   213,   694,   715,   481,   488,   601,  -317,   480,
    -317,  -317,  1036,  1036,  1040,  -317,  -317,   548,   637,  1036,
    -317,   486,  1036,   421,   549,  -317,   491,   657,   494,   502,
     504,   506,  -317,   601,   568,   501,   507,   601,   574,   509,
    -317,  1061,  1065,   142,   515,   858,   637,   969,   513,   521,
    -317,   803,   803,   812,   517,   601,   601,   518,   523,  -317,
    -317,   572,   531,  -317,   142,   142,   534,  -317,   543,   545,
     218,   546,   612,   601,   828,   837,    16,   803,   554,   551,
     803,   558,    43,   620,   560,   563,   605,  1036,  -317,   576,
     637,  -317,   581,   582,    16,    16,   580,    83,  -317,   601,
     719,   568,   286,   587,   618,   623,   583,   990,  1036,   595,
     606,  -317,   607,   608,   647,   613,   611,   220,   615,   681,
    -317,   625,   626,  -317,   627,   999,   631,   124,   672,   673,
     638,   803,  -317,   640,   601,  -317,   649,  -317,  -317,  -317,
     642,  1036,   650,   652,   655,  -317,   745,   803,   661,   648,
    -317,  1015,  -317,  -317,  -317,   659,   766,   664,   124,   670,
    -317,   674,   803,   675,  -317,  -317,   782,  -317,   676,  -317
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     188,     0,    55,     1,    43,     0,     0,    48,     0,    55,
      99,    54,    55,     0,   189,     0,     0,     0,     0,     0,
       0,    52,    55,     0,    55,    53,    61,     0,    45,    42,
      38,    41,    37,    40,    39,    62,   168,     0,     0,    43,
      46,    47,     0,     0,   100,     2,    44,     0,     0,     0,
     168,   168,     0,     5,     3,     4,     6,     0,     7,     8,
       0,     0,     0,     0,    10,    25,    32,    36,     0,    22,
      67,     0,     0,    60,     0,     0,    63,   179,     0,     0,
     169,     0,   177,     0,     0,     0,     0,     0,     0,    33,
      12,    11,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      45,    64,     0,     0,     0,   187,     0,     0,     0,     0,
      70,    72,     0,     0,    24,    68,     9,     0,    18,    14,
      13,    15,    16,    17,    26,    27,    30,    31,    28,    29,
      34,    35,     0,     0,     0,    65,     0,     0,   122,   119,
     120,   123,     0,   124,   125,     0,     0,     0,     0,   181,
     114,   139,   127,   142,   149,   153,     0,    64,   185,   186,
     182,   178,    71,     0,    19,     0,     0,     0,    49,     0,
       0,     0,     0,     0,   150,   129,   128,   121,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   180,     0,     0,    73,     0,     0,     0,
       0,     0,     0,     0,    66,    81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,   112,     0,
     117,     0,     0,   126,   135,   131,   130,   132,   133,   134,
     143,   144,   147,   148,   145,   146,   151,   152,     0,   184,
       0,    20,    69,    23,    51,     0,     0,     0,     0,     0,
       0,     0,     0,    95,    81,     0,     0,    94,    96,     0,
      81,     0,     0,    98,    75,    76,    78,    79,    80,    77,
      74,     0,     0,    86,   113,     0,     0,     0,     0,   115,
       0,     0,   183,     0,    50,     0,     0,     0,     0,     3,
       0,     0,     0,     0,     0,     0,     0,     0,    97,     0,
       0,     0,     0,     0,   192,   118,   136,   141,     0,    81,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   111,
       0,     0,     0,   154,     0,     0,     0,     0,   103,    83,
      82,     0,     0,     0,     0,   190,   191,     0,    87,     0,
       0,     0,     0,     0,   164,     0,     0,     0,   163,   165,
       0,   107,    81,     0,     0,    75,     0,     0,   167,     0,
     155,    21,     0,     0,     0,   101,   102,     0,     0,     0,
      83,     0,     0,     0,     0,   116,     0,     0,     0,   107,
       0,     0,   166,     0,     0,     0,     0,     0,     0,     0,
     172,     0,     0,     0,     0,     0,     0,     0,     0,   137,
     140,     0,     0,     0,     0,     0,     0,     0,     0,   170,
     171,     0,   109,   156,     0,     0,     0,    84,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   108,     0,     0,     0,     0,    97,     0,    88,     0,
       0,    93,     0,     0,     0,     0,     0,     0,   108,     0,
       0,     0,     0,     0,    97,    97,     0,     0,     0,     0,
       0,   138,     0,     0,   166,     0,     0,     0,     0,     0,
     110,     0,     0,   106,     0,     0,     0,     0,   166,   166,
       0,     0,   157,     0,     0,   162,     0,   104,   105,    89,
       0,     0,     0,     0,     0,   174,     0,     0,     0,     0,
      90,     0,    92,   173,   175,     0,     0,     0,     0,     0,
     158,     0,     0,     0,    91,   159,     0,   161,     0,   160
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -317,  -317,  -317,   280,   567,   -44,   -36,   -20,   723,   728,
      96,     4,  -178,    36,  -106,   590,  -174,   -69,  -317,   428,
    -109,  -132,    38,  -317,  -317,  -315,  -229,    22,  -317,  -317,
     409,   597,   -98,  -173,  -316,   -41,   306,  -317,  -317,   700,
    -317,  -317,  -317,  -317
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,    64,    65,    66,    67,   300,    35,     7,     8,
       9,    21,    11,    12,    13,   146,    69,    70,   122,   281,
     225,   226,   227,    23,    44,   330,   160,   161,   229,   162,
     163,   164,   165,   166,   332,   333,    49,    80,    50,    51,
      52,    14,     2,    45
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      42,    68,    71,   289,   223,   145,    10,   356,   224,    74,
     230,   363,   364,    89,   287,     3,    25,    27,    92,   125,
     148,   149,   150,   151,   212,   301,    25,    76,    27,     4,
     390,    75,   250,    15,    17,   258,   106,   107,    16,   224,
     213,   152,    19,   153,   154,    22,     4,   264,   224,   224,
     121,   123,   224,   287,   184,     6,     5,   127,   286,    18,
      22,   145,   140,   141,   366,   119,    20,    39,   288,   155,
     156,   413,     6,    26,   157,   214,   126,    28,   158,   302,
      86,   259,   175,   224,   224,   224,   359,   362,   110,   143,
     271,   272,   320,   475,   476,   434,   435,   224,   224,   321,
     322,   355,   323,   246,   247,   324,   177,   384,    24,   265,
     106,   107,   315,   328,   188,    84,    36,    85,    24,   325,
     385,   457,   224,   224,   460,   296,   297,   462,    29,   290,
      43,   274,   275,   276,   277,   278,   279,   206,   252,   208,
      86,   326,    87,    47,    88,   291,    53,    54,    55,    56,
     233,    48,   360,    30,   280,    31,   209,   373,    32,    33,
      46,   224,    34,   102,   103,   289,   231,    57,   232,    58,
      59,    94,   104,   105,    86,   506,   260,   386,   261,   -43,
     388,    16,   329,    72,   391,   269,   222,    97,    98,    99,
     255,   516,   125,    37,   399,    60,    61,    38,   224,   224,
     224,   197,   198,   374,    62,   224,   526,    73,   224,   412,
     199,   200,   268,   329,    86,    77,   293,   257,   329,   329,
     418,   189,    78,   329,   421,    79,   303,   224,   224,   179,
     307,   224,   385,   224,    16,  -176,   295,   192,   193,   194,
     401,   402,   438,   439,   172,   313,    93,   405,   173,    86,
     407,   309,   180,   261,   329,   329,   181,   334,   248,   108,
     453,   109,   181,   456,   283,   183,   111,   352,   342,   305,
     -43,   112,    16,   224,   408,   183,   347,   304,   329,   305,
     284,   472,   473,   449,   285,   493,   477,   450,   304,   494,
     305,   370,   113,   224,   224,   327,    78,   283,   351,   116,
     106,   107,   329,   329,   329,   201,   202,   381,   252,   283,
     283,   224,   114,   331,    78,   467,   342,   117,   393,   115,
     394,   508,   370,   370,   118,   329,   329,   224,   329,    94,
     124,   329,   142,   329,   283,   283,   485,   224,   144,   372,
      90,    91,   404,    95,    96,    97,    98,    99,   329,   331,
     331,   329,   366,   167,   331,   479,    81,    83,   147,   168,
     365,   275,   276,   277,   278,   279,   169,   426,   170,   511,
     430,   171,   370,   176,   128,   129,   130,   131,   132,   133,
      94,   366,   329,   280,   174,   331,   331,   178,   444,   445,
     106,   411,   182,   370,   370,   183,   187,   329,   329,   205,
     148,   149,   150,   151,   203,   210,   207,   329,   211,   331,
     251,   253,   283,   329,   469,   254,   370,   329,   262,   370,
     256,   152,   263,   153,   154,   264,   189,   266,    53,    54,
      55,    56,   267,   331,   331,   331,   273,   201,   292,   283,
     283,   294,   306,   283,   308,   283,   312,   314,   316,   155,
     156,    58,    59,   317,   157,   189,   331,   331,   158,   331,
     335,   159,   331,   318,   338,   370,   339,   502,   340,   190,
     191,   192,   193,   194,   341,   370,   344,    60,    61,   331,
      86,   302,   331,   343,   350,   370,    62,   345,   100,   101,
     102,   103,   346,   148,   149,   150,   151,   348,   523,   104,
     105,   349,   353,   354,   357,   283,   358,   361,   368,    53,
      54,    55,    56,   331,   152,   371,   153,   154,   378,   377,
     380,   375,   376,   283,   195,   196,   197,   198,   331,   331,
      57,   379,    58,    59,   382,   199,   200,   383,   331,   387,
     389,   392,   155,   156,   331,   397,   398,   157,   331,   283,
     400,   158,   301,   409,   249,   406,   410,   414,    60,    61,
      53,   299,    55,    56,   185,   186,   415,    62,   416,   417,
      63,   419,   287,   148,   149,   150,   151,   420,   422,   423,
     427,    57,   432,    58,    59,   433,   437,   440,   441,   442,
      53,    54,    55,    56,   152,   443,   153,   154,   234,   235,
     236,   237,   238,   239,   446,   148,   149,   150,   151,    60,
      61,    57,   447,    58,    59,   448,   451,   452,    62,   458,
     459,    28,   155,   156,   461,   463,   152,   157,   153,   154,
     464,   158,   228,   465,   148,   149,   150,   151,   466,    60,
      61,    53,    54,    55,    56,   468,   470,   471,    62,   120,
     474,   481,   480,   483,   155,   156,   482,   153,   154,   157,
     486,   319,    57,   158,    58,    59,   320,   134,   135,   136,
     137,   138,   139,   321,   322,   487,   323,   488,   489,   324,
     490,   492,   491,   155,   156,   495,   496,     6,   157,   362,
      60,    61,   158,   325,   320,   497,   498,   499,   362,    62,
     501,   321,   322,   320,   323,   503,   504,   324,   505,   507,
     321,   322,   510,   323,   509,   326,   324,   518,   369,   362,
     512,   325,   513,   362,   320,   514,   517,   395,   320,   520,
     325,   321,   322,   522,   323,   321,   322,   324,   323,   478,
     524,   324,    40,   326,   525,   527,   529,    41,   396,   362,
      82,   325,   326,     0,   320,   325,   515,   204,   367,     0,
       0,   321,   322,     0,   323,     0,     0,   324,     0,     0,
     362,     0,     0,   326,     0,   320,     0,   326,     0,     0,
       0,   325,   321,   322,   521,   323,   362,     0,   324,     0,
       0,   320,   240,   241,   242,   243,   244,   245,   321,   322,
     528,   323,   325,   326,   324,     0,     0,   362,     0,     0,
       0,     0,   320,     0,     0,     0,   362,     0,   325,   321,
     322,   320,   323,     0,   326,   324,     0,     0,   321,   322,
       0,   323,   362,     0,   324,     0,     0,   320,     0,   325,
     326,   362,     0,     0,   321,   322,   320,   323,   436,     0,
     324,     0,     0,   321,   322,     0,   323,     0,     0,   324,
       0,   326,   270,     0,   454,     0,   215,   216,   428,   429,
     326,   216,     0,   455,   217,   218,     0,   219,   217,   218,
     220,   219,     0,     0,   220,     0,   326,     0,   270,     0,
       0,     0,     6,   216,   221,   326,     0,   270,   221,     0,
     217,   218,   216,   219,     0,     0,   220,     0,     0,   217,
     218,     0,   219,     0,     0,   220,     0,   282,   270,     0,
     221,     0,   270,   216,     0,     0,   298,   216,     0,   221,
     217,   218,     0,   219,   217,   218,   220,   219,     0,     0,
     220,     0,     0,   270,     0,     0,     0,   310,   216,     0,
     221,   311,   270,     0,   221,   217,   218,   216,   219,     0,
       0,   220,     0,     0,   217,   218,     0,   219,     0,     0,
     220,     0,   336,   270,     0,   221,     0,     0,   216,     0,
       0,   337,     0,     0,   221,   217,   218,     0,   219,   431,
       0,   220,     0,     0,   270,     0,     0,     0,     0,   216,
       0,   484,     0,   270,     0,   221,   217,   218,   216,   219,
       0,     0,   220,     0,     0,   217,   218,   500,   219,   270,
       0,   220,     0,     0,   216,     0,   221,     0,     0,     0,
       0,   217,   218,   519,   219,   221,     0,   220,     0,     0,
     270,     0,     0,     0,   270,   216,     0,     0,     0,   216,
       0,   221,   217,   218,     0,   219,   217,   218,   220,   219,
       0,     0,   220,     0,     0,   270,     0,     0,     0,   270,
     216,     0,   221,     0,   216,     0,   403,   217,   218,     0,
     219,   217,   218,   220,   219,     0,     0,   220,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   424,     0,     0,
       0,   425
};

static const yytype_int16 yycheck[] =
{
      20,    37,    38,   232,   182,   111,     2,   322,   182,     4,
     183,   327,   328,    57,     4,     0,    12,     5,    62,    88,
       4,     5,     6,     7,    53,     4,    22,    47,     5,     4,
      32,    26,   205,    64,     4,   213,    23,    24,    69,   213,
      69,    25,    67,    27,    28,     9,     4,     4,   222,   223,
      86,    87,   226,     4,   152,    30,    14,    93,   231,     4,
      24,   167,   106,   107,    66,    85,    69,     4,    58,    53,
      54,   387,    30,    70,    58,   181,    63,    65,    62,    58,
      62,   213,    64,   257,   258,   259,    70,     4,    65,   109,
     222,   223,     9,    10,    11,   411,   412,   271,   272,    16,
      17,    58,    19,   201,   202,    22,   142,    58,    12,   218,
      23,    24,   285,   291,   158,    67,    69,    69,    22,    36,
     349,   437,   296,   297,   440,   257,   258,   442,     4,    53,
      12,    45,    46,    47,    48,    49,    50,   173,   207,   175,
      62,    58,    64,    69,    66,    69,     4,     5,     6,     7,
      63,    58,   325,    29,    68,    31,   176,   335,    34,    35,
      65,   335,    38,    42,    43,   394,    64,    25,    66,    27,
      28,    39,    51,    52,    62,   491,    64,   350,    66,    67,
     353,    69,   291,    64,   357,   221,   182,    55,    56,    57,
     210,   507,   261,    64,   367,    53,    54,    68,   372,   373,
     374,    42,    43,   335,    62,   379,   522,    70,   382,   387,
      51,    52,    70,   322,    62,     4,    64,   213,   327,   328,
     393,    39,    12,   332,   397,    15,   262,   401,   402,    64,
     266,   405,   461,   407,    69,    58,   256,    55,    56,    57,
     372,   373,   415,   416,    63,   281,    68,   379,    67,    62,
     382,    64,    63,    66,   363,   364,    67,   293,    63,    65,
     433,    69,    67,   436,   226,    62,    62,    64,   304,    66,
      67,    62,    69,   447,   383,    62,   312,    64,   387,    66,
      63,   454,   455,    65,    67,    65,   459,    69,    64,    69,
      66,   332,    64,   467,   468,   291,    12,   259,   318,    15,
      23,    24,   411,   412,   413,    23,    24,   343,   377,   271,
     272,   485,     4,   291,    12,   447,   352,    15,    64,    70,
      66,   494,   363,   364,    58,   434,   435,   501,   437,    39,
       4,   440,    68,   442,   296,   297,   468,   511,     4,   335,
      60,    61,   378,    53,    54,    55,    56,    57,   457,   327,
     328,   460,    66,    62,   332,    69,    50,    51,    63,    70,
      45,    46,    47,    48,    49,    50,    70,   403,     4,   501,
     406,    70,   413,    69,    94,    95,    96,    97,    98,    99,
      39,    66,   491,    68,    65,   363,   364,    70,   424,   425,
      23,   387,    69,   434,   435,    62,     4,   506,   507,    64,
       4,     5,     6,     7,    65,    69,    66,   516,    65,   387,
       4,    65,   374,   522,   450,    70,   457,   526,    62,   460,
      51,    25,    70,    27,    28,     4,    39,    62,     4,     5,
       6,     7,    70,   411,   412,   413,    70,    23,    65,   401,
     402,    70,    32,   405,    70,   407,    64,    70,    65,    53,
      54,    27,    28,     4,    58,    39,   434,   435,    62,   437,
      69,    65,   440,    51,    70,   506,    65,   487,     4,    53,
      54,    55,    56,    57,    63,   516,    63,    53,    54,   457,
      62,    58,   460,    64,    64,   526,    62,    70,    40,    41,
      42,    43,    70,     4,     5,     6,     7,    70,   518,    51,
      52,    66,    62,    70,    62,   467,    70,     4,    70,     4,
       5,     6,     7,   491,    25,    65,    27,    28,    64,    66,
      65,    70,    70,   485,    40,    41,    42,    43,   506,   507,
      25,    69,    27,    28,    69,    51,    52,    17,   516,    69,
       4,    70,    53,    54,   522,    64,    58,    58,   526,   511,
      70,    62,     4,     4,    65,    69,    65,    63,    53,    54,
       4,     5,     6,     7,   155,   156,    64,    62,    64,    63,
      65,    70,     4,     4,     5,     6,     7,    70,     4,    70,
      65,    25,    69,    27,    28,    64,    69,    69,    65,    17,
       4,     5,     6,     7,    25,    64,    27,    28,   189,   190,
     191,   192,   193,   194,    70,     4,     5,     6,     7,    53,
      54,    25,    69,    27,    28,    70,    70,     5,    62,    65,
      69,    65,    53,    54,    66,     5,    25,    58,    27,    28,
      70,    62,    63,    70,     4,     5,     6,     7,    33,    53,
      54,     4,     5,     6,     7,    69,    65,    65,    62,    63,
      70,    33,    65,    70,    53,    54,    33,    27,    28,    58,
      65,     4,    25,    62,    27,    28,     9,   100,   101,   102,
     103,   104,   105,    16,    17,    69,    19,    70,    70,    22,
      33,    70,    69,    53,    54,    70,     5,    30,    58,     4,
      53,    54,    62,    36,     9,    70,    70,    70,     4,    62,
      69,    16,    17,     9,    19,    33,    33,    22,    70,    69,
      16,    17,    70,    19,    65,    58,    22,    69,    33,     4,
      70,    36,    70,     4,     9,    70,    65,    33,     9,    70,
      36,    16,    17,    69,    19,    16,    17,    22,    19,    20,
      70,    22,    19,    58,    70,    70,    70,    19,    33,     4,
      50,    36,    58,    -1,     9,    36,    11,   167,   330,    -1,
      -1,    16,    17,    -1,    19,    -1,    -1,    22,    -1,    -1,
       4,    -1,    -1,    58,    -1,     9,    -1,    58,    -1,    -1,
      -1,    36,    16,    17,    18,    19,     4,    -1,    22,    -1,
      -1,     9,   195,   196,   197,   198,   199,   200,    16,    17,
      18,    19,    36,    58,    22,    -1,    -1,     4,    -1,    -1,
      -1,    -1,     9,    -1,    -1,    -1,     4,    -1,    36,    16,
      17,     9,    19,    -1,    58,    22,    -1,    -1,    16,    17,
      -1,    19,     4,    -1,    22,    -1,    -1,     9,    -1,    36,
      58,     4,    -1,    -1,    16,    17,     9,    19,    36,    -1,
      22,    -1,    -1,    16,    17,    -1,    19,    -1,    -1,    22,
      -1,    58,     4,    -1,    36,    -1,     4,     9,    10,    11,
      58,     9,    -1,    36,    16,    17,    -1,    19,    16,    17,
      22,    19,    -1,    -1,    22,    -1,    58,    -1,     4,    -1,
      -1,    -1,    30,     9,    36,    58,    -1,     4,    36,    -1,
      16,    17,     9,    19,    -1,    -1,    22,    -1,    -1,    16,
      17,    -1,    19,    -1,    -1,    22,    -1,    33,     4,    -1,
      36,    -1,     4,     9,    -1,    -1,    33,     9,    -1,    36,
      16,    17,    -1,    19,    16,    17,    22,    19,    -1,    -1,
      22,    -1,    -1,     4,    -1,    -1,    -1,    33,     9,    -1,
      36,    33,     4,    -1,    36,    16,    17,     9,    19,    -1,
      -1,    22,    -1,    -1,    16,    17,    -1,    19,    -1,    -1,
      22,    -1,    33,     4,    -1,    36,    -1,    -1,     9,    -1,
      -1,    33,    -1,    -1,    36,    16,    17,    -1,    19,    20,
      -1,    22,    -1,    -1,     4,    -1,    -1,    -1,    -1,     9,
      -1,    11,    -1,     4,    -1,    36,    16,    17,     9,    19,
      -1,    -1,    22,    -1,    -1,    16,    17,    18,    19,     4,
      -1,    22,    -1,    -1,     9,    -1,    36,    -1,    -1,    -1,
      -1,    16,    17,    18,    19,    36,    -1,    22,    -1,    -1,
       4,    -1,    -1,    -1,     4,     9,    -1,    -1,    -1,     9,
      -1,    36,    16,    17,    -1,    19,    16,    17,    22,    19,
      -1,    -1,    22,    -1,    -1,     4,    -1,    -1,    -1,     4,
       9,    -1,    36,    -1,     9,    -1,    36,    16,    17,    -1,
      19,    16,    17,    22,    19,    -1,    -1,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,
      -1,    36
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    72,   113,     0,     4,    14,    30,    79,    80,    81,
      82,    83,    84,    85,   112,    64,    69,     4,     4,    67,
      69,    82,    84,    94,    81,    82,    70,     5,    65,     4,
      29,    31,    34,    35,    38,    78,    69,    64,    68,     4,
      79,    80,    78,    12,    95,   114,    65,    69,    58,   107,
     109,   110,   111,     4,     5,     6,     7,    25,    27,    28,
      53,    54,    62,    65,    73,    74,    75,    76,    77,    87,
      88,    77,    64,    70,     4,    26,    78,     4,    12,    15,
     108,   107,   110,   107,    67,    69,    62,    64,    66,    76,
      74,    74,    76,    68,    39,    53,    54,    55,    56,    57,
      40,    41,    42,    43,    51,    52,    23,    24,    65,    69,
      65,    62,    62,    64,     4,    70,    15,    15,    58,    78,
      63,    77,    89,    77,     4,    88,    63,    77,    74,    74,
      74,    74,    74,    74,    75,    75,    75,    75,    75,    75,
      76,    76,    68,    78,     4,    85,    86,    63,     4,     5,
       6,     7,    25,    27,    28,    53,    54,    58,    62,    65,
      97,    98,   100,   101,   102,   103,   104,    62,    70,    70,
       4,    70,    63,    67,    65,    64,    69,    77,    70,    64,
      63,    67,    69,    62,   103,   101,   101,     4,    76,    39,
      53,    54,    55,    56,    57,    40,    41,    42,    43,    51,
      52,    23,    24,    65,    86,    64,    77,    66,    77,    78,
      69,    65,    53,    69,    85,     4,     9,    16,    17,    19,
      22,    36,    82,    83,    87,    91,    92,    93,    63,    99,
     104,    64,    66,    63,   101,   101,   101,   101,   101,   101,
     102,   102,   102,   102,   102,   102,   103,   103,    63,    65,
     104,     4,    88,    65,    70,    78,    51,    82,    83,    92,
      64,    66,    62,    70,     4,    91,    62,    70,    70,    77,
       4,    92,    92,    70,    45,    46,    47,    48,    49,    50,
      68,    90,    33,    93,    63,    67,   104,     4,    58,    97,
      53,    69,    65,    64,    70,    78,    92,    92,    33,     5,
      77,     4,    58,    77,    64,    66,    32,    77,    70,    64,
      33,    33,    64,    77,    70,   104,    65,     4,    51,     4,
       9,    16,    17,    19,    22,    36,    58,    82,    83,    91,
      96,    98,   105,   106,    77,    69,    33,    33,    70,    65,
       4,    63,    77,    64,    63,    70,    70,    77,    70,    66,
      64,    78,    64,    62,    70,    58,    96,    62,    70,    70,
     104,     4,     4,   105,   105,    45,    66,    90,    70,    33,
     106,    65,    82,    83,    92,    70,    70,    66,    64,    69,
      65,    77,    69,    17,    58,    97,   104,    69,   104,     4,
      32,   104,    70,    64,    66,    33,    33,    64,    58,   104,
      70,    92,    92,    36,    77,    92,    69,    92,    91,     4,
      65,    82,    83,   105,    63,    64,    64,    63,   104,    70,
      70,   104,     4,    70,    36,    36,    77,    65,    10,    11,
      77,    20,    69,    64,   105,   105,    36,    69,   104,   104,
      69,    65,    17,    64,    77,    77,    70,    69,    70,    65,
      69,    70,     5,   104,    36,    36,   104,   105,    65,    69,
     105,    66,    96,     5,    70,    70,    33,    92,    69,    77,
      65,    65,   104,   104,    70,    10,    11,   104,    20,    69,
      65,    33,    33,    70,    11,    92,    65,    69,    70,    70,
      33,    69,    70,    65,    69,    70,     5,    70,    70,    70,
      18,    69,    78,    33,    33,    70,   105,    69,   104,    65,
      70,    92,    70,    70,    70,    11,   105,    65,    69,    18,
      70,    18,    69,    78,    70,    70,   105,    70,    18,    70
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    71,    72,    73,    73,    73,    73,    73,    73,    73,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    75,    75,    75,    75,    75,
      75,    75,    76,    76,    76,    76,    77,    78,    78,    78,
      78,    78,    78,    79,    79,    79,    80,    80,    80,    81,
      81,    81,    82,    82,    82,    82,    83,    83,    83,    83,
      84,    84,    85,    85,    86,    86,    86,    87,    87,    87,
      88,    88,    89,    89,    90,    90,    90,    90,    90,    90,
      90,    91,    91,    91,    91,    92,    92,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    94,
      94,    95,    95,    95,    95,    95,    95,    96,    96,    96,
      96,    96,    97,    97,    98,    98,    98,    99,    99,   100,
     100,   100,   100,   100,   100,   100,   100,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   102,   102,   102,   102,   102,   102,   102,   103,
     103,   103,   103,   104,   105,   105,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   107,   107,
     108,   108,   108,   108,   108,   108,   109,   109,   110,   111,
     111,   111,   111,   111,   111,   112,   112,   112,   113,   113,
     114,   114,   114
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     1,     1,     1,     1,     1,     1,     3,
       1,     2,     2,     3,     3,     3,     3,     3,     3,     4,
       6,     9,     1,     6,     3,     1,     3,     3,     3,     3,
       3,     3,     1,     2,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     3,     3,     3,     1,     7,
      10,     9,     2,     2,     1,     0,     1,     1,     2,     2,
       4,     2,     3,     5,     0,     1,     3,     1,     3,     6,
       3,     4,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     4,     7,     1,     2,     4,     8,    11,
      12,    14,    12,     8,     2,     2,     2,     3,     2,     0,
       2,    10,    10,     9,    16,    16,    15,     2,     5,     4,
       7,     1,     3,     4,     1,     4,     7,     1,     3,     1,
       1,     2,     1,     1,     1,     1,     3,     1,     2,     2,
       3,     3,     3,     3,     3,     3,     5,     8,    11,     1,
       8,     5,     1,     3,     3,     3,     3,     3,     3,     1,
       2,     3,     3,     1,     1,     2,     4,     8,    11,    12,
      14,    12,     8,     2,     2,     2,     3,     2,     0,     2,
      10,    10,     9,    16,    15,    16,     1,     2,     4,     2,
       5,     4,     4,     7,     6,     7,     7,     6,     0,     2,
       9,     9,     8
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* input: comp_definition_list local_var_const_decl_list function_definition_list main_unit  */
#line 156 "syntax_analyzer.y"
{ 
    (yyval.str) = template("%s\n%s\n%s\n%s\n", (yyvsp[-3].str), (yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str));
  if (yyerror_count == 0) {
    puts(c_prologue);
    printf("%s\n%s\n%s\n%s\n", (yyvsp[-3].str), (yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str)); 
  }  
}
#line 1648 "syntax_analyzer.tab.c"
    break;

  case 3: /* primary_expression: POSINT  */
#line 190 "syntax_analyzer.y"
                {(yyval.str)=template("%s",(yyvsp[0].str));}
#line 1654 "syntax_analyzer.tab.c"
    break;

  case 4: /* primary_expression: SCALAR  */
#line 191 "syntax_analyzer.y"
               {(yyval.str)=template("%s",(yyvsp[0].str));}
#line 1660 "syntax_analyzer.tab.c"
    break;

  case 5: /* primary_expression: IDENTIFIER  */
#line 192 "syntax_analyzer.y"
                  {(yyval.str)=template("%s",(yyvsp[0].str));}
#line 1666 "syntax_analyzer.tab.c"
    break;

  case 6: /* primary_expression: STRING  */
#line 194 "syntax_analyzer.y"
             {(yyval.str)=template("%s",(yyvsp[0].str));}
#line 1672 "syntax_analyzer.tab.c"
    break;

  case 7: /* primary_expression: KW_TRUE  */
#line 195 "syntax_analyzer.y"
                {(yyval.str)=template("1");}
#line 1678 "syntax_analyzer.tab.c"
    break;

  case 8: /* primary_expression: KW_FALSE  */
#line 196 "syntax_analyzer.y"
                {(yyval.str)=template("0");}
#line 1684 "syntax_analyzer.tab.c"
    break;

  case 9: /* primary_expression: '(' logic_expression ')'  */
#line 197 "syntax_analyzer.y"
                                 {(yyval.str)=template("(%s)",(yyvsp[-1].str));}
#line 1690 "syntax_analyzer.tab.c"
    break;

  case 10: /* math_expression: primary_expression  */
#line 202 "syntax_analyzer.y"
                      {(yyval.str)=template("%s",(yyvsp[0].str));}
#line 1696 "syntax_analyzer.tab.c"
    break;

  case 11: /* math_expression: '+' math_expression  */
#line 203 "syntax_analyzer.y"
                         { (yyval.str) = template("+%s", (yyvsp[0].str)); }
#line 1702 "syntax_analyzer.tab.c"
    break;

  case 12: /* math_expression: '-' math_expression  */
#line 204 "syntax_analyzer.y"
                         { (yyval.str) = template("-%s", (yyvsp[0].str)); }
#line 1708 "syntax_analyzer.tab.c"
    break;

  case 13: /* math_expression: math_expression '+' math_expression  */
#line 205 "syntax_analyzer.y"
                                       { (yyval.str) = template("%s + %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1714 "syntax_analyzer.tab.c"
    break;

  case 14: /* math_expression: math_expression '-' math_expression  */
#line 206 "syntax_analyzer.y"
                                       { (yyval.str) = template("%s - %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1720 "syntax_analyzer.tab.c"
    break;

  case 15: /* math_expression: math_expression '*' math_expression  */
#line 207 "syntax_analyzer.y"
                                       {(yyval.str) = template("%s * %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1726 "syntax_analyzer.tab.c"
    break;

  case 16: /* math_expression: math_expression '/' math_expression  */
#line 208 "syntax_analyzer.y"
                                       {(yyval.str) = template("%s / %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1732 "syntax_analyzer.tab.c"
    break;

  case 17: /* math_expression: math_expression '%' math_expression  */
#line 209 "syntax_analyzer.y"
                                       {(yyval.str) = template("%s %% %s", (yyvsp[-2].str), (yyvsp[0].str));  }
#line 1738 "syntax_analyzer.tab.c"
    break;

  case 18: /* math_expression: math_expression OP_PAW math_expression  */
#line 210 "syntax_analyzer.y"
                                          {(yyval.str) = template("pow(%s,%s)", (yyvsp[-2].str), (yyvsp[0].str));  }
#line 1744 "syntax_analyzer.tab.c"
    break;

  case 19: /* math_expression: IDENTIFIER '[' expression ']'  */
#line 211 "syntax_analyzer.y"
                                { (yyval.str) = template("%s[%s]", (yyvsp[-3].str), (yyvsp[-1].str)); }
#line 1750 "syntax_analyzer.tab.c"
    break;

  case 20: /* math_expression: IDENTIFIER '[' expression ']' '.' IDENTIFIER  */
#line 212 "syntax_analyzer.y"
                                               { (yyval.str) = template("%s[%s].%s", (yyvsp[-5].str), (yyvsp[-3].str) , (yyvsp[0].str)); }
#line 1756 "syntax_analyzer.tab.c"
    break;

  case 21: /* math_expression: IDENTIFIER '[' expression ']' '.' IDENTIFIER '[' expression ']'  */
#line 213 "syntax_analyzer.y"
                                                                   { (yyval.str) = template("%s[%s].%s[%s]", (yyvsp[-8].str), (yyvsp[-6].str),(yyvsp[-3].str),(yyvsp[-1].str)); }
#line 1762 "syntax_analyzer.tab.c"
    break;

  case 22: /* math_expression: general_function_call  */
#line 215 "syntax_analyzer.y"
                        { (yyval.str) = template("%s", (yyvsp[0].str)); }
#line 1768 "syntax_analyzer.tab.c"
    break;

  case 23: /* math_expression: IDENTIFIER '.' IDENTIFIER '[' expression ']'  */
#line 216 "syntax_analyzer.y"
                                                { (yyval.str) = template("%s.%s[%s]", (yyvsp[-5].str), (yyvsp[-3].str), (yyvsp[-1].str)); }
#line 1774 "syntax_analyzer.tab.c"
    break;

  case 24: /* math_expression: IDENTIFIER '.' IDENTIFIER  */
#line 217 "syntax_analyzer.y"
                             { (yyval.str) = template("%s.%s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1780 "syntax_analyzer.tab.c"
    break;

  case 25: /* relational_expression: math_expression  */
#line 222 "syntax_analyzer.y"
                   {(yyval.str)=template("%s",(yyvsp[0].str));}
#line 1786 "syntax_analyzer.tab.c"
    break;

  case 26: /* relational_expression: relational_expression OP_EQUALS relational_expression  */
#line 223 "syntax_analyzer.y"
                                                         { (yyval.str) = template("%s == %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1792 "syntax_analyzer.tab.c"
    break;

  case 27: /* relational_expression: relational_expression OP_NE relational_expression  */
#line 224 "syntax_analyzer.y"
                                                     { (yyval.str) = template("%s != %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1798 "syntax_analyzer.tab.c"
    break;

  case 28: /* relational_expression: relational_expression '>' relational_expression  */
#line 225 "syntax_analyzer.y"
                                                   {(yyval.str) = template("%s > %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1804 "syntax_analyzer.tab.c"
    break;

  case 29: /* relational_expression: relational_expression '<' relational_expression  */
#line 226 "syntax_analyzer.y"
                                                   {(yyval.str) = template("%s < %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1810 "syntax_analyzer.tab.c"
    break;

  case 30: /* relational_expression: relational_expression OP_LE relational_expression  */
#line 227 "syntax_analyzer.y"
                                                     {(yyval.str) = template("%s <= %s", (yyvsp[-2].str), (yyvsp[0].str));  }
#line 1816 "syntax_analyzer.tab.c"
    break;

  case 31: /* relational_expression: relational_expression OP_GE relational_expression  */
#line 228 "syntax_analyzer.y"
                                                     {(yyval.str) = template("%s >= %s", (yyvsp[-2].str), (yyvsp[0].str));  }
#line 1822 "syntax_analyzer.tab.c"
    break;

  case 32: /* logic_expression: relational_expression  */
#line 232 "syntax_analyzer.y"
                            {(yyval.str)=template("%s",(yyvsp[0].str));}
#line 1828 "syntax_analyzer.tab.c"
    break;

  case 33: /* logic_expression: OP_NOT logic_expression  */
#line 233 "syntax_analyzer.y"
                               {(yyval.str)=template("!%s",(yyvsp[0].str));}
#line 1834 "syntax_analyzer.tab.c"
    break;

  case 34: /* logic_expression: logic_expression OP_AND logic_expression  */
#line 234 "syntax_analyzer.y"
                                               {(yyval.str)=template("%s && %s",(yyvsp[-2].str),(yyvsp[0].str));}
#line 1840 "syntax_analyzer.tab.c"
    break;

  case 35: /* logic_expression: logic_expression OP_OR logic_expression  */
#line 235 "syntax_analyzer.y"
                                             {(yyval.str)=template("%s || %s",(yyvsp[-2].str),(yyvsp[0].str));}
#line 1846 "syntax_analyzer.tab.c"
    break;

  case 37: /* basic_data_type: KW_INTEGER  */
#line 247 "syntax_analyzer.y"
                                { (yyval.str) = "int"; }
#line 1852 "syntax_analyzer.tab.c"
    break;

  case 38: /* basic_data_type: KW_BOOLEAN  */
#line 248 "syntax_analyzer.y"
                        { (yyval.str) = "int"; }
#line 1858 "syntax_analyzer.tab.c"
    break;

  case 39: /* basic_data_type: KW_CHAR  */
#line 249 "syntax_analyzer.y"
                                { (yyval.str) = "char"; }
#line 1864 "syntax_analyzer.tab.c"
    break;

  case 40: /* basic_data_type: KW_SCALAR  */
#line 250 "syntax_analyzer.y"
                        { (yyval.str) = "double"; }
#line 1870 "syntax_analyzer.tab.c"
    break;

  case 41: /* basic_data_type: KW_STR  */
#line 251 "syntax_analyzer.y"
              { (yyval.str) = "char * ";}
#line 1876 "syntax_analyzer.tab.c"
    break;

  case 42: /* basic_data_type: IDENTIFIER  */
#line 252 "syntax_analyzer.y"
                  { (yyval.str) = template("%s", (yyvsp[0].str));}
#line 1882 "syntax_analyzer.tab.c"
    break;

  case 43: /* identifier_single: IDENTIFIER  */
#line 257 "syntax_analyzer.y"
             {(yyval.str) = template( "%s", (yyvsp[0].str));}
#line 1888 "syntax_analyzer.tab.c"
    break;

  case 44: /* identifier_single: IDENTIFIER '[' POSINT ']'  */
#line 258 "syntax_analyzer.y"
                              { (yyval.str) = template("%s[%s]", (yyvsp[-3].str), (yyvsp[-1].str)); }
#line 1894 "syntax_analyzer.tab.c"
    break;

  case 45: /* identifier_single: IDENTIFIER '[' ']'  */
#line 259 "syntax_analyzer.y"
                     { (yyval.str) = template("*%s", (yyvsp[-2].str)); }
#line 1900 "syntax_analyzer.tab.c"
    break;

  case 46: /* identifier_list: identifier_single ',' identifier_single  */
#line 262 "syntax_analyzer.y"
                                           {(yyval.str) = template( "%s, %s", (yyvsp[-2].str), (yyvsp[0].str));}
#line 1906 "syntax_analyzer.tab.c"
    break;

  case 47: /* identifier_list: identifier_single ',' identifier_list  */
#line 263 "syntax_analyzer.y"
                                        {(yyval.str) = template( "%s, %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1912 "syntax_analyzer.tab.c"
    break;

  case 49: /* constant_decl: KW_CONST IDENTIFIER '=' expression ':' basic_data_type ';'  */
#line 275 "syntax_analyzer.y"
                                                               { (yyval.str) = template("const %s %s = %s;\n", (yyvsp[-1].str), (yyvsp[-5].str), (yyvsp[-3].str)); }
#line 1918 "syntax_analyzer.tab.c"
    break;

  case 50: /* constant_decl: KW_CONST IDENTIFIER '[' expression ']' '=' expression ':' basic_data_type ';'  */
#line 276 "syntax_analyzer.y"
                                                                                    { (yyval.str) = template("const %s %s[%s] = %s;\n", (yyvsp[-1].str),(yyvsp[-8].str), (yyvsp[-6].str), (yyvsp[-3].str)); }
#line 1924 "syntax_analyzer.tab.c"
    break;

  case 51: /* constant_decl: KW_CONST IDENTIFIER '[' ']' '=' expression ':' basic_data_type ';'  */
#line 277 "syntax_analyzer.y"
                                                                         { (yyval.str) = template("const *%s %s[] = %s;\n", (yyvsp[-1].str),(yyvsp[-7].str), (yyvsp[-3].str)); }
#line 1930 "syntax_analyzer.tab.c"
    break;

  case 52: /* local_var_const_decl_list: constant_decl local_var_const_decl_list  */
#line 288 "syntax_analyzer.y"
                                            { (yyval.str) = template("%s %s", (yyvsp[-1].str), (yyvsp[0].str)); }
#line 1936 "syntax_analyzer.tab.c"
    break;

  case 53: /* local_var_const_decl_list: variable_decl local_var_const_decl_list  */
#line 289 "syntax_analyzer.y"
                                              { (yyval.str) = template("%s %s", (yyvsp[-1].str), (yyvsp[0].str)); }
#line 1942 "syntax_analyzer.tab.c"
    break;

  case 54: /* local_var_const_decl_list: local_var_const_decl  */
#line 290 "syntax_analyzer.y"
                           { (yyval.str) = template("%s", (yyvsp[0].str)); }
#line 1948 "syntax_analyzer.tab.c"
    break;

  case 55: /* local_var_const_decl_list: %empty  */
#line 291 "syntax_analyzer.y"
             { (yyval.str) = template(""); }
#line 1954 "syntax_analyzer.tab.c"
    break;

  case 56: /* local_var_const_decl: variable_decl  */
#line 296 "syntax_analyzer.y"
                    { (yyval.str) = template("%s", (yyvsp[0].str)); }
#line 1960 "syntax_analyzer.tab.c"
    break;

  case 57: /* local_var_const_decl: constant_decl  */
#line 297 "syntax_analyzer.y"
                    { (yyval.str) = template("%s", (yyvsp[0].str)); }
#line 1966 "syntax_analyzer.tab.c"
    break;

  case 58: /* local_var_const_decl: variable_decl constant_decl  */
#line 298 "syntax_analyzer.y"
                                  { (yyval.str) = template("%s %s", (yyvsp[-1].str), (yyvsp[0].str)); }
#line 1972 "syntax_analyzer.tab.c"
    break;

  case 59: /* local_var_const_decl: constant_decl variable_decl  */
#line 299 "syntax_analyzer.y"
                                  { (yyval.str) = template("%s %s", (yyvsp[-1].str), (yyvsp[0].str)); }
#line 1978 "syntax_analyzer.tab.c"
    break;

  case 60: /* variable_decl: identifier_list ':' basic_data_type ';'  */
#line 307 "syntax_analyzer.y"
                                            { (yyval.str) = template("%s %s;\n", (yyvsp[-1].str), (yyvsp[-3].str)); }
#line 1984 "syntax_analyzer.tab.c"
    break;

  case 61: /* variable_decl: parameter_declaration ';'  */
#line 308 "syntax_analyzer.y"
                              { (yyval.str) = template("%s;\n",(yyvsp[-1].str)); }
#line 1990 "syntax_analyzer.tab.c"
    break;

  case 62: /* parameter_declaration: IDENTIFIER ':' basic_data_type  */
#line 320 "syntax_analyzer.y"
                                   { (yyval.str) = template("%s %s", (yyvsp[0].str), (yyvsp[-2].str)); }
#line 1996 "syntax_analyzer.tab.c"
    break;

  case 63: /* parameter_declaration: IDENTIFIER '[' ']' ':' basic_data_type  */
#line 321 "syntax_analyzer.y"
                                             { (yyval.str) = template("%s* %s", (yyvsp[0].str), (yyvsp[-4].str)); }
#line 2002 "syntax_analyzer.tab.c"
    break;

  case 64: /* parameter_declaration_list: %empty  */
#line 326 "syntax_analyzer.y"
           { (yyval.str) = template(""); }
#line 2008 "syntax_analyzer.tab.c"
    break;

  case 66: /* parameter_declaration_list: parameter_declaration_list ',' parameter_declaration  */
#line 328 "syntax_analyzer.y"
                                                           { (yyval.str) = template("%s, %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 2014 "syntax_analyzer.tab.c"
    break;

  case 67: /* general_function_call: function_call  */
#line 332 "syntax_analyzer.y"
                  { (yyval.str) = template("%s", (yyvsp[0].str)); }
#line 2020 "syntax_analyzer.tab.c"
    break;

  case 68: /* general_function_call: IDENTIFIER '.' function_call  */
#line 333 "syntax_analyzer.y"
                                   { (yyval.str) = template("%s.%s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 2026 "syntax_analyzer.tab.c"
    break;

  case 69: /* general_function_call: IDENTIFIER '[' expression ']' '.' function_call  */
#line 334 "syntax_analyzer.y"
                                                      { (yyval.str) = template("%s[%s].%s", (yyvsp[-5].str), (yyvsp[-3].str), (yyvsp[0].str)); }
#line 2032 "syntax_analyzer.tab.c"
    break;

  case 70: /* function_call: IDENTIFIER '(' ')'  */
#line 339 "syntax_analyzer.y"
                       { (yyval.str) = template("%s()", (yyvsp[-2].str)); }
#line 2038 "syntax_analyzer.tab.c"
    break;

  case 71: /* function_call: IDENTIFIER '(' expr_comma_list ')'  */
#line 340 "syntax_analyzer.y"
                                         { (yyval.str) = template("%s(%s)", (yyvsp[-3].str), (yyvsp[-1].str)); }
#line 2044 "syntax_analyzer.tab.c"
    break;

  case 72: /* expr_comma_list: expression  */
#line 343 "syntax_analyzer.y"
               { (yyval.str) = template("%s", (yyvsp[0].str)); }
#line 2050 "syntax_analyzer.tab.c"
    break;

  case 73: /* expr_comma_list: expr_comma_list ',' expression  */
#line 344 "syntax_analyzer.y"
                                      { (yyval.str) = template("%s, %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 2056 "syntax_analyzer.tab.c"
    break;

  case 74: /* assignment_operator: '='  */
#line 349 "syntax_analyzer.y"
        { (yyval.str) = "="; }
#line 2062 "syntax_analyzer.tab.c"
    break;

  case 75: /* assignment_operator: OP_ASSIGN  */
#line 350 "syntax_analyzer.y"
                { (yyval.str) = ":="; }
#line 2068 "syntax_analyzer.tab.c"
    break;

  case 76: /* assignment_operator: OP_ASSIGN_PLUSEQ  */
#line 351 "syntax_analyzer.y"
                       { (yyval.str) = "+="; }
#line 2074 "syntax_analyzer.tab.c"
    break;

  case 77: /* assignment_operator: OP_ASSIGN_MINUSEQ  */
#line 352 "syntax_analyzer.y"
                        { (yyval.str) = "-="; }
#line 2080 "syntax_analyzer.tab.c"
    break;

  case 78: /* assignment_operator: OP_ASSIGN_MULEQ  */
#line 353 "syntax_analyzer.y"
                      { (yyval.str) = template("*="); }
#line 2086 "syntax_analyzer.tab.c"
    break;

  case 79: /* assignment_operator: OP_ASSIGN_DIVEQ  */
#line 354 "syntax_analyzer.y"
                      { (yyval.str) = template("/="); }
#line 2092 "syntax_analyzer.tab.c"
    break;

  case 80: /* assignment_operator: OP_ASSIGN_MODEQ  */
#line 355 "syntax_analyzer.y"
                      { (yyval.str) = template("%%="); }
#line 2098 "syntax_analyzer.tab.c"
    break;

  case 81: /* general_variable: IDENTIFIER  */
#line 359 "syntax_analyzer.y"
               { (yyval.str) = template("%s", (yyvsp[0].str)); }
#line 2104 "syntax_analyzer.tab.c"
    break;

  case 82: /* general_variable: IDENTIFIER '.' '#' IDENTIFIER  */
#line 360 "syntax_analyzer.y"
                                    { (yyval.str) = template("%s.%s", (yyvsp[-3].str), (yyvsp[0].str)); }
#line 2110 "syntax_analyzer.tab.c"
    break;

  case 83: /* general_variable: IDENTIFIER '[' expression ']'  */
#line 361 "syntax_analyzer.y"
                                    { (yyval.str) = template("%s[%s]", (yyvsp[-3].str), (yyvsp[-1].str)); }
#line 2116 "syntax_analyzer.tab.c"
    break;

  case 84: /* general_variable: IDENTIFIER '.' '#' IDENTIFIER '[' expression ']'  */
#line 362 "syntax_analyzer.y"
                                                       { (yyval.str) = template("%s.%s[%s]", (yyvsp[-6].str), (yyvsp[-3].str), (yyvsp[-1].str)); }
#line 2122 "syntax_analyzer.tab.c"
    break;

  case 85: /* function_command_list: function_command  */
#line 378 "syntax_analyzer.y"
                     { (yyval.str) = template("%s", (yyvsp[0].str)); }
#line 2128 "syntax_analyzer.tab.c"
    break;

  case 86: /* function_command_list: function_command_list function_command  */
#line 379 "syntax_analyzer.y"
                                             { (yyval.str) = template("%s%s", (yyvsp[-1].str), (yyvsp[0].str)); }
#line 2134 "syntax_analyzer.tab.c"
    break;

  case 87: /* function_command: general_variable assignment_operator expression ';'  */
#line 384 "syntax_analyzer.y"
                                                        { (yyval.str) = template("%s %s %s;\n", (yyvsp[-3].str), (yyvsp[-2].str),  (yyvsp[-1].str)); }
#line 2140 "syntax_analyzer.tab.c"
    break;

  case 88: /* function_command: KW_IF '(' expression ')' ':' function_command_list KW_ENDIF ';'  */
#line 387 "syntax_analyzer.y"
                                                                      { (yyval.str) = template("if ( %s ) {\n%s\n}\n", (yyvsp[-5].str), (yyvsp[-2].str)); }
#line 2146 "syntax_analyzer.tab.c"
    break;

  case 89: /* function_command: KW_IF '(' expression ')' ':' function_command_list KW_ELSE ':' function_command_list KW_ENDIF ';'  */
#line 388 "syntax_analyzer.y"
                                                                                                        { (yyval.str) = template("if ( %s ) {\n%s\n}\nelse {\n%s\n}\n", (yyvsp[-8].str), (yyvsp[-5].str), (yyvsp[-2].str)); }
#line 2152 "syntax_analyzer.tab.c"
    break;

  case 90: /* function_command: KW_FOR general_variable KW_IN '[' expression ':' expression ']' ':' function_command_list KW_ENDFOR ';'  */
#line 391 "syntax_analyzer.y"
                                                                                                              { (yyval.str) = template("for ( int %s = %s ; %s < %s ; %s++ ) {\n%s\n}\n", (yyvsp[-10].str), (yyvsp[-7].str), (yyvsp[-10].str), (yyvsp[-5].str), (yyvsp[-10].str), (yyvsp[-2].str)); }
#line 2158 "syntax_analyzer.tab.c"
    break;

  case 91: /* function_command: KW_FOR general_variable KW_IN '[' expression ':' expression ':' expression ']' ':' function_command_list KW_ENDFOR ';'  */
#line 392 "syntax_analyzer.y"
                                                                                                                             { (yyval.str) = template("for ( int %s = %s ; %s < %s ; %s + (%s) ) {\n%s\n}\n", (yyvsp[-12].str), (yyvsp[-9].str), (yyvsp[-12].str), (yyvsp[-7].str), (yyvsp[-12].str), (yyvsp[-5].str), (yyvsp[-2].str)); }
#line 2164 "syntax_analyzer.tab.c"
    break;

  case 92: /* function_command: general_variable OP_ASSIGN '[' expression KW_FOR general_variable ':' POSINT ']' ':' basic_data_type ';'  */
#line 395 "syntax_analyzer.y"
                                                                                                               { (yyval.str) = template("%s* %s = (%s*)malloc(%s * sizeof(%s));\nfor (int %s = 0; %s < %s; ++%s)\n\t%s[%s] = %s;\n", (yyvsp[-1].str), (yyvsp[-11].str), (yyvsp[-1].str), (yyvsp[-4].str), (yyvsp[-1].str), (yyvsp[-6].str), (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-6].str), (yyvsp[-11].str), (yyvsp[-6].str), (yyvsp[-8].str)); }
#line 2170 "syntax_analyzer.tab.c"
    break;

  case 93: /* function_command: KW_WHILE '(' expression ')' ':' function_command_list KW_ENDWHILE ';'  */
#line 399 "syntax_analyzer.y"
                                                                            { (yyval.str) = template("while ( %s ) {\n%s\n}\n", (yyvsp[-5].str), (yyvsp[-2].str)); }
#line 2176 "syntax_analyzer.tab.c"
    break;

  case 94: /* function_command: KW_BREAK ';'  */
#line 402 "syntax_analyzer.y"
                   { (yyval.str) = template("break;\n"); }
#line 2182 "syntax_analyzer.tab.c"
    break;

  case 95: /* function_command: KW_CONTINUE ';'  */
#line 405 "syntax_analyzer.y"
                      { (yyval.str) = template("continue;\n"); }
#line 2188 "syntax_analyzer.tab.c"
    break;

  case 96: /* function_command: KW_RETURN ';'  */
#line 408 "syntax_analyzer.y"
                    { (yyval.str) = template("return;\n"); }
#line 2194 "syntax_analyzer.tab.c"
    break;

  case 97: /* function_command: KW_RETURN expression ';'  */
#line 409 "syntax_analyzer.y"
                               { (yyval.str) = template("return %s;\n", (yyvsp[-1].str)); }
#line 2200 "syntax_analyzer.tab.c"
    break;

  case 98: /* function_command: general_function_call ';'  */
#line 412 "syntax_analyzer.y"
                                { (yyval.str) = template("%s ;\n", (yyvsp[-1].str)); }
#line 2206 "syntax_analyzer.tab.c"
    break;

  case 99: /* function_definition_list: %empty  */
#line 416 "syntax_analyzer.y"
           { (yyval.str) = template(""); }
#line 2212 "syntax_analyzer.tab.c"
    break;

  case 100: /* function_definition_list: function_definition_list function_definition  */
#line 417 "syntax_analyzer.y"
                                                   { (yyval.str) = template("%s%s", (yyvsp[-1].str), (yyvsp[0].str)); }
#line 2218 "syntax_analyzer.tab.c"
    break;

  case 101: /* function_definition: KW_DEF IDENTIFIER '(' parameter_declaration_list ')' ':' local_var_const_decl_list function_command_list KW_ENDDEF ';'  */
#line 422 "syntax_analyzer.y"
                                                                                                                           { (yyval.str) = template("void %s(%s) {\n%s\n%s\n} \n", (yyvsp[-8].str), (yyvsp[-6].str), (yyvsp[-3].str), (yyvsp[-2].str)); }
#line 2224 "syntax_analyzer.tab.c"
    break;

  case 102: /* function_definition: KW_DEF IDENTIFIER '(' parameter_declaration_list ')' ':' local_var_const_decl function_command_list KW_ENDDEF ';'  */
#line 424 "syntax_analyzer.y"
                                                                                                                        { (yyval.str) = template("void %s(%s) {\n%s\n%s\n} \n", (yyvsp[-8].str), (yyvsp[-6].str), (yyvsp[-3].str), (yyvsp[-2].str)); }
#line 2230 "syntax_analyzer.tab.c"
    break;

  case 103: /* function_definition: KW_DEF IDENTIFIER '(' parameter_declaration_list ')' ':' function_command_list KW_ENDDEF ';'  */
#line 426 "syntax_analyzer.y"
                                                                                                    { (yyval.str) = template("void %s(%s) {\n%s\n} \n", (yyvsp[-7].str), (yyvsp[-5].str), (yyvsp[-2].str)); }
#line 2236 "syntax_analyzer.tab.c"
    break;

  case 104: /* function_definition: KW_DEF IDENTIFIER '(' parameter_declaration_list ')' '-' '>' basic_data_type ':' local_var_const_decl_list function_command_list KW_RETURN expression ';' KW_ENDDEF ';'  */
#line 429 "syntax_analyzer.y"
                                                                                                                                                                              { (yyval.str) = template("%s %s(%s) {\n%s\n%s\nreturn %s;\n}\n", (yyvsp[-8].str), (yyvsp[-14].str), (yyvsp[-12].str), (yyvsp[-6].str), (yyvsp[-5].str), (yyvsp[-3].str)); }
#line 2242 "syntax_analyzer.tab.c"
    break;

  case 105: /* function_definition: KW_DEF IDENTIFIER '(' parameter_declaration_list ')' '-' '>' basic_data_type ':' local_var_const_decl function_command_list KW_RETURN expression ';' KW_ENDDEF ';'  */
#line 431 "syntax_analyzer.y"
                                                                                                                                                                         { (yyval.str) = template("%s %s(%s) {\n%s\n%s\nreturn %s;\n}\n", (yyvsp[-8].str), (yyvsp[-14].str), (yyvsp[-12].str), (yyvsp[-6].str), (yyvsp[-5].str), (yyvsp[-3].str)); }
#line 2248 "syntax_analyzer.tab.c"
    break;

  case 106: /* function_definition: KW_DEF IDENTIFIER '(' parameter_declaration_list ')' '-' '>' basic_data_type ':' function_command_list KW_RETURN expression ';' KW_ENDDEF ';'  */
#line 433 "syntax_analyzer.y"
                                                                                                                                                     { (yyval.str) = template("%s %s(%s) {\n%s\nreturn %s;\n}\n", (yyvsp[-7].str), (yyvsp[-13].str), (yyvsp[-11].str), (yyvsp[-5].str), (yyvsp[-3].str)); }
#line 2254 "syntax_analyzer.tab.c"
    break;

  case 107: /* comp_variable: '#' IDENTIFIER  */
#line 444 "syntax_analyzer.y"
                  { (yyval.str) = template("%s", (yyvsp[0].str)); }
#line 2260 "syntax_analyzer.tab.c"
    break;

  case 108: /* comp_variable: '#' IDENTIFIER '[' comp_expression ']'  */
#line 445 "syntax_analyzer.y"
                                             { (yyval.str) = template("%s[%s]", (yyvsp[-3].str), (yyvsp[-1].str)); }
#line 2266 "syntax_analyzer.tab.c"
    break;

  case 109: /* comp_variable: comp_variable '.' '#' IDENTIFIER  */
#line 446 "syntax_analyzer.y"
                                       { (yyval.str) = template("%s.%s", (yyvsp[-3].str), (yyvsp[0].str)); }
#line 2272 "syntax_analyzer.tab.c"
    break;

  case 110: /* comp_variable: comp_variable '.' '#' IDENTIFIER '[' POSINT ']'  */
#line 447 "syntax_analyzer.y"
                                                      { (yyval.str) = template("%s.%s[%s]", (yyvsp[-6].str), (yyvsp[-3].str), (yyvsp[-1].str)); }
#line 2278 "syntax_analyzer.tab.c"
    break;

  case 111: /* comp_variable: general_variable  */
#line 448 "syntax_analyzer.y"
                       { (yyval.str) = template("%s", (yyvsp[0].str)); }
#line 2284 "syntax_analyzer.tab.c"
    break;

  case 112: /* comp_function_call: IDENTIFIER '(' ')'  */
#line 464 "syntax_analyzer.y"
                       { (yyval.str) = template("%s()", (yyvsp[-2].str)); }
#line 2290 "syntax_analyzer.tab.c"
    break;

  case 113: /* comp_function_call: IDENTIFIER '(' comp_expr_comma_list ')'  */
#line 465 "syntax_analyzer.y"
                                              { (yyval.str) = template("%s(%s)", (yyvsp[-3].str), (yyvsp[-1].str)); }
#line 2296 "syntax_analyzer.tab.c"
    break;

  case 114: /* general_comp_function_call: comp_function_call  */
#line 470 "syntax_analyzer.y"
                       { (yyval.str) = template("%s", (yyvsp[0].str)); }
#line 2302 "syntax_analyzer.tab.c"
    break;

  case 115: /* general_comp_function_call: '#' IDENTIFIER '.' comp_function_call  */
#line 471 "syntax_analyzer.y"
                                            { (yyval.str) = template("%s.%s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 2308 "syntax_analyzer.tab.c"
    break;

  case 116: /* general_comp_function_call: '#' IDENTIFIER '[' comp_expression ']' '.' comp_function_call  */
#line 472 "syntax_analyzer.y"
                                                                    { (yyval.str) = template("%s[%s].%s", (yyvsp[-5].str), (yyvsp[-3].str), (yyvsp[0].str)); }
#line 2314 "syntax_analyzer.tab.c"
    break;

  case 117: /* comp_expr_comma_list: comp_expression  */
#line 476 "syntax_analyzer.y"
                    { (yyval.str) = template("%s", (yyvsp[0].str)); }
#line 2320 "syntax_analyzer.tab.c"
    break;

  case 118: /* comp_expr_comma_list: comp_expr_comma_list ',' comp_expression  */
#line 477 "syntax_analyzer.y"
                                                { (yyval.str) = template("%s, %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 2326 "syntax_analyzer.tab.c"
    break;

  case 119: /* comp_primary_expression: POSINT  */
#line 483 "syntax_analyzer.y"
                {(yyval.str)=template("%s",(yyvsp[0].str));}
#line 2332 "syntax_analyzer.tab.c"
    break;

  case 120: /* comp_primary_expression: SCALAR  */
#line 484 "syntax_analyzer.y"
               {(yyval.str)=template("%s",(yyvsp[0].str));}
#line 2338 "syntax_analyzer.tab.c"
    break;

  case 121: /* comp_primary_expression: '#' IDENTIFIER  */
#line 485 "syntax_analyzer.y"
                      {(yyval.str)=template("%s",(yyvsp[0].str));}
#line 2344 "syntax_analyzer.tab.c"
    break;

  case 122: /* comp_primary_expression: IDENTIFIER  */
#line 486 "syntax_analyzer.y"
                  {(yyval.str)=template("%s",(yyvsp[0].str));}
#line 2350 "syntax_analyzer.tab.c"
    break;

  case 123: /* comp_primary_expression: STRING  */
#line 487 "syntax_analyzer.y"
             {(yyval.str)=template("%s",(yyvsp[0].str));}
#line 2356 "syntax_analyzer.tab.c"
    break;

  case 124: /* comp_primary_expression: KW_TRUE  */
#line 488 "syntax_analyzer.y"
                {(yyval.str)=template("1");}
#line 2362 "syntax_analyzer.tab.c"
    break;

  case 125: /* comp_primary_expression: KW_FALSE  */
#line 489 "syntax_analyzer.y"
                {(yyval.str)=template("0");}
#line 2368 "syntax_analyzer.tab.c"
    break;

  case 126: /* comp_primary_expression: '(' logic_expression ')'  */
#line 490 "syntax_analyzer.y"
                                 {(yyval.str)=template("(%s)",(yyvsp[-1].str));}
#line 2374 "syntax_analyzer.tab.c"
    break;

  case 127: /* comp_math_expression: comp_primary_expression  */
#line 496 "syntax_analyzer.y"
                           {(yyval.str)=template("%s",(yyvsp[0].str));}
#line 2380 "syntax_analyzer.tab.c"
    break;

  case 128: /* comp_math_expression: '+' comp_math_expression  */
#line 497 "syntax_analyzer.y"
                              { (yyval.str) = template("+%s", (yyvsp[0].str)); }
#line 2386 "syntax_analyzer.tab.c"
    break;

  case 129: /* comp_math_expression: '-' comp_math_expression  */
#line 498 "syntax_analyzer.y"
                              { (yyval.str) = template("-%s", (yyvsp[0].str)); }
#line 2392 "syntax_analyzer.tab.c"
    break;

  case 130: /* comp_math_expression: comp_math_expression '+' comp_math_expression  */
#line 499 "syntax_analyzer.y"
                                                 { (yyval.str) = template("%s + %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 2398 "syntax_analyzer.tab.c"
    break;

  case 131: /* comp_math_expression: comp_math_expression '-' comp_math_expression  */
#line 500 "syntax_analyzer.y"
                                                 { (yyval.str) = template("%s - %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 2404 "syntax_analyzer.tab.c"
    break;

  case 132: /* comp_math_expression: comp_math_expression '*' comp_math_expression  */
#line 501 "syntax_analyzer.y"
                                                 {(yyval.str) = template("%s * %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 2410 "syntax_analyzer.tab.c"
    break;

  case 133: /* comp_math_expression: comp_math_expression '/' comp_math_expression  */
#line 502 "syntax_analyzer.y"
                                                 {(yyval.str) = template("%s / %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 2416 "syntax_analyzer.tab.c"
    break;

  case 134: /* comp_math_expression: comp_math_expression '%' comp_math_expression  */
#line 503 "syntax_analyzer.y"
                                                 {(yyval.str) = template("%s %% %s", (yyvsp[-2].str), (yyvsp[0].str));  }
#line 2422 "syntax_analyzer.tab.c"
    break;

  case 135: /* comp_math_expression: comp_math_expression OP_PAW comp_math_expression  */
#line 504 "syntax_analyzer.y"
                                                    {(yyval.str) = template("pow(%s,%s)", (yyvsp[-2].str), (yyvsp[0].str));  }
#line 2428 "syntax_analyzer.tab.c"
    break;

  case 136: /* comp_math_expression: '#' IDENTIFIER '[' comp_expression ']'  */
#line 505 "syntax_analyzer.y"
                                         { (yyval.str) = template("%s[%s]", (yyvsp[-3].str), (yyvsp[-1].str)); }
#line 2434 "syntax_analyzer.tab.c"
    break;

  case 137: /* comp_math_expression: '#' IDENTIFIER '[' comp_expression ']' '.' '#' IDENTIFIER  */
#line 506 "syntax_analyzer.y"
                                                             { (yyval.str) = template("%s[%s].%s", (yyvsp[-6].str), (yyvsp[-4].str),(yyvsp[0].str)); }
#line 2440 "syntax_analyzer.tab.c"
    break;

  case 138: /* comp_math_expression: '#' IDENTIFIER '[' comp_expression ']' '.' '#' IDENTIFIER '[' comp_expression ']'  */
#line 507 "syntax_analyzer.y"
                                                                                    { (yyval.str) = template("%s[%s].%s[%s]", (yyvsp[-9].str), (yyvsp[-7].str),(yyvsp[-3].str),(yyvsp[-1].str)); }
#line 2446 "syntax_analyzer.tab.c"
    break;

  case 139: /* comp_math_expression: general_comp_function_call  */
#line 509 "syntax_analyzer.y"
                             { (yyval.str) = template("%s", (yyvsp[0].str)); }
#line 2452 "syntax_analyzer.tab.c"
    break;

  case 140: /* comp_math_expression: '#' IDENTIFIER '.' '#' IDENTIFIER '[' comp_expression ']'  */
#line 511 "syntax_analyzer.y"
                                                            { (yyval.str) = template("%s.%s[%s]", (yyvsp[-6].str), (yyvsp[-3].str), (yyvsp[-1].str)); }
#line 2458 "syntax_analyzer.tab.c"
    break;

  case 141: /* comp_math_expression: '#' IDENTIFIER '.' '#' IDENTIFIER  */
#line 512 "syntax_analyzer.y"
                                    { (yyval.str) = template("%s.%s", (yyvsp[-3].str), (yyvsp[0].str)); }
#line 2464 "syntax_analyzer.tab.c"
    break;

  case 142: /* comp_relational_expression: comp_math_expression  */
#line 516 "syntax_analyzer.y"
                        {(yyval.str)=template("%s",(yyvsp[0].str));}
#line 2470 "syntax_analyzer.tab.c"
    break;

  case 143: /* comp_relational_expression: comp_relational_expression OP_EQUALS comp_relational_expression  */
#line 517 "syntax_analyzer.y"
                                                                   { (yyval.str) = template("%s == %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 2476 "syntax_analyzer.tab.c"
    break;

  case 144: /* comp_relational_expression: comp_relational_expression OP_NE comp_relational_expression  */
#line 518 "syntax_analyzer.y"
                                                               { (yyval.str) = template("%s != %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 2482 "syntax_analyzer.tab.c"
    break;

  case 145: /* comp_relational_expression: comp_relational_expression '>' comp_relational_expression  */
#line 519 "syntax_analyzer.y"
                                                             {(yyval.str) = template("%s > %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 2488 "syntax_analyzer.tab.c"
    break;

  case 146: /* comp_relational_expression: comp_relational_expression '<' comp_relational_expression  */
#line 520 "syntax_analyzer.y"
                                                             {(yyval.str) = template("%s < %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 2494 "syntax_analyzer.tab.c"
    break;

  case 147: /* comp_relational_expression: comp_relational_expression OP_LE comp_relational_expression  */
#line 521 "syntax_analyzer.y"
                                                               {(yyval.str) = template("%s <= %s", (yyvsp[-2].str), (yyvsp[0].str));  }
#line 2500 "syntax_analyzer.tab.c"
    break;

  case 148: /* comp_relational_expression: comp_relational_expression OP_GE comp_relational_expression  */
#line 522 "syntax_analyzer.y"
                                                               {(yyval.str) = template("%s >= %s", (yyvsp[-2].str), (yyvsp[0].str));  }
#line 2506 "syntax_analyzer.tab.c"
    break;

  case 149: /* comp_logic_expression: comp_relational_expression  */
#line 526 "syntax_analyzer.y"
                                 {(yyval.str)=template("%s",(yyvsp[0].str));}
#line 2512 "syntax_analyzer.tab.c"
    break;

  case 150: /* comp_logic_expression: OP_NOT comp_logic_expression  */
#line 527 "syntax_analyzer.y"
                                    {(yyval.str)=template("!%s",(yyvsp[0].str));}
#line 2518 "syntax_analyzer.tab.c"
    break;

  case 151: /* comp_logic_expression: comp_logic_expression OP_AND comp_logic_expression  */
#line 528 "syntax_analyzer.y"
                                                         {(yyval.str)=template("%s && %s",(yyvsp[-2].str),(yyvsp[0].str));}
#line 2524 "syntax_analyzer.tab.c"
    break;

  case 152: /* comp_logic_expression: comp_logic_expression OP_OR comp_logic_expression  */
#line 529 "syntax_analyzer.y"
                                                       {(yyval.str)=template("%s || %s",(yyvsp[-2].str),(yyvsp[0].str));}
#line 2530 "syntax_analyzer.tab.c"
    break;

  case 154: /* comp_command_list: comp_command  */
#line 544 "syntax_analyzer.y"
                 { (yyval.str) = template("%s", (yyvsp[0].str)); }
#line 2536 "syntax_analyzer.tab.c"
    break;

  case 155: /* comp_command_list: comp_command_list comp_command  */
#line 545 "syntax_analyzer.y"
                                     { (yyval.str) = template("%s%s", (yyvsp[-1].str), (yyvsp[0].str)); }
#line 2542 "syntax_analyzer.tab.c"
    break;

  case 156: /* comp_command: comp_variable assignment_operator comp_expression ';'  */
#line 550 "syntax_analyzer.y"
                                                          { (yyval.str) = template("%s %s %s;\n", (yyvsp[-3].str), (yyvsp[-2].str),  (yyvsp[-1].str)); }
#line 2548 "syntax_analyzer.tab.c"
    break;

  case 157: /* comp_command: KW_IF '(' comp_expression ')' ':' comp_command_list KW_ENDIF ';'  */
#line 553 "syntax_analyzer.y"
                                                                       { (yyval.str) = template("if ( %s ) {\n%s\n}\n", (yyvsp[-5].str), (yyvsp[-2].str)); }
#line 2554 "syntax_analyzer.tab.c"
    break;

  case 158: /* comp_command: KW_IF '(' comp_expression ')' ':' comp_command_list KW_ELSE ':' comp_command_list KW_ENDIF ';'  */
#line 554 "syntax_analyzer.y"
                                                                                                     { (yyval.str) = template("if ( %s ) {\n%s\n}\nelse {\n%s\n}\n", (yyvsp[-8].str), (yyvsp[-5].str), (yyvsp[-2].str)); }
#line 2560 "syntax_analyzer.tab.c"
    break;

  case 159: /* comp_command: KW_FOR comp_variable KW_IN '[' comp_expression ':' comp_expression ']' ':' comp_command_list KW_ENDFOR ';'  */
#line 557 "syntax_analyzer.y"
                                                                                                                 { (yyval.str) = template("for ( int %s = %s ; %s < %s ; %s++ ) {\n%s\n}\n", (yyvsp[-10].str), (yyvsp[-7].str), (yyvsp[-10].str), (yyvsp[-5].str), (yyvsp[-10].str), (yyvsp[-2].str)); }
#line 2566 "syntax_analyzer.tab.c"
    break;

  case 160: /* comp_command: KW_FOR comp_variable KW_IN '[' comp_expression ':' comp_expression ':' comp_expression ']' ':' comp_command_list KW_ENDFOR ';'  */
#line 558 "syntax_analyzer.y"
                                                                                                                                     { (yyval.str) = template("for ( int %s = %s ; %s < %s ; %s + (%s) ) {\n%s\n}\n", (yyvsp[-12].str), (yyvsp[-9].str), (yyvsp[-12].str), (yyvsp[-7].str), (yyvsp[-12].str), (yyvsp[-5].str), (yyvsp[-2].str)); }
#line 2572 "syntax_analyzer.tab.c"
    break;

  case 161: /* comp_command: comp_variable OP_ASSIGN '[' comp_expression KW_FOR comp_variable ':' POSINT ']' ':' basic_data_type ';'  */
#line 561 "syntax_analyzer.y"
                                                                                                              { (yyval.str) = template("%s* %s = (%s*)malloc(%s * sizeof(%s));\nfor (int %s = 0; %s < %s; ++%s)\n\t%s[%s] = %s;\n", (yyvsp[-1].str), (yyvsp[-11].str), (yyvsp[-1].str), (yyvsp[-4].str), (yyvsp[-1].str), (yyvsp[-6].str), (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-6].str), (yyvsp[-11].str), (yyvsp[-6].str), (yyvsp[-8].str)); }
#line 2578 "syntax_analyzer.tab.c"
    break;

  case 162: /* comp_command: KW_WHILE '(' comp_expression ')' ':' comp_command_list KW_ENDWHILE ';'  */
#line 564 "syntax_analyzer.y"
                                                                             { (yyval.str) = template("while ( %s ) {\n%s\n}\n", (yyvsp[-5].str), (yyvsp[-2].str)); }
#line 2584 "syntax_analyzer.tab.c"
    break;

  case 163: /* comp_command: KW_BREAK ';'  */
#line 567 "syntax_analyzer.y"
                   { (yyval.str) = template("break;\n"); }
#line 2590 "syntax_analyzer.tab.c"
    break;

  case 164: /* comp_command: KW_CONTINUE ';'  */
#line 570 "syntax_analyzer.y"
                      { (yyval.str) = template("continue;\n"); }
#line 2596 "syntax_analyzer.tab.c"
    break;

  case 165: /* comp_command: KW_RETURN ';'  */
#line 573 "syntax_analyzer.y"
                    { (yyval.str) = template("return;\n"); }
#line 2602 "syntax_analyzer.tab.c"
    break;

  case 166: /* comp_command: KW_RETURN comp_expression ';'  */
#line 574 "syntax_analyzer.y"
                                    { (yyval.str) = template("return %s;\n", (yyvsp[-1].str)); }
#line 2608 "syntax_analyzer.tab.c"
    break;

  case 167: /* comp_command: general_comp_function_call ';'  */
#line 577 "syntax_analyzer.y"
                                     { (yyval.str) = template("%s ;\n", (yyvsp[-1].str)); }
#line 2614 "syntax_analyzer.tab.c"
    break;

  case 168: /* comp_function_definition_list: %empty  */
#line 581 "syntax_analyzer.y"
           { (yyval.str) = template(""); }
#line 2620 "syntax_analyzer.tab.c"
    break;

  case 169: /* comp_function_definition_list: comp_function_definition_list comp_function_definition  */
#line 582 "syntax_analyzer.y"
                                                             { (yyval.str) = template("%s%s", (yyvsp[-1].str), (yyvsp[0].str)); }
#line 2626 "syntax_analyzer.tab.c"
    break;

  case 170: /* comp_function_definition: KW_DEF IDENTIFIER '(' parameter_declaration_list ')' ':' local_var_const_decl_list comp_command_list KW_ENDDEF ';'  */
#line 587 "syntax_analyzer.y"
                                                                                                                       { (yyval.str) = template("void %s(%s) {\n%s\n%s\n} \n", (yyvsp[-8].str), (yyvsp[-6].str), (yyvsp[-3].str), (yyvsp[-2].str)); }
#line 2632 "syntax_analyzer.tab.c"
    break;

  case 171: /* comp_function_definition: KW_DEF IDENTIFIER '(' parameter_declaration_list ')' ':' local_var_const_decl comp_command_list KW_ENDDEF ';'  */
#line 589 "syntax_analyzer.y"
                                                                                                                    { (yyval.str) = template("void %s(%s) {\n%s\n%s\n} \n", (yyvsp[-8].str), (yyvsp[-6].str), (yyvsp[-3].str), (yyvsp[-2].str)); }
#line 2638 "syntax_analyzer.tab.c"
    break;

  case 172: /* comp_function_definition: KW_DEF IDENTIFIER '(' parameter_declaration_list ')' ':' comp_command_list KW_ENDDEF ';'  */
#line 591 "syntax_analyzer.y"
                                                                                                { (yyval.str) = template("void %s(%s) {\n%s\n} \n", (yyvsp[-7].str), (yyvsp[-5].str), (yyvsp[-2].str)); }
#line 2644 "syntax_analyzer.tab.c"
    break;

  case 173: /* comp_function_definition: KW_DEF IDENTIFIER '(' parameter_declaration_list ')' '-' '>' basic_data_type ':' local_var_const_decl_list comp_command_list KW_RETURN comp_expression ';' KW_ENDDEF ';'  */
#line 594 "syntax_analyzer.y"
                                                                                                                                                                               { (yyval.str) = template("%s %s(%s) {\n%s\n%s\nreturn %s;\n}\n", (yyvsp[-8].str), (yyvsp[-14].str), (yyvsp[-12].str), (yyvsp[-6].str), (yyvsp[-5].str), (yyvsp[-3].str)); }
#line 2650 "syntax_analyzer.tab.c"
    break;

  case 174: /* comp_function_definition: KW_DEF IDENTIFIER '(' parameter_declaration_list ')' '-' '>' basic_data_type ':' comp_command_list KW_RETURN comp_expression ';' KW_ENDDEF ';'  */
#line 596 "syntax_analyzer.y"
                                                                                                                                                      { (yyval.str) = template("%s %s(%s) {\n%s\nreturn %s;\n}\n", (yyvsp[-7].str), (yyvsp[-13].str), (yyvsp[-11].str), (yyvsp[-5].str),  (yyvsp[-3].str)); }
#line 2656 "syntax_analyzer.tab.c"
    break;

  case 175: /* comp_function_definition: KW_DEF IDENTIFIER '(' parameter_declaration_list ')' '-' '>' basic_data_type ':' local_var_const_decl comp_command_list KW_RETURN comp_expression ';' KW_ENDDEF ';'  */
#line 598 "syntax_analyzer.y"
                                                                                                                                                                          { (yyval.str) = template("%s %s(%s) {\n%s\n%s\nreturn %s;\n}\n", (yyvsp[-8].str), (yyvsp[-14].str), (yyvsp[-12].str), (yyvsp[-6].str), (yyvsp[-5].str), (yyvsp[-3].str)); }
#line 2662 "syntax_analyzer.tab.c"
    break;

  case 176: /* comp_var_decl_list: comp_var_decl  */
#line 604 "syntax_analyzer.y"
                  { (yyval.str) = template("%s", (yyvsp[0].str)); }
#line 2668 "syntax_analyzer.tab.c"
    break;

  case 177: /* comp_var_decl_list: comp_var_decl_list comp_var_decl  */
#line 605 "syntax_analyzer.y"
                                       { (yyval.str) = template("%s%s", (yyvsp[-1].str), (yyvsp[0].str)); }
#line 2674 "syntax_analyzer.tab.c"
    break;

  case 178: /* comp_var_decl: comp_identifier_list ':' basic_data_type ';'  */
#line 609 "syntax_analyzer.y"
                                                 { (yyval.str) = template("%s %s;\n", (yyvsp[-1].str), (yyvsp[-3].str)); }
#line 2680 "syntax_analyzer.tab.c"
    break;

  case 179: /* comp_identifier_list: '#' IDENTIFIER  */
#line 613 "syntax_analyzer.y"
                   { (yyval.str) = template("%s", (yyvsp[0].str)); }
#line 2686 "syntax_analyzer.tab.c"
    break;

  case 180: /* comp_identifier_list: '#' IDENTIFIER '[' comp_expression ']'  */
#line 614 "syntax_analyzer.y"
                                             { (yyval.str) = template("%s[%s]", (yyvsp[-3].str), (yyvsp[-1].str)); }
#line 2692 "syntax_analyzer.tab.c"
    break;

  case 181: /* comp_identifier_list: '#' IDENTIFIER '[' ']'  */
#line 615 "syntax_analyzer.y"
                             { (yyval.str) = template("*%s", (yyvsp[-2].str)); }
#line 2698 "syntax_analyzer.tab.c"
    break;

  case 182: /* comp_identifier_list: comp_identifier_list ',' '#' IDENTIFIER  */
#line 616 "syntax_analyzer.y"
                                              { (yyval.str) = template("%s, %s", (yyvsp[-3].str), (yyvsp[0].str)); }
#line 2704 "syntax_analyzer.tab.c"
    break;

  case 183: /* comp_identifier_list: comp_identifier_list ',' '#' IDENTIFIER '[' comp_expression ']'  */
#line 617 "syntax_analyzer.y"
                                                                      { (yyval.str) = template("%s, %s[%s]", (yyvsp[-6].str), (yyvsp[-3].str), (yyvsp[-1].str)); }
#line 2710 "syntax_analyzer.tab.c"
    break;

  case 184: /* comp_identifier_list: comp_identifier_list ',' '#' IDENTIFIER '[' ']'  */
#line 618 "syntax_analyzer.y"
                                                      { (yyval.str) = template("%s, *%s", (yyvsp[-5].str), (yyvsp[-2].str)); }
#line 2716 "syntax_analyzer.tab.c"
    break;

  case 185: /* comp_definition: KW_COMP IDENTIFIER ':' comp_var_decl_list comp_function_definition_list KW_ENDCOMP ';'  */
#line 624 "syntax_analyzer.y"
                                                                                           { (yyval.str) = template("typedef struct %s {\n%s\n%s} %s ;\n", (yyvsp[-5].str), (yyvsp[-3].str), (yyvsp[-2].str), (yyvsp[-5].str)); }
#line 2722 "syntax_analyzer.tab.c"
    break;

  case 186: /* comp_definition: KW_COMP IDENTIFIER ':' comp_var_decl comp_function_definition_list KW_ENDCOMP ';'  */
#line 626 "syntax_analyzer.y"
                                                                                        { (yyval.str) = template("typedef struct %s {\n%s\n%s} %s ;\n", (yyvsp[-5].str), (yyvsp[-3].str), (yyvsp[-2].str), (yyvsp[-5].str)); }
#line 2728 "syntax_analyzer.tab.c"
    break;

  case 187: /* comp_definition: KW_COMP IDENTIFIER ':' comp_function_definition_list KW_ENDCOMP ';'  */
#line 628 "syntax_analyzer.y"
                                                                           { (yyval.str) = template("typedef struct %s {\\n%s} %s ;\n", (yyvsp[-4].str), (yyvsp[-2].str), (yyvsp[-4].str)); }
#line 2734 "syntax_analyzer.tab.c"
    break;

  case 188: /* comp_definition_list: %empty  */
#line 632 "syntax_analyzer.y"
           { (yyval.str) = template(""); }
#line 2740 "syntax_analyzer.tab.c"
    break;

  case 189: /* comp_definition_list: comp_definition_list comp_definition  */
#line 633 "syntax_analyzer.y"
                                           { (yyval.str) = template("%s%s", (yyvsp[-1].str), (yyvsp[0].str)); }
#line 2746 "syntax_analyzer.tab.c"
    break;

  case 190: /* main_unit: KW_DEF KW_MAIN '(' ')' ':' local_var_const_decl_list function_command_list KW_ENDDEF ';'  */
#line 639 "syntax_analyzer.y"
                                                                                             { (yyval.str) = template("int main() {\n%s\n%s\nreturn 0;\n}\n", (yyvsp[-3].str), (yyvsp[-2].str)); }
#line 2752 "syntax_analyzer.tab.c"
    break;

  case 191: /* main_unit: KW_DEF KW_MAIN '(' ')' ':' local_var_const_decl function_command_list KW_ENDDEF ';'  */
#line 641 "syntax_analyzer.y"
                                                                                          { (yyval.str) = template("int main() {\n%s\n%s\nreturn 0;\n}\n", (yyvsp[-3].str), (yyvsp[-2].str)); }
#line 2758 "syntax_analyzer.tab.c"
    break;

  case 192: /* main_unit: KW_DEF KW_MAIN '(' ')' ':' function_command_list KW_ENDDEF ';'  */
#line 643 "syntax_analyzer.y"
                                                                      { (yyval.str) = template("int main() {\n%s\nreturn 0;\n}\n", (yyvsp[-2].str)); }
#line 2764 "syntax_analyzer.tab.c"
    break;


#line 2768 "syntax_analyzer.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 647 "syntax_analyzer.y"

int main () {
  if ( yyparse() == 0 )
    printf("Accepted!\n");
  else
    printf("Rejected!\n");
}
