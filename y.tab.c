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
#line 1 "lab.yacc"

    #include <iostream>
	extern int yylineno;
	extern int line_counter;
	extern int yylex();
	bool error_ = 0;
    extern FILE* yyin;
    int num_error = 0;
    void yyerror(const char *s)
	{
        std::cout << "NO OK" << std::endl;
		std::cout << s << "line=" << yylineno << std::endl;
		error_ = 1;
	}

#line 87 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    PACKAGE = 258,                 /* PACKAGE  */
    IMPORTS = 259,                 /* IMPORTS  */
    FUNCTION = 260,                /* FUNCTION  */
    id = 261,                      /* id  */
    VAR = 262,                     /* VAR  */
    EOL = 263,                     /* EOL  */
    CONST = 264,                   /* CONST  */
    METHOD = 265,                  /* METHOD  */
    IF = 266,                      /* IF  */
    ELSE = 267,                    /* ELSE  */
    SWITCH = 268,                  /* SWITCH  */
    CASE = 269,                    /* CASE  */
    FALLTHROUGH = 270,             /* FALLTHROUGH  */
    DEFAULT = 271,                 /* DEFAULT  */
    FOR = 272,                     /* FOR  */
    BREAK = 273,                   /* BREAK  */
    RANGE = 274,                   /* RANGE  */
    NEW = 275,                     /* NEW  */
    SELECT = 276,                  /* SELECT  */
    RETURN = 277,                  /* RETURN  */
    MAP = 278,                     /* MAP  */
    GO = 279,                      /* GO  */
    GOTO = 280,                    /* GOTO  */
    INTERFACE = 281,               /* INTERFACE  */
    CHAN = 282,                    /* CHAN  */
    CONTINUE = 283,                /* CONTINUE  */
    DEFER = 284,                   /* DEFER  */
    CONST_INT = 285,               /* CONST_INT  */
    CONST_CHAR = 286,              /* CONST_CHAR  */
    CONST_STRING = 287,            /* CONST_STRING  */
    BOOL = 288,                    /* BOOL  */
    IOTA = 289,                    /* IOTA  */
    CONST_OCTAL = 290,             /* CONST_OCTAL  */
    CONST_HEX = 291,               /* CONST_HEX  */
    CONST_BIN = 292,               /* CONST_BIN  */
    FLOAT_HEX = 293,               /* FLOAT_HEX  */
    DECIMAL_FLOAT_LIT = 294,       /* DECIMAL_FLOAT_LIT  */
    HEX_FLOAT_LIT = 295,           /* HEX_FLOAT_LIT  */
    RUNE_LIT = 296,                /* RUNE_LIT  */
    CONST_INT_ERR = 297,           /* CONST_INT_ERR  */
    CONST_BIN_ERR = 298,           /* CONST_BIN_ERR  */
    INT = 299,                     /* INT  */
    STRING = 300,                  /* STRING  */
    COMPLEXTYPE = 301,             /* COMPLEXTYPE  */
    BYTE = 302,                    /* BYTE  */
    FLOAT = 303,                   /* FLOAT  */
    RUNE = 304,                    /* RUNE  */
    UINT = 305,                    /* UINT  */
    BOOL_TYPE = 306,               /* BOOL_TYPE  */
    TYPE = 307,                    /* TYPE  */
    STRUCT = 308,                  /* STRUCT  */
    UINTPTR = 309,                 /* UINTPTR  */
    ERRORTYPE = 310,               /* ERRORTYPE  */
    ANYTYPE = 311,                 /* ANYTYPE  */
    COMPARABLE = 312,              /* COMPARABLE  */
    EQ = 313,                      /* EQ  */
    INC = 314,                     /* INC  */
    DEC = 315,                     /* DEC  */
    SUBEQ = 316,                   /* SUBEQ  */
    PLUSEQ = 317,                  /* PLUSEQ  */
    MULEQ = 318,                   /* MULEQ  */
    DIVEQ = 319,                   /* DIVEQ  */
    MODEQ = 320,                   /* MODEQ  */
    EQUAL = 321,                   /* EQUAL  */
    NOTEQUAL = 322,                /* NOTEQUAL  */
    GREATEROREQUAL = 323,          /* GREATEROREQUAL  */
    LESSOREQUAL = 324,             /* LESSOREQUAL  */
    AND = 325,                     /* AND  */
    OR = 326,                      /* OR  */
    LSHIFT = 327,                  /* LSHIFT  */
    RSHIFT = 328,                  /* RSHIFT  */
    PEQ = 329,                     /* PEQ  */
    XOR = 330,                     /* XOR  */
    SEMICOLON = 331,               /* SEMICOLON  */
    AMP_EXP = 332,                 /* AMP_EXP  */
    POINT = 333                    /* POINT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define PACKAGE 258
#define IMPORTS 259
#define FUNCTION 260
#define id 261
#define VAR 262
#define EOL 263
#define CONST 264
#define METHOD 265
#define IF 266
#define ELSE 267
#define SWITCH 268
#define CASE 269
#define FALLTHROUGH 270
#define DEFAULT 271
#define FOR 272
#define BREAK 273
#define RANGE 274
#define NEW 275
#define SELECT 276
#define RETURN 277
#define MAP 278
#define GO 279
#define GOTO 280
#define INTERFACE 281
#define CHAN 282
#define CONTINUE 283
#define DEFER 284
#define CONST_INT 285
#define CONST_CHAR 286
#define CONST_STRING 287
#define BOOL 288
#define IOTA 289
#define CONST_OCTAL 290
#define CONST_HEX 291
#define CONST_BIN 292
#define FLOAT_HEX 293
#define DECIMAL_FLOAT_LIT 294
#define HEX_FLOAT_LIT 295
#define RUNE_LIT 296
#define CONST_INT_ERR 297
#define CONST_BIN_ERR 298
#define INT 299
#define STRING 300
#define COMPLEXTYPE 301
#define BYTE 302
#define FLOAT 303
#define RUNE 304
#define UINT 305
#define BOOL_TYPE 306
#define TYPE 307
#define STRUCT 308
#define UINTPTR 309
#define ERRORTYPE 310
#define ANYTYPE 311
#define COMPARABLE 312
#define EQ 313
#define INC 314
#define DEC 315
#define SUBEQ 316
#define PLUSEQ 317
#define MULEQ 318
#define DIVEQ 319
#define MODEQ 320
#define EQUAL 321
#define NOTEQUAL 322
#define GREATEROREQUAL 323
#define LESSOREQUAL 324
#define AND 325
#define OR 326
#define LSHIFT 327
#define RSHIFT 328
#define PEQ 329
#define XOR 330
#define SEMICOLON 331
#define AMP_EXP 332
#define POINT 333

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_PACKAGE = 3,                    /* PACKAGE  */
  YYSYMBOL_IMPORTS = 4,                    /* IMPORTS  */
  YYSYMBOL_FUNCTION = 5,                   /* FUNCTION  */
  YYSYMBOL_id = 6,                         /* id  */
  YYSYMBOL_VAR = 7,                        /* VAR  */
  YYSYMBOL_EOL = 8,                        /* EOL  */
  YYSYMBOL_CONST = 9,                      /* CONST  */
  YYSYMBOL_METHOD = 10,                    /* METHOD  */
  YYSYMBOL_IF = 11,                        /* IF  */
  YYSYMBOL_ELSE = 12,                      /* ELSE  */
  YYSYMBOL_SWITCH = 13,                    /* SWITCH  */
  YYSYMBOL_CASE = 14,                      /* CASE  */
  YYSYMBOL_FALLTHROUGH = 15,               /* FALLTHROUGH  */
  YYSYMBOL_DEFAULT = 16,                   /* DEFAULT  */
  YYSYMBOL_FOR = 17,                       /* FOR  */
  YYSYMBOL_BREAK = 18,                     /* BREAK  */
  YYSYMBOL_RANGE = 19,                     /* RANGE  */
  YYSYMBOL_NEW = 20,                       /* NEW  */
  YYSYMBOL_SELECT = 21,                    /* SELECT  */
  YYSYMBOL_RETURN = 22,                    /* RETURN  */
  YYSYMBOL_MAP = 23,                       /* MAP  */
  YYSYMBOL_GO = 24,                        /* GO  */
  YYSYMBOL_GOTO = 25,                      /* GOTO  */
  YYSYMBOL_INTERFACE = 26,                 /* INTERFACE  */
  YYSYMBOL_CHAN = 27,                      /* CHAN  */
  YYSYMBOL_CONTINUE = 28,                  /* CONTINUE  */
  YYSYMBOL_DEFER = 29,                     /* DEFER  */
  YYSYMBOL_CONST_INT = 30,                 /* CONST_INT  */
  YYSYMBOL_CONST_CHAR = 31,                /* CONST_CHAR  */
  YYSYMBOL_CONST_STRING = 32,              /* CONST_STRING  */
  YYSYMBOL_BOOL = 33,                      /* BOOL  */
  YYSYMBOL_IOTA = 34,                      /* IOTA  */
  YYSYMBOL_CONST_OCTAL = 35,               /* CONST_OCTAL  */
  YYSYMBOL_CONST_HEX = 36,                 /* CONST_HEX  */
  YYSYMBOL_CONST_BIN = 37,                 /* CONST_BIN  */
  YYSYMBOL_FLOAT_HEX = 38,                 /* FLOAT_HEX  */
  YYSYMBOL_DECIMAL_FLOAT_LIT = 39,         /* DECIMAL_FLOAT_LIT  */
  YYSYMBOL_HEX_FLOAT_LIT = 40,             /* HEX_FLOAT_LIT  */
  YYSYMBOL_RUNE_LIT = 41,                  /* RUNE_LIT  */
  YYSYMBOL_CONST_INT_ERR = 42,             /* CONST_INT_ERR  */
  YYSYMBOL_CONST_BIN_ERR = 43,             /* CONST_BIN_ERR  */
  YYSYMBOL_INT = 44,                       /* INT  */
  YYSYMBOL_STRING = 45,                    /* STRING  */
  YYSYMBOL_COMPLEXTYPE = 46,               /* COMPLEXTYPE  */
  YYSYMBOL_BYTE = 47,                      /* BYTE  */
  YYSYMBOL_FLOAT = 48,                     /* FLOAT  */
  YYSYMBOL_RUNE = 49,                      /* RUNE  */
  YYSYMBOL_UINT = 50,                      /* UINT  */
  YYSYMBOL_BOOL_TYPE = 51,                 /* BOOL_TYPE  */
  YYSYMBOL_TYPE = 52,                      /* TYPE  */
  YYSYMBOL_STRUCT = 53,                    /* STRUCT  */
  YYSYMBOL_UINTPTR = 54,                   /* UINTPTR  */
  YYSYMBOL_ERRORTYPE = 55,                 /* ERRORTYPE  */
  YYSYMBOL_ANYTYPE = 56,                   /* ANYTYPE  */
  YYSYMBOL_COMPARABLE = 57,                /* COMPARABLE  */
  YYSYMBOL_EQ = 58,                        /* EQ  */
  YYSYMBOL_INC = 59,                       /* INC  */
  YYSYMBOL_DEC = 60,                       /* DEC  */
  YYSYMBOL_SUBEQ = 61,                     /* SUBEQ  */
  YYSYMBOL_PLUSEQ = 62,                    /* PLUSEQ  */
  YYSYMBOL_MULEQ = 63,                     /* MULEQ  */
  YYSYMBOL_DIVEQ = 64,                     /* DIVEQ  */
  YYSYMBOL_MODEQ = 65,                     /* MODEQ  */
  YYSYMBOL_EQUAL = 66,                     /* EQUAL  */
  YYSYMBOL_NOTEQUAL = 67,                  /* NOTEQUAL  */
  YYSYMBOL_GREATEROREQUAL = 68,            /* GREATEROREQUAL  */
  YYSYMBOL_LESSOREQUAL = 69,               /* LESSOREQUAL  */
  YYSYMBOL_AND = 70,                       /* AND  */
  YYSYMBOL_OR = 71,                        /* OR  */
  YYSYMBOL_LSHIFT = 72,                    /* LSHIFT  */
  YYSYMBOL_RSHIFT = 73,                    /* RSHIFT  */
  YYSYMBOL_PEQ = 74,                       /* PEQ  */
  YYSYMBOL_XOR = 75,                       /* XOR  */
  YYSYMBOL_SEMICOLON = 76,                 /* SEMICOLON  */
  YYSYMBOL_AMP_EXP = 77,                   /* AMP_EXP  */
  YYSYMBOL_POINT = 78,                     /* POINT  */
  YYSYMBOL_79_ = 79,                       /* '+'  */
  YYSYMBOL_80_ = 80,                       /* '-'  */
  YYSYMBOL_81_ = 81,                       /* '*'  */
  YYSYMBOL_82_ = 82,                       /* '/'  */
  YYSYMBOL_83_ = 83,                       /* '('  */
  YYSYMBOL_84_ = 84,                       /* ')'  */
  YYSYMBOL_85_ = 85,                       /* ','  */
  YYSYMBOL_86_ = 86,                       /* '{'  */
  YYSYMBOL_87_ = 87,                       /* '}'  */
  YYSYMBOL_88_ = 88,                       /* '['  */
  YYSYMBOL_89_ = 89,                       /* ']'  */
  YYSYMBOL_90_ = 90,                       /* ':'  */
  YYSYMBOL_91_ = 91,                       /* '!'  */
  YYSYMBOL_92_ = 92,                       /* '>'  */
  YYSYMBOL_93_ = 93,                       /* '<'  */
  YYSYMBOL_94_ = 94,                       /* '%'  */
  YYSYMBOL_95_ = 95,                       /* '&'  */
  YYSYMBOL_96_ = 96,                       /* '|'  */
  YYSYMBOL_YYACCEPT = 97,                  /* $accept  */
  YYSYMBOL_prog = 98,                      /* prog  */
  YYSYMBOL_variables = 99,                 /* variables  */
  YYSYMBOL_definitions = 100,              /* definitions  */
  YYSYMBOL_var_definition = 101,           /* var_definition  */
  YYSYMBOL_const_definition = 102,         /* const_definition  */
  YYSYMBOL_begin_const_definition = 103,   /* begin_const_definition  */
  YYSYMBOL_mass = 104,                     /* mass  */
  YYSYMBOL_mass_len = 105,                 /* mass_len  */
  YYSYMBOL_mass_index = 106,               /* mass_index  */
  YYSYMBOL_mass_len_list = 107,            /* mass_len_list  */
  YYSYMBOL_var_def_list = 108,             /* var_def_list  */
  YYSYMBOL_var_def = 109,                  /* var_def  */
  YYSYMBOL_data_list = 110,                /* data_list  */
  YYSYMBOL_simple_definition = 111,        /* simple_definition  */
  YYSYMBOL_typeless_def = 112,             /* typeless_def  */
  YYSYMBOL_other_definitions = 113,        /* other_definitions  */
  YYSYMBOL_other = 114,                    /* other  */
  YYSYMBOL_list = 115,                     /* list  */
  YYSYMBOL_struct_def = 116,               /* struct_def  */
  YYSYMBOL_struct_body = 117,              /* struct_body  */
  YYSYMBOL_struct_list = 118,              /* struct_list  */
  YYSYMBOL_struct_contain = 119,           /* struct_contain  */
  YYSYMBOL_struct_init = 120,              /* struct_init  */
  YYSYMBOL_expression = 121,               /* expression  */
  YYSYMBOL_expression_args = 122,          /* expression_args  */
  YYSYMBOL_single_expression = 123,        /* single_expression  */
  YYSYMBOL_logical_expression = 124,       /* logical_expression  */
  YYSYMBOL_log_arguments = 125,            /* log_arguments  */
  YYSYMBOL_logical_condition = 126,        /* logical_condition  */
  YYSYMBOL_logical_operator = 127,         /* logical_operator  */
  YYSYMBOL_id_list = 128,                  /* id_list  */
  YYSYMBOL_body = 129,                     /* body  */
  YYSYMBOL_return_value = 130,             /* return_value  */
  YYSYMBOL_parameters = 131,               /* parameters  */
  YYSYMBOL_parameter_list = 132,           /* parameter_list  */
  YYSYMBOL_statements = 133,               /* statements  */
  YYSYMBOL_statement = 134,                /* statement  */
  YYSYMBOL_if_block = 135,                 /* if_block  */
  YYSYMBOL_else_block = 136,               /* else_block  */
  YYSYMBOL_conditions = 137,               /* conditions  */
  YYSYMBOL_condition = 138,                /* condition  */
  YYSYMBOL_cond_args = 139,                /* cond_args  */
  YYSYMBOL_eq_op = 140,                    /* eq_op  */
  YYSYMBOL_for_loop = 141,                 /* for_loop  */
  YYSYMBOL_for_def = 142,                  /* for_def  */
  YYSYMBOL_for_cond = 143,                 /* for_cond  */
  YYSYMBOL_for_act = 144,                  /* for_act  */
  YYSYMBOL_actions = 145,                  /* actions  */
  YYSYMBOL_function_call = 146,            /* function_call  */
  YYSYMBOL_operator = 147,                 /* operator  */
  YYSYMBOL_type = 148,                     /* type  */
  YYSYMBOL_data = 149,                     /* data  */
  YYSYMBOL_float_lit = 150,                /* float_lit  */
  YYSYMBOL_methods = 151,                  /* methods  */
  YYSYMBOL_method_arguments = 152,         /* method_arguments  */
  YYSYMBOL_arg_list = 153,                 /* arg_list  */
  YYSYMBOL_arguments = 154                 /* arguments  */
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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1390

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  97
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  58
/* YYNRULES -- Number of rules.  */
#define YYNRULES  208
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  345

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   333


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
       2,     2,     2,    91,     2,     2,     2,    94,    95,     2,
      83,    84,    81,    79,    85,    80,     2,    82,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    90,     2,
      93,     2,    92,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    88,     2,    89,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    86,    96,    87,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    30,    30,    31,    32,    33,    37,    38,    39,    40,
      41,    42,    47,    48,    49,    51,    52,    56,    57,    58,
      59,    61,    62,    63,    64,    65,    66,    71,    72,    73,
      74,    75,    78,    79,    80,    81,    82,    84,    85,    87,
      88,    89,    90,    95,    96,    98,    99,   100,   103,   104,
     106,   107,   108,   109,   110,   113,   114,   115,   118,   119,
     120,   123,   124,   125,   126,   127,   129,   130,   133,   136,
     137,   139,   140,   142,   143,   145,   151,   152,   155,   156,
     157,   158,   159,   162,   163,   164,   165,   168,   169,   170,
     172,   173,   175,   176,   177,   179,   180,   182,   183,   184,
     185,   189,   190,   197,   198,   199,   202,   203,   205,   206,
     207,   209,   210,   213,   214,   219,   220,   223,   224,   226,
     227,   228,   229,   233,   234,   235,   236,   238,   239,   240,
     241,   282,   283,   284,   285,   286,   287,   288,   292,   293,
     296,   297,   298,   302,   303,   305,   306,   309,   310,   311,
     312,   313,   314,   315,   316,   321,   322,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   366,   367,   372,   374,   375,   377,   378,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391
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
  "\"end of file\"", "error", "\"invalid token\"", "PACKAGE", "IMPORTS",
  "FUNCTION", "id", "VAR", "EOL", "CONST", "METHOD", "IF", "ELSE",
  "SWITCH", "CASE", "FALLTHROUGH", "DEFAULT", "FOR", "BREAK", "RANGE",
  "NEW", "SELECT", "RETURN", "MAP", "GO", "GOTO", "INTERFACE", "CHAN",
  "CONTINUE", "DEFER", "CONST_INT", "CONST_CHAR", "CONST_STRING", "BOOL",
  "IOTA", "CONST_OCTAL", "CONST_HEX", "CONST_BIN", "FLOAT_HEX",
  "DECIMAL_FLOAT_LIT", "HEX_FLOAT_LIT", "RUNE_LIT", "CONST_INT_ERR",
  "CONST_BIN_ERR", "INT", "STRING", "COMPLEXTYPE", "BYTE", "FLOAT", "RUNE",
  "UINT", "BOOL_TYPE", "TYPE", "STRUCT", "UINTPTR", "ERRORTYPE", "ANYTYPE",
  "COMPARABLE", "EQ", "INC", "DEC", "SUBEQ", "PLUSEQ", "MULEQ", "DIVEQ",
  "MODEQ", "EQUAL", "NOTEQUAL", "GREATEROREQUAL", "LESSOREQUAL", "AND",
  "OR", "LSHIFT", "RSHIFT", "PEQ", "XOR", "SEMICOLON", "AMP_EXP", "POINT",
  "'+'", "'-'", "'*'", "'/'", "'('", "')'", "','", "'{'", "'}'", "'['",
  "']'", "':'", "'!'", "'>'", "'<'", "'%'", "'&'", "'|'", "$accept",
  "prog", "variables", "definitions", "var_definition", "const_definition",
  "begin_const_definition", "mass", "mass_len", "mass_index",
  "mass_len_list", "var_def_list", "var_def", "data_list",
  "simple_definition", "typeless_def", "other_definitions", "other",
  "list", "struct_def", "struct_body", "struct_list", "struct_contain",
  "struct_init", "expression", "expression_args", "single_expression",
  "logical_expression", "log_arguments", "logical_condition",
  "logical_operator", "id_list", "body", "return_value", "parameters",
  "parameter_list", "statements", "statement", "if_block", "else_block",
  "conditions", "condition", "cond_args", "eq_op", "for_loop", "for_def",
  "for_cond", "for_act", "actions", "function_call", "operator", "type",
  "data", "float_lit", "methods", "method_arguments", "arg_list",
  "arguments", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-246)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-209)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      30,    42,   196,  -246,  -246,   -10,    10,     2,     4,    51,
    -246,  -246,   771,  -246,    72,    86,  1349,    16,   113,   771,
     113,   771,    71,  -246,  -246,  -246,  -246,  -246,  -246,  -246,
    -246,   409,   490,   129,   349,  -246,   802,  -246,  -246,  -246,
      81,   440,    63,  -246,  -246,  -246,  -246,  -246,  -246,  -246,
    -246,  -246,  -246,  -246,    67,  -246,  1349,    75,   113,  -246,
     638,  -246,     5,    85,   169,  -246,    80,   848,  1098,   616,
      88,  -246,  1123,  1123,   104,   -30,  1285,   107,   920,   108,
      88,   107,  -246,    10,    10,  -246,   117,  -246,   341,   973,
    -246,  -246,  -246,   468,   349,   831,   126,   847,  -246,   132,
    -246,  -246,  1349,   174,  -246,    85,   786,   616,   616,  -246,
     104,   175,   231,  1349,  1191,   884,  1009,  1349,  -246,  -246,
    -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,
    -246,  -246,  -246,   616,   616,  -246,  -246,  1203,  -246,  -246,
    -246,  -246,  -246,  -246,  -246,  1223,   549,  -246,  1191,  -246,
      16,    16,  -246,  -246,  -246,   708,    88,  1123,   -30,   107,
      67,   349,   157,  -246,   166,   167,   245,  -246,    88,  1349,
    1123,  1123,  1123,  1123,   616,   418,   171,   231,  -246,  -246,
      88,   173,   231,  1349,  -246,  -246,  -246,  -246,    39,   -30,
    -246,    10,  -246,  -246,   536,    89,   122,   177,   176,  1251,
    -246,   132,  -246,   816,   847,    10,    88,  1123,  1123,   170,
    -246,  -246,  -246,  -246,  -246,    52,    16,   945,  -246,  -246,
    -246,  1034,   305,  -246,  -246,  -246,  -246,   317,   184,   255,
      16,   231,  1070,  -246,  -246,   671,   188,  1235,   568,   191,
    -246,  1123,  -246,   -30,   -30,   186,   317,   268,  -246,  -246,
    -246,  -246,   317,  -246,   195,  -246,  -246,   151,   721,  -246,
     277,   151,   190,    68,   -30,   -13,  -246,   -38,   -30,   219,
     207,     0,   294,   294,  -246,  -246,     8,   214,  -246,  1211,
     114,   298,  -246,  1123,   -30,   -30,   547,  -246,   223,   224,
    -246,  -246,  -246,   151,  -246,    10,   226,   220,  1203,   317,
      79,  -246,  -246,   673,   317,  1268,   -49,  -246,  -246,   317,
     268,  -246,  -246,  1349,  1239,    10,  -246,    19,   235,    16,
    -246,   -30,   238,   253,   243,  1280,  -246,   244,   144,    16,
    -246,  -246,  -246,   628,  -246,  -246,  -246,    57,  1123,  -246,
     246,    62,   317,   281,  -246
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     1,   103,    98,     0,     0,     0,
       3,     5,     0,     4,     0,     0,     0,    99,    16,     0,
       0,     0,     0,   172,   173,   174,   175,   176,   177,   178,
     179,   127,     0,     0,     0,     8,     0,    13,    14,    12,
      54,     0,     0,   184,   185,   186,   188,   190,   182,   183,
     181,   191,   192,   187,     0,   189,     0,     0,    15,    44,
       0,     6,     0,    17,     0,     7,     0,    98,    64,     0,
      63,    58,    62,     0,    61,    59,     0,     0,    49,     0,
      55,     0,    49,    97,    78,    81,     0,    34,     0,     0,
      79,    36,   180,   127,     0,     0,     0,   107,    37,     0,
       9,    43,     0,    46,    11,    19,    20,     0,     0,    10,
      18,     0,    69,     0,     0,    99,     0,     0,   162,   163,
     164,   165,   166,   170,   171,   169,   157,   158,   161,   160,
     159,   167,   168,     0,     0,    95,    96,   127,   131,   132,
     133,   134,   135,   136,   137,   127,     0,    60,     0,    57,
     100,    80,    35,    33,    32,    78,    50,    51,    52,     0,
      79,     0,     0,   104,     0,   106,     0,    38,    45,     0,
      25,    26,    21,    22,     0,     0,     0,    70,    72,   124,
      66,     0,    67,     0,    82,    48,    76,    77,   129,   126,
     128,   129,   123,    31,     0,     0,     0,    49,     0,    80,
      53,    79,   105,     0,     0,   109,    47,    23,    24,     0,
      73,    68,    71,    65,   125,   130,   130,    98,    41,    30,
      40,    49,     0,    28,    27,    39,    56,   112,     0,     0,
     110,    69,    99,    42,    29,    78,    81,   127,   127,     0,
     147,   150,   151,   153,     0,     0,   111,   149,   154,   114,
     152,   148,   112,   108,     0,    83,    84,   127,    80,    90,
       0,   127,   129,     0,   120,   129,   142,     0,   143,     0,
       0,     0,     0,     0,   102,   113,     0,     0,    74,    78,
      81,     0,   207,   202,   206,   205,    79,   201,     0,   194,
     197,    85,    86,   127,    91,    92,     0,   130,   127,   112,
     130,   140,   141,   127,   112,    94,     0,    87,    88,   112,
     118,   116,   101,     0,    80,   203,   155,   127,     0,    93,
     193,   119,     0,     0,     0,    94,    89,     0,     0,   204,
     196,   156,   115,     0,   139,   117,    75,    78,   146,   145,
       0,    80,     0,     0,   138
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -246,  -246,   331,   217,  -246,  -246,   299,   -69,  -246,   -40,
    -246,  -246,   285,   -28,  -246,    93,    95,   172,   215,  -246,
     134,   -82,  -143,  -246,   -31,   -25,    34,   -12,   -94,  -230,
    -213,     6,  -246,  -246,  -246,  -246,  -171,    27,    94,  -246,
    -246,   -26,   228,   295,  -246,  -246,    73,  -246,  -231,  -246,
     -66,    65,   -14,  -246,   -89,  -245,  -246,    58
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,   240,    35,    57,    62,    63,   147,    36,    17,
     194,    58,    59,    70,    37,    38,    39,    71,   181,    11,
     176,   177,   178,   282,   241,    73,   242,   243,   244,   259,
     137,    12,    13,    15,   164,   165,   245,   246,   247,   311,
     263,   285,    76,   260,   248,   269,   270,   340,   249,   250,
     133,    40,    90,    55,   251,   288,   289,   290
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      72,    95,    54,    88,    80,    75,   305,   134,     6,    89,
       6,     6,   149,    19,    21,   275,   296,    78,    82,   237,
      31,   135,   136,   134,    60,   279,    64,   115,   294,   280,
     272,   273,   182,     1,   212,   326,    32,    74,   116,   212,
     135,   136,    99,   150,   151,   -98,     3,    33,   318,    43,
      44,    45,    46,    47,    48,    49,    50,    22,    51,    52,
      53,   113,   157,    88,    60,   156,   182,   158,   106,    89,
     110,   272,   -98,    14,   168,    16,   170,   172,    41,    78,
     160,   277,   171,   173,   294,    18,   180,    20,    82,   104,
     200,   239,    42,   272,   309,   294,    77,    81,    16,   179,
      82,    92,    69,   185,    56,   134,    96,   134,   186,   187,
     239,   189,   275,   113,   281,   199,   255,   256,   195,     6,
     180,   291,   292,   190,    66,   103,   183,    16,   322,   111,
      88,   190,   197,   324,    82,    83,    89,   -99,   327,    93,
      56,   206,   134,   207,   298,    16,    97,   201,   215,   208,
      56,   216,   196,   183,   299,    82,    98,   279,   159,   100,
     162,   280,   166,    72,   -99,   230,   112,    56,   287,   214,
     107,   111,   287,   117,   222,     6,   223,   232,   307,   308,
     221,    43,    44,    45,    46,    47,    48,    49,    50,    33,
      51,    52,    53,   146,   148,   258,     4,   261,  -208,  -208,
      74,     5,     6,     7,   287,     8,   152,    33,   185,   224,
     163,   264,   268,    23,    24,    25,    26,    27,    28,    29,
      30,   167,   297,   190,   190,   300,   283,   108,   287,   117,
     283,   336,   169,   174,    69,  -195,    61,   175,    65,   314,
     210,   202,   239,   286,   267,   284,   281,   286,     9,   284,
     203,   205,   204,   109,    33,   319,   231,    34,   211,   306,
     213,   253,   283,   226,   113,   325,  -121,   225,   228,   229,
     252,   261,   321,   274,   271,   329,  -121,   268,    16,   286,
     276,   284,   278,   295,   190,   328,   283,   235,     7,   190,
       8,   236,   237,   304,   183,   303,  -122,   341,   238,    82,
     305,   312,   338,   286,   315,   284,  -122,   316,    56,   317,
     320,    43,    44,    45,    46,    47,    48,    49,    50,   331,
      51,    52,    53,   235,     7,   332,     8,   236,   237,   333,
     334,   335,   342,    10,   238,    43,    44,    45,    46,    47,
      48,    49,    50,   101,    51,    52,    53,    43,    44,    45,
      46,    47,    48,    49,    50,    84,    51,    52,    53,    85,
     301,   105,   302,   198,    69,   254,   220,   339,   344,   343,
     310,   145,   239,   192,     0,   330,   323,     0,     0,    43,
      44,    45,    46,    47,    48,    49,    50,     0,    51,    52,
      53,     0,   234,     0,     0,     0,     0,     0,     0,     0,
      69,     0,   118,   119,   120,   121,   122,     0,   239,     0,
       0,     0,     0,   123,   124,    67,   125,     0,     0,    68,
     126,   127,   128,   129,     0,     0,     0,    86,     0,     0,
     153,     0,    69,     0,     0,   130,   131,   132,    87,    43,
      44,    45,    46,    47,    48,    49,    50,     0,    51,    52,
      53,     0,     0,    23,    24,    25,    26,    27,    28,    29,
      30,     0,    23,    24,    25,    26,    27,    28,    29,    30,
       0,   209,     0,     0,   155,     0,     0,     0,    85,     0,
       0,     0,     0,     0,    23,    24,    25,    26,    27,    28,
      29,    30,    69,     0,     0,     0,    79,    34,    43,    44,
      45,    46,    47,    48,    49,    50,    34,    51,    52,    53,
       0,     0,    23,    24,    25,    26,    27,    28,    29,    30,
      43,    44,    45,    46,    47,    48,    49,    50,    94,    51,
      52,    53,     0,     0,    23,    24,    25,    26,    27,    28,
      29,    30,   217,     0,     0,     0,    68,     0,     0,     0,
       0,    69,     0,     0,     0,     6,    34,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    43,    44,    45,    46,
      47,    48,    49,    50,   265,    51,    52,    53,    34,    43,
      44,    45,    46,    47,    48,    49,    50,     0,    51,    52,
      53,     0,     0,     0,     0,     0,     0,     0,    43,    44,
      45,    46,    47,    48,    49,    50,     0,    51,    52,    53,
       0,     0,     0,  -128,  -128,  -128,  -128,     0,     0,    69,
       0,   218,    84,   219,  -128,     0,    85,     0,     0,     0,
       0,  -198,  -198,     0,   337,     0,   193,     0,    85,  -128,
    -128,     0,   266,     0,     0,     0,    43,    44,    45,    46,
      47,    48,    49,    50,  -144,    51,    52,    53,    43,    44,
      45,    46,    47,    48,    49,    50,     0,    51,    52,    53,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   188,
       0,     0,    23,    24,    25,    26,    27,    28,    29,    30,
       0,     0,     0,     0,     0,     0,   102,     0,     0,    69,
       0,     0,     0,    43,    44,    45,    46,    47,    48,    49,
      50,    69,    51,    52,    53,   -98,   -98,   -98,   -98,   -98,
     -98,   -98,   -98,    33,     0,     0,    34,     0,     0,   -98,
     255,   256,     0,     0,     0,     0,     0,   138,   139,   140,
     141,   -94,   -94,     0,     0,   -98,     0,     0,   142,  -144,
       0,     0,     0,     0,   257,     0,   -98,     0,     0,    16,
       0,     0,     0,   143,   144,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,     0,  -129,  -129,  -129,  -129,     0,   -99,
     291,   292,   113,     0,     0,  -129,     0,   138,   139,   140,
     141,   -94,   -94,     0,     0,   -99,    16,     0,   142,     0,
    -129,  -129,     0,     0,   293,     0,   -99,     0,     0,    56,
       0,     0,     0,   143,   144,    23,    24,    25,    26,    27,
      28,    29,    30,     0,     0,     0,     0,     0,     0,    31,
      23,    24,    25,    26,    27,    28,    29,    30,     0,     0,
       0,     0,     0,     0,   108,    32,    23,    24,    25,    26,
      27,    28,    29,    30,     0,     0,    33,     0,     0,    34,
      23,    24,    25,    26,    27,    28,    29,    30,     0,     0,
       0,    33,     0,     0,    34,    23,    24,    25,    26,    27,
      28,    29,    30,    91,     0,     0,     0,     0,     0,     0,
      34,    23,    24,    25,    26,    27,    28,    29,    30,     0,
       0,     0,   227,     0,    34,     0,     0,     0,     0,   -78,
     -78,   -78,   -78,   -78,  -129,  -129,  -129,  -129,     0,   161,
     -78,   -78,   113,   -78,     0,  -129,     0,   -78,   -78,   -78,
     -78,     0,     0,     0,   114,    34,    16,     0,     0,     0,
    -129,  -129,   -78,   -78,   -78,   -80,   -80,   -80,   -80,   -80,
    -130,  -130,  -130,  -130,     0,     0,   -80,   -80,   183,   -80,
       0,  -130,     0,   -80,   -80,   -80,   -80,     0,     0,     0,
       0,     0,    56,     0,     0,     0,  -130,  -130,   -80,   -80,
     -80,   -79,   -79,   -79,   -79,   -79,  -128,  -128,  -128,  -128,
       0,     0,   -79,   -79,     0,   -79,     0,  -128,     0,   -79,
     -79,   -79,   -79,     0,     0,     0,   -78,   -78,   -78,   -78,
     -78,     0,  -128,  -128,   -79,   -79,   -79,   -78,   -78,     0,
     -78,     0,     0,     0,   -78,   -78,   -78,   -78,     0,     0,
       0,   114,     0,    16,   118,   119,   120,   121,   122,   -78,
     -78,   -78,     0,     0,     0,   123,   124,     0,   125,     0,
       0,     0,   126,   127,   128,   129,     0,     0,     0,     0,
       0,     0,   154,     0,     0,     0,     0,   130,   131,   132,
     118,   119,   120,   121,   122,     0,     0,     0,     0,     0,
       0,   123,   124,     0,   125,     0,     0,     0,   126,   127,
     128,   129,     0,   184,     0,   -79,   -79,   -79,   -79,   -79,
       0,     0,     0,   130,   131,   132,   -79,   -79,     0,   -79,
       0,     0,     0,   -79,   -79,   -79,   -79,     0,     0,     0,
       0,     0,     0,     0,   233,     0,     0,     0,   -79,   -79,
     -79,   -80,   -80,   -80,   -80,   -80,     0,     0,     0,     0,
       0,     0,   -80,   -80,     0,   -80,     0,     0,     0,   -80,
     -80,   -80,   -80,     0,     0,     0,     0,     0,    56,   -81,
     -81,   -81,   -81,   -81,   -80,   -80,   -80,     0,     0,     0,
     -81,   -81,     0,   -81,     0,     0,     0,   -81,   -81,   -81,
     -81,     0,     0,     0,   118,   119,   120,   121,   122,     0,
       0,     0,   -81,   -81,   -81,   123,   124,   175,   125,     0,
       0,     0,   126,   127,   128,   129,     0,     0,     0,   188,
       0,     0,     0,     0,     0,     0,     0,   130,   131,   132,
       0,    43,    44,    45,    46,    47,    48,    49,    50,   191,
      51,    52,    53,    43,    44,    45,    46,    47,    48,    49,
      50,   262,    51,    52,    53,     0,     0,     0,     0,     0,
       0,     0,     0,    43,    44,    45,    46,    47,    48,    49,
      50,     0,    51,    52,    53,    43,    44,    45,    46,    47,
      48,    49,    50,     0,    51,    52,    53,   138,   139,   140,
     141,   -94,   -94,     0,     0,   113,     0,     0,   142,     0,
       0,     0,     0,     0,     0,  -199,  -199,   313,     0,    16,
       0,     0,     0,   143,   144,   138,   139,   140,   141,   -94,
     -94,     0,     0,   183,     0,     0,   142,  -130,  -130,  -130,
    -130,     0,     0,  -200,  -200,   183,     0,    56,  -130,     0,
       0,   143,   144,     0,   138,   139,   140,   141,     0,    56,
       0,     0,     0,  -130,  -130,   142,   138,   139,   140,   141,
       0,   138,   139,   140,   141,     0,    16,   142,     0,     0,
     143,   144,   142,     0,     0,     0,     0,     0,    56,     0,
       0,     0,   143,   144,     0,     0,     0,   143,   144,    43,
      44,    45,    46,    47,    48,    49,    50,     0,    51,    52,
      53
};

static const yytype_int16 yycheck[] =
{
      31,    41,    16,    34,    32,    31,     6,    73,     6,    34,
       6,     6,    81,     7,     8,   246,   261,    31,    32,    11,
      58,    70,    71,    89,    18,     6,    20,    67,   258,    10,
     243,   244,   114,     3,   177,    84,    74,    31,    69,   182,
      70,    71,    56,    83,    84,    58,     4,    85,   293,    30,
      31,    32,    33,    34,    35,    36,    37,     6,    39,    40,
      41,    74,    93,    94,    58,    93,   148,    93,    62,    94,
      64,   284,    85,    83,   102,    88,   107,   108,     6,    93,
      94,   252,   107,   108,   314,    83,   114,    83,   102,    84,
     159,    91,     6,   306,    86,   325,    31,    32,    88,   113,
     114,    36,    83,   117,    88,   171,    41,   173,   133,   134,
      91,   137,   343,    74,    95,   155,    59,    60,   146,     6,
     148,    59,    60,   137,    53,    60,    74,    88,   299,    64,
     161,   145,   146,   304,   148,     6,   161,    58,   309,    58,
      88,   169,   208,   174,    76,    88,    83,   161,   188,   174,
      88,   191,   146,    74,    86,   169,    89,     6,    93,    84,
      95,    10,    97,   194,    85,   205,    86,    88,   257,   183,
      85,   106,   261,    85,    85,     6,    87,   217,   272,   273,
     194,    30,    31,    32,    33,    34,    35,    36,    37,    85,
      39,    40,    41,    86,    86,   235,     0,    83,    84,    85,
     194,     5,     6,     7,   293,     9,    89,    85,   222,    87,
      84,   237,   238,    44,    45,    46,    47,    48,    49,    50,
      51,    89,   262,   237,   238,   265,   257,    58,   317,    85,
     261,    87,    58,    58,    83,    84,    19,     6,    21,   279,
     175,    84,    91,   257,   238,   257,    95,   261,    52,   261,
      84,     6,    85,    84,    85,   295,    86,    88,    87,   271,
      87,     6,   293,    87,    74,   305,    76,    90,   203,   204,
      86,    83,   298,    87,    83,   315,    86,   303,    88,   293,
      12,   293,    87,     6,   298,   313,   317,     6,     7,   303,
       9,    10,    11,    86,    74,    76,    76,   337,    17,   313,
       6,    87,   333,   317,     6,   317,    86,    84,    88,    85,
      84,    30,    31,    32,    33,    34,    35,    36,    37,    84,
      39,    40,    41,     6,     7,    87,     9,    10,    11,    76,
      87,    87,    86,     2,    17,    30,    31,    32,    33,    34,
      35,    36,    37,    58,    39,    40,    41,    30,    31,    32,
      33,    34,    35,    36,    37,     6,    39,    40,    41,    10,
     267,    62,   267,   148,    83,   231,   194,   333,    87,   342,
     276,    76,    91,   145,    -1,   317,   303,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    39,    40,
      41,    -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    61,    62,    63,    64,    65,    -1,    91,    -1,
      -1,    -1,    -1,    72,    73,     6,    75,    -1,    -1,    10,
      79,    80,    81,    82,    -1,    -1,    -1,    78,    -1,    -1,
      89,    -1,    83,    -1,    -1,    94,    95,    96,    89,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    39,    40,
      41,    -1,    -1,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    44,    45,    46,    47,    48,    49,    50,    51,
      -1,    53,    -1,    -1,     6,    -1,    -1,    -1,    10,    -1,
      -1,    -1,    -1,    -1,    44,    45,    46,    47,    48,    49,
      50,    51,    83,    -1,    -1,    -1,     6,    88,    30,    31,
      32,    33,    34,    35,    36,    37,    88,    39,    40,    41,
      -1,    -1,    44,    45,    46,    47,    48,    49,    50,    51,
      30,    31,    32,    33,    34,    35,    36,    37,    88,    39,
      40,    41,    -1,    -1,    44,    45,    46,    47,    48,    49,
      50,    51,     6,    -1,    -1,    -1,    10,    -1,    -1,    -1,
      -1,    83,    -1,    -1,    -1,     6,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,     6,    39,    40,    41,    88,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    39,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    39,    40,    41,
      -1,    -1,    -1,    66,    67,    68,    69,    -1,    -1,    83,
      -1,    85,     6,    87,    77,    -1,    10,    -1,    -1,    -1,
      -1,    84,    85,    -1,     6,    -1,    87,    -1,    10,    92,
      93,    -1,    74,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    86,    39,    40,    41,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,
      -1,    -1,    44,    45,    46,    47,    48,    49,    50,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    83,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    83,    39,    40,    41,    44,    45,    46,    47,    48,
      49,    50,    51,    85,    -1,    -1,    88,    -1,    -1,    58,
      59,    60,    -1,    -1,    -1,    -1,    -1,    66,    67,    68,
      69,    70,    71,    -1,    -1,    74,    -1,    -1,    77,    76,
      -1,    -1,    -1,    -1,    83,    -1,    85,    -1,    -1,    88,
      -1,    -1,    -1,    92,    93,    44,    45,    46,    47,    48,
      49,    50,    51,    -1,    66,    67,    68,    69,    -1,    58,
      59,    60,    74,    -1,    -1,    77,    -1,    66,    67,    68,
      69,    70,    71,    -1,    -1,    74,    88,    -1,    77,    -1,
      92,    93,    -1,    -1,    83,    -1,    85,    -1,    -1,    88,
      -1,    -1,    -1,    92,    93,    44,    45,    46,    47,    48,
      49,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      44,    45,    46,    47,    48,    49,    50,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    74,    44,    45,    46,    47,
      48,    49,    50,    51,    -1,    -1,    85,    -1,    -1,    88,
      44,    45,    46,    47,    48,    49,    50,    51,    -1,    -1,
      -1,    85,    -1,    -1,    88,    44,    45,    46,    47,    48,
      49,    50,    51,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      88,    44,    45,    46,    47,    48,    49,    50,    51,    -1,
      -1,    -1,    86,    -1,    88,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    -1,    88,
      72,    73,    74,    75,    -1,    77,    -1,    79,    80,    81,
      82,    -1,    -1,    -1,    86,    88,    88,    -1,    -1,    -1,
      92,    93,    94,    95,    96,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    -1,    -1,    72,    73,    74,    75,
      -1,    77,    -1,    79,    80,    81,    82,    -1,    -1,    -1,
      -1,    -1,    88,    -1,    -1,    -1,    92,    93,    94,    95,
      96,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      -1,    -1,    72,    73,    -1,    75,    -1,    77,    -1,    79,
      80,    81,    82,    -1,    -1,    -1,    61,    62,    63,    64,
      65,    -1,    92,    93,    94,    95,    96,    72,    73,    -1,
      75,    -1,    -1,    -1,    79,    80,    81,    82,    -1,    -1,
      -1,    86,    -1,    88,    61,    62,    63,    64,    65,    94,
      95,    96,    -1,    -1,    -1,    72,    73,    -1,    75,    -1,
      -1,    -1,    79,    80,    81,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    -1,    -1,    -1,    -1,    94,    95,    96,
      61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    73,    -1,    75,    -1,    -1,    -1,    79,    80,
      81,    82,    -1,    84,    -1,    61,    62,    63,    64,    65,
      -1,    -1,    -1,    94,    95,    96,    72,    73,    -1,    75,
      -1,    -1,    -1,    79,    80,    81,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,    94,    95,
      96,    61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    -1,    75,    -1,    -1,    -1,    79,
      80,    81,    82,    -1,    -1,    -1,    -1,    -1,    88,    61,
      62,    63,    64,    65,    94,    95,    96,    -1,    -1,    -1,
      72,    73,    -1,    75,    -1,    -1,    -1,    79,    80,    81,
      82,    -1,    -1,    -1,    61,    62,    63,    64,    65,    -1,
      -1,    -1,    94,    95,    96,    72,    73,     6,    75,    -1,
      -1,    -1,    79,    80,    81,    82,    -1,    -1,    -1,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    95,    96,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,     6,
      39,    40,    41,    30,    31,    32,    33,    34,    35,    36,
      37,     6,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    39,    40,    41,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    39,    40,    41,    66,    67,    68,
      69,    70,    71,    -1,    -1,    74,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    85,    86,    -1,    88,
      -1,    -1,    -1,    92,    93,    66,    67,    68,    69,    70,
      71,    -1,    -1,    74,    -1,    -1,    77,    66,    67,    68,
      69,    -1,    -1,    84,    85,    74,    -1,    88,    77,    -1,
      -1,    92,    93,    -1,    66,    67,    68,    69,    -1,    88,
      -1,    -1,    -1,    92,    93,    77,    66,    67,    68,    69,
      -1,    66,    67,    68,    69,    -1,    88,    77,    -1,    -1,
      92,    93,    77,    -1,    -1,    -1,    -1,    -1,    88,    -1,
      -1,    -1,    92,    93,    -1,    -1,    -1,    92,    93,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    39,    40,
      41
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    98,     4,     0,     5,     6,     7,     9,    52,
      99,   116,   128,   129,    83,   130,    88,   106,    83,   128,
      83,   128,     6,    44,    45,    46,    47,    48,    49,    50,
      51,    58,    74,    85,    88,   100,   105,   111,   112,   113,
     148,     6,     6,    30,    31,    32,    33,    34,    35,    36,
      37,    39,    40,    41,   149,   150,    88,   101,   108,   109,
     128,   100,   102,   103,   128,   100,    53,     6,    10,    83,
     110,   114,   121,   122,   128,   138,   139,   148,   149,     6,
     110,   148,   149,     6,     6,    10,    78,    89,   121,   122,
     149,    81,   148,    58,    88,   106,   148,    83,    89,   149,
      84,   109,    58,   148,    84,   103,   128,    85,    58,    84,
     128,   148,    86,    74,    86,   106,   121,    85,    61,    62,
      63,    64,    65,    72,    73,    75,    79,    80,    81,    82,
      94,    95,    96,   147,   147,    70,    71,   127,    66,    67,
      68,    69,    77,    92,    93,   140,    86,   104,    86,   104,
     106,   106,    89,    89,    89,     6,   110,   121,   138,   148,
     149,    88,   148,    84,   131,   132,   148,    89,   110,    58,
     121,   122,   121,   122,    58,     6,   117,   118,   119,   149,
     110,   115,   118,    74,    84,   149,   122,   122,     6,   138,
     149,     6,   139,    87,   107,   110,   128,   149,   115,   106,
     104,   149,    84,    84,    85,     6,   110,   121,   122,    53,
     148,    87,   119,    87,   149,   106,   106,     6,    85,    87,
     114,   149,    85,    87,    87,    90,    87,    86,   148,   148,
     106,    86,   106,    90,    87,     6,    10,    11,    17,    91,
      99,   121,   123,   124,   125,   133,   134,   135,   141,   145,
     146,   151,    86,     6,   117,    59,    60,    83,   106,   126,
     140,    83,     6,   137,   138,     6,    74,   128,   138,   142,
     143,    83,   127,   127,    87,   145,    12,   133,    87,     6,
      10,    95,   120,   121,   124,   138,   149,   151,   152,   153,
     154,    59,    60,    83,   126,     6,   152,   106,    76,    86,
     106,   112,   113,    76,    86,     6,   124,   125,   125,    86,
     135,   136,    87,    86,   106,     6,    84,    85,   152,   106,
      84,   138,   133,   143,   133,   106,    84,   133,   110,   106,
     154,    84,    87,    76,    87,    87,    87,     6,   121,   123,
     144,   106,    86,   134,    87
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    97,    98,    98,    98,    98,    99,    99,    99,    99,
      99,    99,   100,   100,   100,   101,   101,   102,   102,   102,
     102,   103,   103,   103,   103,   103,   103,   104,   104,   104,
     104,   104,   105,   105,   105,   105,   105,   106,   106,   107,
     107,   107,   107,   108,   108,   109,   109,   109,   110,   110,
     111,   111,   111,   111,   111,   112,   112,   112,   113,   113,
     113,   114,   114,   114,   114,   114,   115,   115,   116,   117,
     117,   118,   118,   119,   119,   120,   121,   121,   122,   122,
     122,   122,   122,   123,   123,   123,   123,   124,   124,   124,
     125,   125,   126,   126,   126,   127,   127,   128,   128,   128,
     128,   129,   129,   130,   130,   130,   131,   131,   132,   132,
     132,   133,   133,   134,   134,   135,   135,   136,   136,   137,
     137,   137,   137,   138,   138,   138,   138,   139,   139,   139,
     139,   140,   140,   140,   140,   140,   140,   140,   141,   141,
     142,   142,   142,   143,   143,   144,   144,   145,   145,   145,
     145,   145,   145,   145,   145,   146,   146,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   150,   150,   151,   152,   152,   153,   153,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     3,     3,     2,     4,
       4,     4,     1,     1,     1,     1,     0,     1,     2,     2,
       2,     3,     3,     4,     4,     3,     3,     3,     3,     4,
       3,     2,     3,     3,     2,     3,     2,     3,     4,     2,
       2,     2,     3,     2,     1,     3,     2,     4,     3,     1,
       3,     3,     3,     4,     1,     2,     5,     3,     2,     2,
       3,     1,     1,     1,     1,     4,     1,     1,     6,     0,
       1,     2,     1,     2,     5,     4,     3,     3,     1,     1,
       2,     1,     3,     2,     2,     3,     3,     3,     3,     4,
       2,     3,     2,     3,     0,     1,     1,     3,     1,     2,
       4,    10,     9,     0,     4,     5,     1,     0,     4,     2,
       3,     1,     0,     2,     1,     5,     3,     3,     1,     3,
       1,     1,     2,     3,     3,     4,     3,     0,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     9,     5,
       2,     2,     1,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     5,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     1,     0,     3,     1,     1,     1,
       2,     1,     1,     2,     3,     1,     1,     1,     1
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
  case 2: /* prog: PACKAGE IMPORTS  */
#line 30 "lab.yacc"
                      {printf("Find package and import\n");}
#line 1893 "y.tab.c"
    break;

  case 9: /* variables: VAR '(' var_definition ')'  */
#line 40 "lab.yacc"
                                             {printf("varblock\n");}
#line 1899 "y.tab.c"
    break;

  case 54: /* simple_definition: type  */
#line 110 "lab.yacc"
                                       {printf("type def\n");}
#line 1905 "y.tab.c"
    break;

  case 55: /* typeless_def: PEQ data_list  */
#line 113 "lab.yacc"
                            {printf("typeless definition\n");}
#line 1911 "y.tab.c"
    break;

  case 77: /* expression: expression_args operator expression_args  */
#line 152 "lab.yacc"
                                                                   {printf("expression\n");}
#line 1917 "y.tab.c"
    break;

  case 101: /* body: FUNCTION return_value id '(' parameters ')' type '{' statements '}'  */
#line 189 "lab.yacc"
                                                                          {printf("Find function defenition\n");}
#line 1923 "y.tab.c"
    break;

  case 102: /* body: FUNCTION return_value id '(' parameters ')' '{' statements '}'  */
#line 190 "lab.yacc"
                                                                {printf("Find function defenition\n");}
#line 1929 "y.tab.c"
    break;

  case 115: /* if_block: IF conditions '{' statements '}'  */
#line 219 "lab.yacc"
                                           {printf("ifblock!\n");}
#line 1935 "y.tab.c"
    break;

  case 193: /* methods: METHOD '(' method_arguments ')'  */
#line 372 "lab.yacc"
                                         {printf("Method match\n");}
#line 1941 "y.tab.c"
    break;


#line 1945 "y.tab.c"

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

#line 396 "lab.yacc"


int main(int argc, char *argv[])
{
    yyin = fopen(argv[1], "r");
	yyparse();
        fclose(yyin);
	if(error_ == 0)
		printf("OK\n");
        
}
