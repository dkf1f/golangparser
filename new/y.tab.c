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
#line 1 "lab2.yacc"

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
    IMAGINARY_LIT = 297,           /* IMAGINARY_LIT  */
    CONST_INT_ERR = 298,           /* CONST_INT_ERR  */
    CONST_BIN_ERR = 299,           /* CONST_BIN_ERR  */
    INT = 300,                     /* INT  */
    STRING = 301,                  /* STRING  */
    COMPLEXTYPE = 302,             /* COMPLEXTYPE  */
    BYTE = 303,                    /* BYTE  */
    FLOAT = 304,                   /* FLOAT  */
    RUNE = 305,                    /* RUNE  */
    UINT = 306,                    /* UINT  */
    BOOL_TYPE = 307,               /* BOOL_TYPE  */
    TYPE = 308,                    /* TYPE  */
    STRUCT = 309,                  /* STRUCT  */
    UINTPTR = 310,                 /* UINTPTR  */
    ERRORTYPE = 311,               /* ERRORTYPE  */
    ANYTYPE = 312,                 /* ANYTYPE  */
    COMPARABLE = 313,              /* COMPARABLE  */
    ADDEQ = 314,                   /* ADDEQ  */
    DECEQ = 315,                   /* DECEQ  */
    OREQ = 316,                    /* OREQ  */
    XOREQ = 317,                   /* XOREQ  */
    MULEQ = 318,                   /* MULEQ  */
    DIVEQ = 319,                   /* DIVEQ  */
    MODEQ = 320,                   /* MODEQ  */
    LSHIFTEQ = 321,                /* LSHIFTEQ  */
    RSHIFTEQ = 322,                /* RSHIFTEQ  */
    ANDEQ = 323,                   /* ANDEQ  */
    ANDXOREQ = 324,                /* ANDXOREQ  */
    EQ = 325,                      /* EQ  */
    INC = 326,                     /* INC  */
    DEC = 327,                     /* DEC  */
    EQUAL = 328,                   /* EQUAL  */
    NOTEQUAL = 329,                /* NOTEQUAL  */
    GREATEROREQUAL = 330,          /* GREATEROREQUAL  */
    LESSOREQUAL = 331,             /* LESSOREQUAL  */
    AND = 332,                     /* AND  */
    OR = 333,                      /* OR  */
    LSHIFT = 334,                  /* LSHIFT  */
    RSHIFT = 335,                  /* RSHIFT  */
    PEQ = 336,                     /* PEQ  */
    XOR = 337,                     /* XOR  */
    SEMICOLON = 338,               /* SEMICOLON  */
    AMP_EXP = 339,                 /* AMP_EXP  */
    POINT = 340,                   /* POINT  */
    POINTER = 341                  /* POINTER  */
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
#define IMAGINARY_LIT 297
#define CONST_INT_ERR 298
#define CONST_BIN_ERR 299
#define INT 300
#define STRING 301
#define COMPLEXTYPE 302
#define BYTE 303
#define FLOAT 304
#define RUNE 305
#define UINT 306
#define BOOL_TYPE 307
#define TYPE 308
#define STRUCT 309
#define UINTPTR 310
#define ERRORTYPE 311
#define ANYTYPE 312
#define COMPARABLE 313
#define ADDEQ 314
#define DECEQ 315
#define OREQ 316
#define XOREQ 317
#define MULEQ 318
#define DIVEQ 319
#define MODEQ 320
#define LSHIFTEQ 321
#define RSHIFTEQ 322
#define ANDEQ 323
#define ANDXOREQ 324
#define EQ 325
#define INC 326
#define DEC 327
#define EQUAL 328
#define NOTEQUAL 329
#define GREATEROREQUAL 330
#define LESSOREQUAL 331
#define AND 332
#define OR 333
#define LSHIFT 334
#define RSHIFT 335
#define PEQ 336
#define XOR 337
#define SEMICOLON 338
#define AMP_EXP 339
#define POINT 340
#define POINTER 341

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
  YYSYMBOL_IMAGINARY_LIT = 42,             /* IMAGINARY_LIT  */
  YYSYMBOL_CONST_INT_ERR = 43,             /* CONST_INT_ERR  */
  YYSYMBOL_CONST_BIN_ERR = 44,             /* CONST_BIN_ERR  */
  YYSYMBOL_INT = 45,                       /* INT  */
  YYSYMBOL_STRING = 46,                    /* STRING  */
  YYSYMBOL_COMPLEXTYPE = 47,               /* COMPLEXTYPE  */
  YYSYMBOL_BYTE = 48,                      /* BYTE  */
  YYSYMBOL_FLOAT = 49,                     /* FLOAT  */
  YYSYMBOL_RUNE = 50,                      /* RUNE  */
  YYSYMBOL_UINT = 51,                      /* UINT  */
  YYSYMBOL_BOOL_TYPE = 52,                 /* BOOL_TYPE  */
  YYSYMBOL_TYPE = 53,                      /* TYPE  */
  YYSYMBOL_STRUCT = 54,                    /* STRUCT  */
  YYSYMBOL_UINTPTR = 55,                   /* UINTPTR  */
  YYSYMBOL_ERRORTYPE = 56,                 /* ERRORTYPE  */
  YYSYMBOL_ANYTYPE = 57,                   /* ANYTYPE  */
  YYSYMBOL_COMPARABLE = 58,                /* COMPARABLE  */
  YYSYMBOL_ADDEQ = 59,                     /* ADDEQ  */
  YYSYMBOL_DECEQ = 60,                     /* DECEQ  */
  YYSYMBOL_OREQ = 61,                      /* OREQ  */
  YYSYMBOL_XOREQ = 62,                     /* XOREQ  */
  YYSYMBOL_MULEQ = 63,                     /* MULEQ  */
  YYSYMBOL_DIVEQ = 64,                     /* DIVEQ  */
  YYSYMBOL_MODEQ = 65,                     /* MODEQ  */
  YYSYMBOL_LSHIFTEQ = 66,                  /* LSHIFTEQ  */
  YYSYMBOL_RSHIFTEQ = 67,                  /* RSHIFTEQ  */
  YYSYMBOL_ANDEQ = 68,                     /* ANDEQ  */
  YYSYMBOL_ANDXOREQ = 69,                  /* ANDXOREQ  */
  YYSYMBOL_EQ = 70,                        /* EQ  */
  YYSYMBOL_INC = 71,                       /* INC  */
  YYSYMBOL_DEC = 72,                       /* DEC  */
  YYSYMBOL_EQUAL = 73,                     /* EQUAL  */
  YYSYMBOL_NOTEQUAL = 74,                  /* NOTEQUAL  */
  YYSYMBOL_GREATEROREQUAL = 75,            /* GREATEROREQUAL  */
  YYSYMBOL_LESSOREQUAL = 76,               /* LESSOREQUAL  */
  YYSYMBOL_AND = 77,                       /* AND  */
  YYSYMBOL_OR = 78,                        /* OR  */
  YYSYMBOL_LSHIFT = 79,                    /* LSHIFT  */
  YYSYMBOL_RSHIFT = 80,                    /* RSHIFT  */
  YYSYMBOL_PEQ = 81,                       /* PEQ  */
  YYSYMBOL_XOR = 82,                       /* XOR  */
  YYSYMBOL_SEMICOLON = 83,                 /* SEMICOLON  */
  YYSYMBOL_AMP_EXP = 84,                   /* AMP_EXP  */
  YYSYMBOL_POINT = 85,                     /* POINT  */
  YYSYMBOL_POINTER = 86,                   /* POINTER  */
  YYSYMBOL_87_ = 87,                       /* '{'  */
  YYSYMBOL_88_ = 88,                       /* '}'  */
  YYSYMBOL_89_ = 89,                       /* ':'  */
  YYSYMBOL_90_ = 90,                       /* '.'  */
  YYSYMBOL_91_ = 91,                       /* '('  */
  YYSYMBOL_92_ = 92,                       /* ')'  */
  YYSYMBOL_93_ = 93,                       /* '['  */
  YYSYMBOL_94_ = 94,                       /* ']'  */
  YYSYMBOL_95_ = 95,                       /* ','  */
  YYSYMBOL_96_ = 96,                       /* '*'  */
  YYSYMBOL_97_ = 97,                       /* '/'  */
  YYSYMBOL_98_ = 98,                       /* '%'  */
  YYSYMBOL_99_ = 99,                       /* '&'  */
  YYSYMBOL_100_ = 100,                     /* '|'  */
  YYSYMBOL_101_ = 101,                     /* '+'  */
  YYSYMBOL_102_ = 102,                     /* '-'  */
  YYSYMBOL_103_ = 103,                     /* '<'  */
  YYSYMBOL_104_ = 104,                     /* '>'  */
  YYSYMBOL_105_ = 105,                     /* '!'  */
  YYSYMBOL_106_ = 106,                     /* '~'  */
  YYSYMBOL_YYACCEPT = 107,                 /* $accept  */
  YYSYMBOL_prog = 108,                     /* prog  */
  YYSYMBOL_TopLevelDecl = 109,             /* TopLevelDecl  */
  YYSYMBOL_FunctionDecl = 110,             /* FunctionDecl  */
  YYSYMBOL_FunctionName = 111,             /* FunctionName  */
  YYSYMBOL_MethodDecl = 112,               /* MethodDecl  */
  YYSYMBOL_Receiver = 113,                 /* Receiver  */
  YYSYMBOL_Statement = 114,                /* Statement  */
  YYSYMBOL_ForStmt = 115,                  /* ForStmt  */
  YYSYMBOL_Condition = 116,                /* Condition  */
  YYSYMBOL_InitStmt = 117,                 /* InitStmt  */
  YYSYMBOL_PostStmt = 118,                 /* PostStmt  */
  YYSYMBOL_ForClause = 119,                /* ForClause  */
  YYSYMBOL_RangeClause = 120,              /* RangeClause  */
  YYSYMBOL_DeferStmt = 121,                /* DeferStmt  */
  YYSYMBOL_Declaration = 122,              /* Declaration  */
  YYSYMBOL_GoStmt = 123,                   /* GoStmt  */
  YYSYMBOL_ReturnStmt = 124,               /* ReturnStmt  */
  YYSYMBOL_BreakStmt = 125,                /* BreakStmt  */
  YYSYMBOL_ContinueStmt = 126,             /* ContinueStmt  */
  YYSYMBOL_GotoStmt = 127,                 /* GotoStmt  */
  YYSYMBOL_Label = 128,                    /* Label  */
  YYSYMBOL_SelectStmt = 129,               /* SelectStmt  */
  YYSYMBOL_CommClauseList = 130,           /* CommClauseList  */
  YYSYMBOL_CommClause = 131,               /* CommClause  */
  YYSYMBOL_CommCase = 132,                 /* CommCase  */
  YYSYMBOL_RecvStmt = 133,                 /* RecvStmt  */
  YYSYMBOL_RecvExpr = 134,                 /* RecvExpr  */
  YYSYMBOL_IfStmt = 135,                   /* IfStmt  */
  YYSYMBOL_SwitchStmt = 136,               /* SwitchStmt  */
  YYSYMBOL_ExprSwitchStmt = 137,           /* ExprSwitchStmt  */
  YYSYMBOL_ExprCaseClauseList = 138,       /* ExprCaseClauseList  */
  YYSYMBOL_ExprCaseClause = 139,           /* ExprCaseClause  */
  YYSYMBOL_ExprSwitchCase = 140,           /* ExprSwitchCase  */
  YYSYMBOL_ConstDecl = 141,                /* ConstDecl  */
  YYSYMBOL_ConstSpecList = 142,            /* ConstSpecList  */
  YYSYMBOL_ConstSpec = 143,                /* ConstSpec  */
  YYSYMBOL_ConstExpr = 144,                /* ConstExpr  */
  YYSYMBOL_TypeDecl = 145,                 /* TypeDecl  */
  YYSYMBOL_TypeSpecList = 146,             /* TypeSpecList  */
  YYSYMBOL_TypeSpec = 147,                 /* TypeSpec  */
  YYSYMBOL_AliasDecl = 148,                /* AliasDecl  */
  YYSYMBOL_TypeDef = 149,                  /* TypeDef  */
  YYSYMBOL_TypeParameters = 150,           /* TypeParameters  */
  YYSYMBOL_TypeParamList = 151,            /* TypeParamList  */
  YYSYMBOL_TypeParamDecl = 152,            /* TypeParamDecl  */
  YYSYMBOL_TypeConstraint = 153,           /* TypeConstraint  */
  YYSYMBOL_VarDecl = 154,                  /* VarDecl  */
  YYSYMBOL_VarSpecList = 155,              /* VarSpecList  */
  YYSYMBOL_VarSpec = 156,                  /* VarSpec  */
  YYSYMBOL_SimpleStmt = 157,               /* SimpleStmt  */
  YYSYMBOL_EmptyStatement = 158,           /* EmptyStatement  */
  YYSYMBOL_SendStmt = 159,                 /* SendStmt  */
  YYSYMBOL_Channel = 160,                  /* Channel  */
  YYSYMBOL_IncDecStmt = 161,               /* IncDecStmt  */
  YYSYMBOL_Assignment = 162,               /* Assignment  */
  YYSYMBOL_Expression = 163,               /* Expression  */
  YYSYMBOL_binary_op = 164,                /* binary_op  */
  YYSYMBOL_mul_op = 165,                   /* mul_op  */
  YYSYMBOL_add_op = 166,                   /* add_op  */
  YYSYMBOL_rel_op = 167,                   /* rel_op  */
  YYSYMBOL_UnaryExpr = 168,                /* UnaryExpr  */
  YYSYMBOL_PrimaryExpr = 169,              /* PrimaryExpr  */
  YYSYMBOL_Conversion = 170,               /* Conversion  */
  YYSYMBOL_MethodExpr = 171,               /* MethodExpr  */
  YYSYMBOL_ReceiverType = 172,             /* ReceiverType  */
  YYSYMBOL_MethodName = 173,               /* MethodName  */
  YYSYMBOL_Operand = 174,                  /* Operand  */
  YYSYMBOL_Literal = 175,                  /* Literal  */
  YYSYMBOL_BasicLit = 176,                 /* BasicLit  */
  YYSYMBOL_CompositeLit = 177,             /* CompositeLit  */
  YYSYMBOL_LiteralType = 178,              /* LiteralType  */
  YYSYMBOL_LiteralValue = 179,             /* LiteralValue  */
  YYSYMBOL_ElementList = 180,              /* ElementList  */
  YYSYMBOL_KeyedElement = 181,             /* KeyedElement  */
  YYSYMBOL_Key = 182,                      /* Key  */
  YYSYMBOL_FieldName = 183,                /* FieldName  */
  YYSYMBOL_Element = 184,                  /* Element  */
  YYSYMBOL_OperandName = 185,              /* OperandName  */
  YYSYMBOL_int_lit = 186,                  /* int_lit  */
  YYSYMBOL_imaginary_lit = 187,            /* imaginary_lit  */
  YYSYMBOL_float_lit = 188,                /* float_lit  */
  YYSYMBOL_FunctionLit = 189,              /* FunctionLit  */
  YYSYMBOL_Block = 190,                    /* Block  */
  YYSYMBOL_Statements = 191,               /* Statements  */
  YYSYMBOL_Selector = 192,                 /* Selector  */
  YYSYMBOL_Index = 193,                    /* Index  */
  YYSYMBOL_Slice = 194,                    /* Slice  */
  YYSYMBOL_TypeAssertion = 195,            /* TypeAssertion  */
  YYSYMBOL_Arguments = 196,                /* Arguments  */
  YYSYMBOL_ExpressionList = 197,           /* ExpressionList  */
  YYSYMBOL_Type = 198,                     /* Type  */
  YYSYMBOL_TypeArgs = 199,                 /* TypeArgs  */
  YYSYMBOL_TypeList = 200,                 /* TypeList  */
  YYSYMBOL_TypeName = 201,                 /* TypeName  */
  YYSYMBOL_TypeLit = 202,                  /* TypeLit  */
  YYSYMBOL_ArrayType = 203,                /* ArrayType  */
  YYSYMBOL_ArrayLength = 204,              /* ArrayLength  */
  YYSYMBOL_ElementType = 205,              /* ElementType  */
  YYSYMBOL_StructType = 206,               /* StructType  */
  YYSYMBOL_DeclList = 207,                 /* DeclList  */
  YYSYMBOL_FieldDecl = 208,                /* FieldDecl  */
  YYSYMBOL_Tag = 209,                      /* Tag  */
  YYSYMBOL_EmbeddedField = 210,            /* EmbeddedField  */
  YYSYMBOL_PointerType = 211,              /* PointerType  */
  YYSYMBOL_FunctionType = 212,             /* FunctionType  */
  YYSYMBOL_Signature = 213,                /* Signature  */
  YYSYMBOL_Parameters = 214,               /* Parameters  */
  YYSYMBOL_ParameterList = 215,            /* ParameterList  */
  YYSYMBOL_ParameterDecl = 216,            /* ParameterDecl  */
  YYSYMBOL_IdentifierList = 217,           /* IdentifierList  */
  YYSYMBOL_InterfaceType = 218,            /* InterfaceType  */
  YYSYMBOL_InterfaceElemList = 219,        /* InterfaceElemList  */
  YYSYMBOL_InterfaceElem = 220,            /* InterfaceElem  */
  YYSYMBOL_MethodElem = 221,               /* MethodElem  */
  YYSYMBOL_TypeElem = 222,                 /* TypeElem  */
  YYSYMBOL_TypeTerm = 223,                 /* TypeTerm  */
  YYSYMBOL_SliceType = 224,                /* SliceType  */
  YYSYMBOL_MapType = 225,                  /* MapType  */
  YYSYMBOL_ChannelType = 226               /* ChannelType  */
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
#define YYLAST   3059

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  107
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  120
/* YYNRULES -- Number of rules.  */
#define YYNRULES  320
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  520

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   341


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
       2,     2,     2,   105,     2,     2,     2,    98,    99,     2,
      91,    92,    96,   101,    95,   102,    90,    97,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    89,     2,
     103,     2,   104,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    93,     2,    94,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    87,   100,    88,   106,     2,     2,     2,
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
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    28,    28,    29,    32,    33,    34,    36,    37,    38,
      39,    40,    42,    43,    45,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    64,    65,
      66,    67,    69,    70,    71,    74,    75,    76,    77,    78,
      79,    80,    84,    85,    86,    88,    90,    91,    92,    94,
      96,    97,    99,   100,   102,   103,   105,   106,   108,   110,
     111,   113,   114,   115,   116,   117,   118,   120,   121,   122,
     124,   127,   128,   129,   130,   131,   132,   137,   141,   142,
     143,   144,   146,   147,   149,   150,   150,   165,   166,   167,
     169,   170,   171,   172,   173,   174,   177,   178,   179,   181,
     182,   183,   183,   185,   187,   188,   190,   191,   192,   193,
     194,   197,   198,   199,   201,   202,   203,   204,   205,   207,
     208,   209,   210,   211,   215,   217,   218,   220,   221,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   238,   239,   241,   242,   243,   244,   245,
     247,   248,   249,   250,   251,   252,   253,   255,   256,   257,
     258,   260,   261,   262,   263,   264,   265,   268,   269,   270,
     271,   272,   273,   274,   275,   278,   279,   280,   281,   282,
     283,   284,   285,   287,   288,   290,   291,   292,   294,   295,
     297,   299,   300,   301,   303,   304,   305,   306,   307,   308,
     309,   311,   312,   313,   314,   315,   316,   317,   318,   320,
     321,   322,   324,   325,   327,   328,   330,   331,   332,   334,
     336,   337,   339,   340,   342,   343,   344,   345,   348,   349,
     350,   353,   355,   357,   358,   361,   363,   364,   366,   367,
     368,   369,   370,   371,   374,   377,   378,   379,   380,   381,
     382,   383,   384,   386,   387,   389,   390,   391,   392,   394,
     395,   397,   398,   400,   401,   403,   404,   405,   406,   407,
     408,   409,   410,   413,   414,   415,   418,   419,   421,   422,
     424,   425,   426,   427,   428,   430,   431,   432,   433,   436,
     440,   442,   443,   444,   446,   447,   448,   451,   452,   454,
     455,   456,   457,   460,   461,   464,   465,   467,   468,   470,
     471,   473,   475,   476,   478,   479,   483,   486,   489,   490,
     491
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
  "DECIMAL_FLOAT_LIT", "HEX_FLOAT_LIT", "RUNE_LIT", "IMAGINARY_LIT",
  "CONST_INT_ERR", "CONST_BIN_ERR", "INT", "STRING", "COMPLEXTYPE", "BYTE",
  "FLOAT", "RUNE", "UINT", "BOOL_TYPE", "TYPE", "STRUCT", "UINTPTR",
  "ERRORTYPE", "ANYTYPE", "COMPARABLE", "ADDEQ", "DECEQ", "OREQ", "XOREQ",
  "MULEQ", "DIVEQ", "MODEQ", "LSHIFTEQ", "RSHIFTEQ", "ANDEQ", "ANDXOREQ",
  "EQ", "INC", "DEC", "EQUAL", "NOTEQUAL", "GREATEROREQUAL", "LESSOREQUAL",
  "AND", "OR", "LSHIFT", "RSHIFT", "PEQ", "XOR", "SEMICOLON", "AMP_EXP",
  "POINT", "POINTER", "'{'", "'}'", "':'", "'.'", "'('", "')'", "'['",
  "']'", "','", "'*'", "'/'", "'%'", "'&'", "'|'", "'+'", "'-'", "'<'",
  "'>'", "'!'", "'~'", "$accept", "prog", "TopLevelDecl", "FunctionDecl",
  "FunctionName", "MethodDecl", "Receiver", "Statement", "ForStmt",
  "Condition", "InitStmt", "PostStmt", "ForClause", "RangeClause",
  "DeferStmt", "Declaration", "GoStmt", "ReturnStmt", "BreakStmt",
  "ContinueStmt", "GotoStmt", "Label", "SelectStmt", "CommClauseList",
  "CommClause", "CommCase", "RecvStmt", "RecvExpr", "IfStmt", "SwitchStmt",
  "ExprSwitchStmt", "ExprCaseClauseList", "ExprCaseClause",
  "ExprSwitchCase", "ConstDecl", "ConstSpecList", "ConstSpec", "ConstExpr",
  "TypeDecl", "TypeSpecList", "TypeSpec", "AliasDecl", "TypeDef",
  "TypeParameters", "TypeParamList", "TypeParamDecl", "TypeConstraint",
  "VarDecl", "VarSpecList", "VarSpec", "SimpleStmt", "EmptyStatement",
  "SendStmt", "Channel", "IncDecStmt", "Assignment", "Expression",
  "binary_op", "mul_op", "add_op", "rel_op", "UnaryExpr", "PrimaryExpr",
  "Conversion", "MethodExpr", "ReceiverType", "MethodName", "Operand",
  "Literal", "BasicLit", "CompositeLit", "LiteralType", "LiteralValue",
  "ElementList", "KeyedElement", "Key", "FieldName", "Element",
  "OperandName", "int_lit", "imaginary_lit", "float_lit", "FunctionLit",
  "Block", "Statements", "Selector", "Index", "Slice", "TypeAssertion",
  "Arguments", "ExpressionList", "Type", "TypeArgs", "TypeList",
  "TypeName", "TypeLit", "ArrayType", "ArrayLength", "ElementType",
  "StructType", "DeclList", "FieldDecl", "Tag", "EmbeddedField",
  "PointerType", "FunctionType", "Signature", "Parameters",
  "ParameterList", "ParameterDecl", "IdentifierList", "InterfaceType",
  "InterfaceElemList", "InterfaceElem", "MethodElem", "TypeElem",
  "TypeTerm", "SliceType", "MapType", "ChannelType", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-426)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-304)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      28,    31,   161,  -426,  -426,    23,    32,    35,    36,  -426,
    -426,  -426,  -426,  -426,  -426,  -426,  -426,     8,    76,    34,
    -426,   -31,    14,  -426,   328,    26,  -426,   550,   696,    27,
    -426,  -426,  -426,   411,  -426,     3,   -27,   227,    70,   -10,
      10,   466,  -426,   -10,    70,  -426,     9,    70,   -10,    47,
      56,    88,   565,    94,  2367,   166,   411,  1353,   411,   127,
     107,  -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,
    -426,   113,    70,  2367,  -426,   141,   411,  1436,   411,  -426,
    -426,   126,   216,  -426,  -426,   145,    45,   411,  -426,   144,
     147,    57,    10,  1105,  -426,    98,  -426,  -426,    10,  -426,
    -426,  -426,  -426,   233,   411,    48,   768,  -426,  -426,    11,
     -10,   150,  -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,
    -426,  -426,  -426,  2367,  2450,  2367,  1232,  2367,  2367,  2367,
    2367,  2367,  2731,  -426,    83,  -426,  -426,   153,  -426,  -426,
    -426,  -426,   157,  -426,  -426,  -426,  -426,  -426,  -426,   154,
      64,   160,   175,   176,   177,   411,   173,   411,  2955,   178,
    -426,  2367,   411,  -426,  -426,  -426,  -426,  2367,  -426,    90,
    -426,  -426,  -426,  -426,  -426,  -426,  -426,    70,   411,  -426,
    -426,  -426,   170,  -426,  2488,  1474,  -426,  1194,   265,   186,
    2367,  2367,   265,   265,  2367,  -426,  -426,  -426,  -426,  -426,
    -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,
    -426,   188,  -426,  -426,  2535,  -426,   973,   863,   -15,   114,
    -426,  -426,   181,    96,  -426,   191,    86,  -426,  -426,   565,
    -426,  -426,   233,   107,   192,    19,   244,   411,    10,   276,
    -426,  -426,  2763,    73,   205,  -426,   129,  -426,  -426,  -426,
    -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,
    -426,  2367,  -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,
    -426,  2367,  -426,  -426,  -426,    41,  1557,  1640,  -426,  -426,
    -426,  -426,  -426,    34,  1315,  -426,  1678,   213,  -426,  -426,
    -426,   411,  -426,   209,   131,  -426,  -426,  -426,    57,   222,
    2098,   187,   223,  2569,  2367,  1761,    10,   231,    10,    10,
    -426,  2603,  -426,   969,   -14,  -426,  -426,    20,  -426,  2955,
    -426,  -426,  2955,  2367,  -426,  -426,  -426,  -426,  2367,  2367,
    2367,  2367,  2367,  2367,  2367,  2367,  2367,  2367,  2367,  2367,
    2367,  2367,   411,  -426,  -426,  -426,  -426,   107,  -426,  -426,
    -426,  -426,  -426,   244,  -426,  -426,  -426,   411,  -426,  2955,
    -426,   411,  -426,   -35,   132,  1799,  2635,  -426,    69,  -426,
    2795,   221,   -23,   224,   228,  -426,  -426,  -426,   229,  -426,
     411,  -426,   230,  -426,  2367,   310,  2367,  -426,   237,   187,
     238,  1882,   187,  2955,  2488,   246,  2955,  -426,  1920,  -426,
    -426,  2004,  2042,  2488,  -426,  -426,    74,  -426,   242,  2955,
    -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,
    -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,   245,   247,
    -426,   248,   251,  -426,  2125,  -426,  2667,  2208,  -426,   250,
    -426,   257,  2246,  2329,  -426,  -426,  -426,  2827,    68,  -426,
    -426,  -426,  1105,   187,  2859,   258,  -426,  -426,  2488,  2488,
     253,  2367,  2367,  -426,  -426,  -426,  1530,   278,   268,  -426,
    -426,  1105,  -426,  -426,  -426,  -426,  -426,   261,  2367,  -426,
    -426,  2699,  -426,  -426,  -426,  2955,  -426,  -426,   347,  -426,
    -426,  1105,   272,   187,  -426,  -426,  -426,  2488,  2955,  2955,
    2367,  2367,  1105,  -426,  2891,  2367,  -426,    68,  -426,   275,
    -426,  -426,  2955,  -426,  -426,  2923,  -426,  -426,  -426,  -426
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     0,     0,     2,     1,     0,     0,     0,     0,     3,
       5,     6,     4,    46,    47,    48,    11,     0,     0,     0,
      13,   303,     0,   111,     0,     0,    87,    93,     0,     0,
      96,   101,   102,     0,   295,     0,   298,   301,     0,     0,
       9,   292,   187,     0,     0,   113,     0,   115,     0,   263,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   116,
     256,   255,   265,   267,   266,   268,   269,   270,   271,   272,
      89,     0,    91,     0,    92,     0,     0,     0,     0,   104,
      98,     0,   100,   302,   294,     0,     0,     0,   300,     0,
     108,     0,    10,   124,     8,     0,   293,   291,     0,   304,
     112,   114,   290,     0,     0,     0,     0,   275,   318,     0,
       0,   222,   227,   198,   199,   200,   226,   225,   224,   229,
     230,   197,   228,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   254,   143,   167,   178,   177,     0,   175,   189,
     191,   192,     0,   188,   194,   196,   195,   193,   118,   186,
     256,   265,   267,   270,   271,     0,     0,     0,   274,     0,
     289,     0,     0,   257,    88,    90,    95,     0,   103,   222,
     105,    97,    99,   296,   297,   299,   106,     0,     0,   109,
     314,   110,   313,     7,   124,   124,    21,     0,    53,     0,
      51,     0,    57,    55,     0,   234,    26,    27,    14,    16,
      17,    18,    19,    20,    25,    23,    24,    77,    15,   123,
     121,     0,   122,   119,   120,    22,     0,     0,     0,   303,
      12,   264,     0,   263,   306,     0,   308,   309,   310,     0,
     319,   277,     0,   288,     0,   279,   283,     0,   290,     0,
     171,   174,     0,   186,     0,   172,   289,   173,   168,   169,
     170,   161,   162,   166,   165,   146,   145,   153,   154,   157,
     156,     0,   150,   151,   152,   155,   158,   159,   160,   163,
     164,     0,   149,   148,   147,     0,     0,     0,   179,   180,
     181,   182,   176,     0,     0,   201,     0,   257,   320,   258,
     316,     0,   117,   262,     0,    94,   107,   315,     0,     0,
     254,     0,     0,   254,     0,     0,     0,     0,     0,     0,
      33,   254,    31,     0,     0,    58,    52,     0,    50,    49,
      56,    54,    45,     0,   127,   128,   232,   233,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   311,   305,   307,   318,   287,   286,   276,
     278,   284,   282,   281,   231,   223,   190,     0,   253,   144,
     235,     0,   252,     0,   186,     0,     0,   185,   222,   211,
     220,   221,     0,   213,     0,   216,   215,   184,     0,   273,
       0,   259,     0,   312,     0,    76,     0,    86,     0,    83,
       0,     0,     0,    44,   124,     0,    32,    28,     0,    29,
      30,     0,     0,     0,    66,    60,     0,    62,     0,   125,
     132,   134,   142,   139,   135,   133,   136,   137,   138,   141,
     140,   131,   130,   129,   317,   285,   280,   204,     0,     0,
     245,     0,     0,   250,     0,   241,     0,     0,   236,     0,
     210,     0,     0,     0,   183,   261,   260,     0,     0,    85,
      81,    82,   124,     0,     0,     0,    41,    34,    39,    36,
       0,     0,     0,    65,    69,    64,    70,     0,     0,    59,
      61,   124,   244,   247,   246,   249,   248,     0,     0,   239,
     240,     0,   237,   209,   212,   220,   221,   214,    73,    74,
      75,    84,     0,     0,    80,    40,    38,    37,    42,    43,
       0,     0,    63,   251,     0,     0,   238,     0,    79,     0,
      35,    67,    70,    68,   243,     0,    71,    72,    78,   242
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -426,  -426,  -426,  -426,  -426,  -426,  -426,  -194,  -426,  -293,
    -426,  -415,  -426,  -426,  -426,   360,  -426,  -426,  -426,  -426,
    -426,    37,  -426,  -426,   -42,  -426,  -426,  -266,  -418,  -426,
    -426,  -376,  -426,  -426,  -426,   294,   361,  -426,  -426,   285,
     362,  -426,  -426,   343,   195,  -426,  -426,  -426,   326,   368,
    -181,  -426,   -28,  -426,  -426,  -426,   -56,  -426,  -426,  -426,
    -426,   128,  -426,  -426,  -426,  -426,    93,  -426,  -426,  -426,
    -426,  -426,  -140,   -58,  -426,  -426,  -426,   -55,   146,  -426,
    -426,  -426,  -426,   -40,  -425,  -426,  -426,  -426,  -426,  -426,
     -45,   423,  -139,    12,   274,  -426,   508,  -426,   -96,   601,
     155,  -426,    38,  -426,  -426,  -426,   -24,    44,   307,  -426,
       1,  -426,   168,  -426,  -426,   -86,  -426,   720,   815,  -426
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     9,    10,    18,    11,    19,   195,   196,   306,
     307,   456,   308,   309,   197,   198,   199,   200,   201,   202,
     203,   316,   204,   406,   407,   408,   463,   464,   205,   206,
     207,   388,   389,   390,    13,    71,    72,    74,    14,    81,
      82,    31,    32,    39,    89,    90,   179,    15,    46,    47,
     208,   209,   210,   211,   212,   213,   132,   271,   272,   273,
     274,   133,   134,   135,   136,   137,    43,   138,   139,   140,
     141,   142,   371,   372,   373,   374,   375,   376,   143,   144,
     145,   146,   147,   215,   216,   278,   279,   280,   281,   282,
     217,   149,   163,   294,   150,    61,   151,   159,   108,   152,
     234,   235,   352,   236,    64,    65,    40,    41,    35,    36,
     218,    66,   225,   226,   227,   228,   182,   153,   154,    69
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      94,   158,   285,   299,   302,   181,   310,    24,    27,   148,
     230,   287,   395,   451,    21,    92,   455,   219,    37,    98,
      21,   158,   327,    24,   102,   219,    27,   491,   166,    16,
     489,     1,    21,    28,   403,     3,   404,   214,    21,    91,
      42,    21,    28,   495,   496,    99,   502,   360,    24,    20,
     429,    21,   183,    48,   223,   340,   340,   430,   220,   288,
     431,   290,    48,    49,    44,   440,   341,   402,    86,   242,
     158,    50,   441,    27,    51,    52,    21,   492,    91,   184,
      50,    17,   510,    51,    52,    97,   238,    37,   403,   516,
     404,    48,   223,    33,   348,    84,    37,    93,    85,   231,
      34,   100,    53,    48,   219,   460,    45,   232,   405,    50,
     237,    53,    51,    52,    17,   232,   292,   509,    70,    80,
    -263,    50,   295,    22,    51,    52,    25,    29,   300,   303,
      33,   311,   361,   346,    55,   319,   224,   103,   322,    56,
      53,    57,   313,    55,    58,   318,  -263,   312,    56,   104,
      57,  -207,    53,    58,   178,    93,  -263,   162,  -219,   239,
     214,     4,   469,   178,   286,   289,     5,    17,     6,    38,
       7,  -303,    55,   275,   276,   105,   277,    56,    91,    57,
     239,   109,    58,    33,    55,    44,   103,    17,   314,    56,
      34,    57,   178,   155,    58,   379,  -303,   161,   354,   343,
     162,   386,  -263,   387,   103,   164,  -263,  -263,   425,    44,
    -263,   167,   383,   457,     8,   359,   358,   432,   171,  -186,
     286,   366,    28,   286,   433,   381,   382,   434,   370,   320,
     321,   363,    48,    49,   511,   513,   237,   173,   176,    49,
     239,   378,   177,   283,   284,   286,   424,  -203,   393,   396,
      50,   240,   241,    51,    52,   245,   247,   248,   249,   250,
     385,   427,  -202,  -205,  -206,   289,   397,   409,   399,   400,
     298,   315,   291,   317,   323,   342,   351,   457,   457,   344,
     349,    53,   111,   410,   411,   412,   413,   414,   415,   416,
     417,   418,   419,   420,   421,   422,   423,   327,    60,   357,
    -208,    60,    60,   486,   380,   384,   391,    60,   327,   436,
    -218,    60,    87,    55,   398,    60,   457,   443,    56,   442,
      57,   444,   448,    58,   446,   450,    60,   452,   447,   458,
      60,   471,    60,    48,    49,   454,   497,   472,   214,   473,
     474,   449,   396,   475,   482,   483,   494,   466,   500,   501,
      60,    50,    60,   503,    51,    52,   421,   423,   467,   507,
     508,    60,    12,   518,   470,    60,   165,   172,    26,    60,
      30,    78,   296,   101,    23,   465,   367,   221,    60,    60,
      60,   481,    53,   233,   484,   355,   370,   485,   487,   477,
     350,   426,   445,   174,   345,     0,   214,     0,    54,     0,
       0,     0,   214,   214,   468,   498,   499,   488,   490,     0,
       0,     0,     0,     0,    55,   214,    48,    49,     0,    56,
       0,    57,   504,     0,    58,     0,     0,     0,     0,    60,
       0,    60,     0,     0,    50,   214,    60,    51,    52,     0,
       0,   214,     0,     0,   512,   512,   214,    59,     0,   515,
      75,    79,    60,     0,     0,     0,    83,     0,     0,     0,
      88,     0,     0,     0,    96,    53,     0,   517,     0,     0,
       0,    48,    49,     0,     0,   107,     0,     0,     0,   156,
       0,   160,     0,     0,     0,     0,     0,     0,     0,    50,
       0,     0,    51,    52,     0,     0,     0,    55,     0,   168,
      60,   170,    56,    60,    57,     0,   347,    58,     0,   233,
     175,    60,     0,   221,   180,     0,     0,     0,   156,     0,
      53,     0,     0,     0,     0,     0,     0,   222,   180,   107,
       0,     0,    62,     0,     0,    62,    62,     0,     0,     0,
       0,    62,     0,     0,     0,    62,     0,     0,   243,    62,
     246,     0,    55,     0,     0,    48,    49,    95,     0,    57,
      62,     0,    58,     0,    62,    60,    62,     0,     0,     0,
      48,    49,    60,    50,     0,     0,    51,    52,   107,     0,
     107,     0,     0,     0,    62,   293,    62,     0,    50,     0,
       0,    51,    52,     0,     0,    62,     0,     0,     0,    62,
       0,   297,     0,    62,    53,     0,     0,     0,     0,     0,
       0,     0,    62,    62,    62,     0,    60,     0,     0,    53,
      73,     0,     0,     0,     0,    63,     0,     0,    63,    63,
       0,    60,     0,     0,    63,    60,    55,     0,    63,     0,
       0,    56,    63,    57,     0,     0,    58,     0,     0,   180,
       0,   106,   107,    63,    60,     0,    56,    63,    57,    63,
     353,    58,     0,    62,     0,    62,     0,     0,     0,     0,
      62,     0,     0,     0,     0,     0,     0,    63,     0,    63,
       0,     0,     0,     0,     0,     0,    62,     0,    63,     0,
       0,     0,    63,     0,     0,     0,    63,     0,     0,   364,
       0,    48,    49,     0,     0,    63,    63,    63,     0,     0,
       0,     0,     0,     0,   107,     0,     0,     0,     0,    50,
       0,   180,    51,    52,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    62,     0,     0,    62,     0,     0,
       0,     0,     0,     0,    67,    62,     0,    67,    67,     0,
      53,     0,     0,    67,     0,     0,    63,    67,    63,     0,
       0,    67,     0,    63,     0,   107,    76,     0,     0,     0,
       0,     0,    67,    48,    49,     0,    67,     0,    67,    63,
     107,     0,    55,     0,   428,     0,     0,    56,     0,    77,
       0,    50,    58,     0,    51,   229,    67,     0,    67,    62,
       0,     0,     0,   293,     0,     0,    62,    67,     0,     0,
       0,    67,     0,     0,     0,    67,     0,     0,     0,     0,
       0,     0,    53,     0,    67,    67,    67,    63,     0,     0,
      63,     0,     0,     0,     0,     0,     0,     0,    63,    68,
       0,     0,    68,    68,     0,     0,     0,     0,    68,     0,
      62,     0,    68,     0,    55,     0,    68,     0,     0,    56,
       0,    57,     0,     0,    58,    62,     0,    68,     0,    62,
       0,    68,     0,    68,     0,    67,     0,    67,     0,     0,
       0,     0,    67,     0,     0,     0,     0,     0,    62,     0,
       0,    68,    63,    68,     0,     0,     0,     0,    67,    63,
       0,     0,    68,     0,     0,     0,    68,     0,     0,     0,
      68,     0,     0,     0,     0,     0,     0,     0,     0,    68,
      68,    68,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    63,     0,     0,    67,     0,     0,    67,
       0,     0,     0,     0,     0,     0,     0,    67,    63,     0,
       0,     0,    63,     0,     0,     0,     0,     0,     0,     0,
      68,     0,    68,     0,     0,     0,     0,    68,   110,   169,
       6,    63,     7,     0,   184,     0,   185,     0,   186,     0,
     187,   188,     0,    68,   189,   190,    50,   191,   192,    51,
      52,   193,   194,   112,   113,   114,   115,     0,   116,   117,
     118,    67,   119,   120,   121,   122,     0,     0,    67,     0,
       0,     0,     0,     0,     0,     0,     8,    53,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   401,
       0,    68,     0,     0,    68,     0,     0,     0,     0,     0,
       0,     0,    68,     0,     0,   123,     0,     0,     0,   124,
      93,   326,    67,     0,   125,     0,   126,     0,     0,   127,
       0,     0,   128,     0,   129,   130,     0,    67,   131,     0,
       0,    67,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      67,     0,     0,     0,     0,     0,    68,     0,     0,     0,
     110,   169,     6,    68,     7,     0,   184,     0,   185,     0,
     186,     0,   187,   188,     0,     0,   189,   190,    50,   191,
     192,    51,    52,   193,   194,   112,   113,   114,   115,     0,
     116,   117,   118,     0,   119,   120,   121,   122,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    68,     8,    53,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    68,     0,     0,     0,    68,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   123,     0,     0,
       0,   124,    93,     0,     0,    68,   125,     0,   126,   110,
     169,   127,     0,     0,   128,     0,   129,   130,     0,     0,
     131,     0,     0,   304,     0,     0,     0,    50,     0,     0,
      51,    52,     0,     0,   112,   113,   114,   115,     0,   116,
     117,   118,     0,   119,   120,   121,   122,   110,   111,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    53,     0,
       0,     0,     0,     0,     0,    50,     0,     0,    51,    52,
       0,     0,   112,   113,   114,   115,     0,   116,   117,   118,
       0,   119,   120,   121,   122,     0,   123,   305,     0,     0,
     124,    93,     0,     0,     0,   125,    53,   126,     0,     0,
     127,     0,     0,   128,     0,   129,   130,     0,     0,   131,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   123,     0,     0,   244,   124,     0,
     110,   368,     0,   125,     0,   126,   157,     0,   127,     0,
       0,   128,     0,   129,   130,     0,     0,   131,    50,     0,
       0,    51,    52,     0,     0,   112,   113,   114,   115,     0,
     116,   117,   118,     0,   119,   120,   121,   122,   110,   111,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    53,
       0,     0,     0,     0,     0,     0,    50,     0,     0,    51,
      52,     0,     0,   112,   113,   114,   115,     0,   116,   117,
     118,     0,   119,   120,   121,   122,     0,   123,     0,     0,
       0,   124,   284,   369,     0,     0,   125,    53,   126,     0,
       0,   127,     0,     0,   128,     0,   129,   130,     0,     0,
     131,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   123,     0,     0,     0,   124,
       0,   110,   169,     0,   125,     0,   126,   157,     0,   127,
       0,     0,   128,     0,   129,   130,     0,     0,   131,    50,
       0,     0,    51,    52,     0,     0,   112,   113,   114,   115,
       0,   116,   117,   118,     0,   119,   120,   121,   122,   110,
     169,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      53,     0,     0,     0,     0,     0,     0,    50,     0,     0,
      51,    52,     0,     0,   112,   113,   114,   115,     0,   116,
     117,   118,     0,   119,   120,   121,   122,     0,   123,     0,
       0,     0,   124,     0,     0,     0,     0,   125,    53,   126,
     157,     0,   127,     0,     0,   128,     0,   129,   130,     0,
       0,   131,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   123,     0,     0,     0,
     124,   301,   110,   111,     0,   125,     0,   126,     0,     0,
     127,     0,     0,   128,     0,   129,   130,     0,     0,   131,
      50,     0,     0,    51,    52,     0,     0,   112,   113,   114,
     115,     0,   116,   117,   118,     0,   119,   120,   121,   122,
    -254,     0,     0,   251,   252,   253,   254,   255,   256,   257,
     258,    53,   259,     0,   260,     0,  -126,     0,     0,     0,
       0,     0,     0,     0,     0,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,     0,     0,     0,     0,   123,
       0,     0,     0,   124,     0,   110,   111,     0,   125,   362,
     126,     0,     0,   127,     0,     0,   128,     0,   129,   130,
       0,     0,   131,    50,     0,     0,    51,    52,     0,     0,
     112,   113,   114,   115,     0,   116,   117,   118,     0,   119,
     120,   121,   122,   110,   111,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    53,     0,     0,     0,     0,     0,
       0,    50,     0,     0,    51,    52,     0,     0,   112,   113,
     114,   115,     0,   116,   117,   118,     0,   119,   120,   121,
     122,     0,   123,     0,     0,     0,   124,     0,     0,   365,
       0,   125,    53,   126,     0,     0,   127,     0,     0,   128,
       0,   129,   130,     0,     0,   131,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     123,     0,     0,     0,   124,     0,   110,   111,     0,   125,
     377,   126,     0,     0,   127,     0,     0,   128,     0,   129,
     130,     0,     0,   131,    50,     0,     0,    51,    52,     0,
       0,   112,   113,   114,   115,     0,   116,   117,   118,     0,
     119,   120,   121,   122,   110,   111,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    53,     0,     0,     0,     0,
       0,     0,    50,     0,     0,    51,    52,     0,     0,   112,
     113,   114,   115,     0,   116,   117,   118,     0,   119,   120,
     121,   122,     0,   123,   394,     0,     0,   124,     0,     0,
       0,     0,   125,    53,   126,     0,     0,   127,     0,     0,
     128,     0,   129,   130,     0,     0,   131,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   123,     0,     0,     0,   124,     0,   110,   111,     0,
     125,     0,   126,   435,     0,   127,     0,     0,   128,     0,
     129,   130,     0,     0,   131,    50,     0,     0,    51,    52,
       0,     0,   112,   113,   114,   115,     0,   116,   117,   118,
       0,   119,   120,   121,   122,   110,   111,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    53,     0,     0,     0,
       0,     0,     0,    50,     0,     0,    51,    52,     0,     0,
     112,   113,   114,   115,     0,   116,   117,   118,     0,   119,
     120,   121,   122,     0,   123,     0,     0,     0,   124,   453,
       0,     0,     0,   125,    53,   126,     0,     0,   127,     0,
       0,   128,     0,   129,   130,     0,     0,   131,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   123,   459,     0,     0,   124,     0,     0,   110,
     111,   125,     0,   126,     0,     0,   127,     0,     0,   128,
       0,   129,   130,   461,     0,   131,     0,    50,     0,     0,
      51,    52,     0,     0,   112,   113,   114,   115,     0,   116,
     117,   118,     0,   119,   120,   121,   122,   110,   111,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    53,     0,
       0,   462,     0,     0,     0,    50,     0,     0,    51,    52,
       0,     0,   112,   113,   114,   115,     0,   116,   117,   118,
       0,   119,   120,   121,   122,     0,   123,     0,     0,     0,
     124,     0,     0,     0,     0,   125,    53,   126,     0,     0,
     127,     0,     0,   128,     0,   129,   130,     0,     0,   131,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   123,     0,     0,     0,   124,     0,
     110,   111,     0,   125,     0,   126,     0,     0,   127,     0,
       0,   128,     0,   129,   130,     0,     0,   131,    50,     0,
       0,    51,    52,     0,     0,   112,   113,   114,   115,     0,
     116,   117,   118,     0,   119,   120,   121,   122,     0,   324,
     325,   251,   252,   253,   254,   255,   256,   257,   258,    53,
     259,  -120,   260,     0,  -126,    93,     0,     0,     0,     0,
       0,     0,     0,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,     0,     0,     0,     0,   123,     0,     0,
       0,   124,     0,   110,   111,     0,   125,   476,   126,     0,
       0,   127,     0,     0,   128,     0,   129,   130,     0,     0,
     131,    50,     0,     0,    51,    52,     0,     0,   112,   113,
     114,   115,     0,   116,   117,   118,     0,   119,   120,   121,
     122,   110,   368,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    53,     0,     0,     0,     0,     0,     0,    50,
       0,     0,    51,    52,     0,     0,   112,   113,   114,   115,
       0,   116,   117,   118,     0,   119,   120,   121,   122,     0,
     123,     0,     0,     0,   124,     0,     0,     0,     0,   125,
      53,   126,   480,     0,   127,     0,     0,   128,     0,   129,
     130,     0,     0,   131,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   123,     0,
       0,     0,   124,   284,   110,   111,     0,   125,     0,   126,
       0,     0,   127,     0,     0,   128,     0,   129,   130,     0,
       0,   131,    50,     0,     0,    51,    52,     0,     0,   112,
     113,   114,   115,     0,   116,   117,   118,     0,   119,   120,
     121,   122,   110,   111,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    53,     0,     0,     0,     0,     0,     0,
      50,     0,     0,    51,    52,     0,     0,   112,   113,   114,
     115,     0,   116,   117,   118,     0,   119,   120,   121,   122,
       0,   123,     0,     0,     0,   124,   284,     0,     0,     0,
     125,    53,   126,     0,     0,   127,     0,     0,   128,     0,
     129,   130,     0,     0,   131,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   123,
       0,     0,     0,   124,     0,   110,   111,     0,   125,     0,
     126,     0,     0,   127,     0,     0,   128,     0,   129,   130,
       0,     0,   131,    50,     0,     0,    51,   229,     0,     0,
     112,   113,   114,   115,     0,   116,   117,   118,     0,   119,
     120,   121,   122,   110,   169,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    53,     0,     0,     0,     0,     0,
       0,    50,     0,     0,    51,    52,     0,     0,   112,   113,
     114,   115,     0,   116,   117,   118,     0,   119,   120,   121,
     122,     0,   123,     0,     0,     0,   124,     0,     0,     0,
       0,   125,    53,   126,     0,     0,   127,     0,     0,   128,
       0,   129,   130,     0,     0,   131,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     123,     0,     0,     0,   124,     0,     0,     0,     0,   125,
       0,   126,     0,     0,   127,     0,     0,   128,     0,   129,
     130,     0,     0,   131,  -254,  -254,  -254,  -254,  -254,  -254,
    -254,  -254,  -254,  -254,  -254,  -254,   324,   325,   251,   252,
     253,   254,   255,   256,   257,   258,     0,   259,     0,   260,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     324,   325,   251,   252,   253,   254,   255,   256,   257,   258,
       0,   259,  -120,   260,     0,  -126,   392,     0,     0,     0,
       0,     0,     0,     0,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   324,   325,   251,   252,   253,   254,
     255,   256,   257,   258,     0,   259,  -120,   260,     0,  -126,
     -32,     0,     0,     0,     0,     0,     0,     0,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   251,   252,
     253,   254,   255,   256,   257,   258,     0,   259,     0,   260,
       0,     0,     0,     0,   437,     0,     0,     0,     0,   438,
     439,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     251,   252,   253,   254,   255,   256,   257,   258,     0,   259,
       0,   260,     0,     0,     0,     0,   478,     0,     0,     0,
       0,   479,     0,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   251,   252,   253,   254,   255,   256,   257,   258,
       0,   259,     0,   260,     0,     0,     0,     0,   505,     0,
       0,     0,     0,   506,     0,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   251,   252,   253,   254,   255,   256,
     257,   258,     0,   259,     0,   260,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   251,   252,   253,   254,
     255,   256,   257,   258,     0,   259,     0,   260,     0,     0,
       0,     0,     0,     0,     0,   356,     0,     0,     0,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   251,   252,
     253,   254,   255,   256,   257,   258,     0,   259,     0,   260,
       0,     0,     0,     0,  -217,     0,     0,     0,     0,     0,
       0,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     251,   252,   253,   254,   255,   256,   257,   258,     0,   259,
       0,   260,     0,     0,    93,     0,     0,     0,     0,     0,
       0,     0,     0,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   251,   252,   253,   254,   255,   256,   257,   258,
       0,   259,     0,   260,     0,     0,   493,     0,     0,     0,
       0,     0,     0,     0,     0,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   251,   252,   253,   254,   255,   256,
     257,   258,     0,   259,     0,   260,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   514,     0,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   251,   252,   253,   254,
     255,   256,   257,   258,     0,   259,     0,   260,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   519,     0,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   251,   252,
     253,   254,   255,   256,   257,   258,     0,   259,     0,   260,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   262,   263,   264,   265,   266,   267,   268,   269,   270
};

static const yytype_int16 yycheck[] =
{
      40,    57,   142,   184,   185,    91,   187,     6,     7,    54,
     106,   150,   305,   389,     6,    39,   392,     6,    17,    43,
       6,    77,   216,    22,    48,     6,    25,   452,    73,     6,
     448,     3,     6,     6,    14,     4,    16,    93,     6,    38,
       6,     6,     6,   458,   459,    44,   471,     6,    47,     5,
      85,     6,    92,     5,     6,    70,    70,    92,    98,   155,
      95,   157,     5,     6,    95,    88,    81,    81,    95,   125,
     126,    23,    95,    72,    26,    27,     6,   453,    77,    11,
      23,    91,   497,    26,    27,    41,   110,    86,    14,   507,
      16,     5,     6,    85,   233,    92,    95,    87,    95,    88,
      92,    92,    54,     5,     6,   398,    92,    96,    88,    23,
     109,    54,    26,    27,    91,    96,   161,   493,    92,    92,
       6,    23,   167,    91,    26,    27,    91,    91,   184,   185,
      85,   187,    91,   229,    86,   191,    88,    90,   194,    91,
      54,    93,   187,    86,    96,   190,    32,   187,    91,    93,
      93,    87,    54,    96,   106,    87,    87,    93,    89,    90,
     216,     0,    88,   106,    91,    92,     5,    91,     7,    93,
       9,    81,    86,    90,    91,    87,    93,    91,   177,    93,
      90,    87,    96,    85,    86,    95,    90,    91,   187,    91,
      92,    93,   106,    27,    96,   291,   106,    70,   238,   223,
      93,    14,    88,    16,    90,    92,    92,    93,   347,    95,
      96,    70,   298,   394,    53,   271,   261,    85,    92,    90,
      91,   277,     6,    91,    92,    94,    95,    95,   284,   192,
     193,   276,     5,     6,   500,   501,   235,    92,    94,     6,
      90,   286,    95,    90,    87,    91,   342,    87,   304,   305,
      23,   123,   124,    26,    27,   127,   128,   129,   130,   131,
     300,   357,    87,    87,    87,    92,   306,   323,   308,   309,
     100,     6,    94,    87,    86,    94,    32,   458,   459,    88,
      88,    54,     6,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   491,    24,    94,
      87,    27,    28,   443,    95,    83,    83,    33,   502,   365,
      89,    37,    85,    86,    83,    41,   497,    89,    91,    95,
      93,    92,    12,    96,    94,    88,    52,    89,   384,    83,
      56,    89,    58,     5,     6,   391,    83,    92,   394,    92,
      92,   386,   398,    92,    94,    88,    88,   403,    70,    81,
      76,    23,    78,    92,    26,    27,   401,   402,   403,    12,
      88,    87,     2,    88,   406,    91,    72,    82,     7,    95,
       8,    28,   177,    47,     6,   403,   283,   103,   104,   105,
     106,   437,    54,   109,   442,   239,   442,   443,   443,   434,
     235,   353,   380,    86,   226,    -1,   452,    -1,    70,    -1,
      -1,    -1,   458,   459,   403,   461,   462,   447,   448,    -1,
      -1,    -1,    -1,    -1,    86,   471,     5,     6,    -1,    91,
      -1,    93,   478,    -1,    96,    -1,    -1,    -1,    -1,   155,
      -1,   157,    -1,    -1,    23,   491,   162,    26,    27,    -1,
      -1,   497,    -1,    -1,   500,   501,   502,    24,    -1,   505,
      27,    28,   178,    -1,    -1,    -1,    33,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    41,    54,    -1,   507,    -1,    -1,
      -1,     5,     6,    -1,    -1,    52,    -1,    -1,    -1,    56,
      -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    -1,    26,    27,    -1,    -1,    -1,    86,    -1,    76,
     226,    78,    91,   229,    93,    -1,   232,    96,    -1,   235,
      87,   237,    -1,   239,    91,    -1,    -1,    -1,    95,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    -1,   104,   105,   106,
      -1,    -1,    24,    -1,    -1,    27,    28,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    37,    -1,    -1,   125,    41,
     127,    -1,    86,    -1,    -1,     5,     6,    91,    -1,    93,
      52,    -1,    96,    -1,    56,   291,    58,    -1,    -1,    -1,
       5,     6,   298,    23,    -1,    -1,    26,    27,   155,    -1,
     157,    -1,    -1,    -1,    76,   162,    78,    -1,    23,    -1,
      -1,    26,    27,    -1,    -1,    87,    -1,    -1,    -1,    91,
      -1,   178,    -1,    95,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   104,   105,   106,    -1,   342,    -1,    -1,    54,
      70,    -1,    -1,    -1,    -1,    24,    -1,    -1,    27,    28,
      -1,   357,    -1,    -1,    33,   361,    86,    -1,    37,    -1,
      -1,    91,    41,    93,    -1,    -1,    96,    -1,    -1,   226,
      -1,    86,   229,    52,   380,    -1,    91,    56,    93,    58,
     237,    96,    -1,   155,    -1,   157,    -1,    -1,    -1,    -1,
     162,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    78,
      -1,    -1,    -1,    -1,    -1,    -1,   178,    -1,    87,    -1,
      -1,    -1,    91,    -1,    -1,    -1,    95,    -1,    -1,   276,
      -1,     5,     6,    -1,    -1,   104,   105,   106,    -1,    -1,
      -1,    -1,    -1,    -1,   291,    -1,    -1,    -1,    -1,    23,
      -1,   298,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   226,    -1,    -1,   229,    -1,    -1,
      -1,    -1,    -1,    -1,    24,   237,    -1,    27,    28,    -1,
      54,    -1,    -1,    33,    -1,    -1,   155,    37,   157,    -1,
      -1,    41,    -1,   162,    -1,   342,    70,    -1,    -1,    -1,
      -1,    -1,    52,     5,     6,    -1,    56,    -1,    58,   178,
     357,    -1,    86,    -1,   361,    -1,    -1,    91,    -1,    93,
      -1,    23,    96,    -1,    26,    27,    76,    -1,    78,   291,
      -1,    -1,    -1,   380,    -1,    -1,   298,    87,    -1,    -1,
      -1,    91,    -1,    -1,    -1,    95,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    -1,   104,   105,   106,   226,    -1,    -1,
     229,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   237,    24,
      -1,    -1,    27,    28,    -1,    -1,    -1,    -1,    33,    -1,
     342,    -1,    37,    -1,    86,    -1,    41,    -1,    -1,    91,
      -1,    93,    -1,    -1,    96,   357,    -1,    52,    -1,   361,
      -1,    56,    -1,    58,    -1,   155,    -1,   157,    -1,    -1,
      -1,    -1,   162,    -1,    -1,    -1,    -1,    -1,   380,    -1,
      -1,    76,   291,    78,    -1,    -1,    -1,    -1,   178,   298,
      -1,    -1,    87,    -1,    -1,    -1,    91,    -1,    -1,    -1,
      95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,
     105,   106,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   342,    -1,    -1,   226,    -1,    -1,   229,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   237,   357,    -1,
      -1,    -1,   361,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     155,    -1,   157,    -1,    -1,    -1,    -1,   162,     5,     6,
       7,   380,     9,    -1,    11,    -1,    13,    -1,    15,    -1,
      17,    18,    -1,   178,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    -1,    35,    36,
      37,   291,    39,    40,    41,    42,    -1,    -1,   298,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      -1,   226,    -1,    -1,   229,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   237,    -1,    -1,    82,    -1,    -1,    -1,    86,
      87,    88,   342,    -1,    91,    -1,    93,    -1,    -1,    96,
      -1,    -1,    99,    -1,   101,   102,    -1,   357,   105,    -1,
      -1,   361,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     380,    -1,    -1,    -1,    -1,    -1,   291,    -1,    -1,    -1,
       5,     6,     7,   298,     9,    -1,    11,    -1,    13,    -1,
      15,    -1,    17,    18,    -1,    -1,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    -1,
      35,    36,    37,    -1,    39,    40,    41,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   342,    53,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   357,    -1,    -1,    -1,   361,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    86,    87,    -1,    -1,   380,    91,    -1,    93,     5,
       6,    96,    -1,    -1,    99,    -1,   101,   102,    -1,    -1,
     105,    -1,    -1,    19,    -1,    -1,    -1,    23,    -1,    -1,
      26,    27,    -1,    -1,    30,    31,    32,    33,    -1,    35,
      36,    37,    -1,    39,    40,    41,    42,     5,     6,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    26,    27,
      -1,    -1,    30,    31,    32,    33,    -1,    35,    36,    37,
      -1,    39,    40,    41,    42,    -1,    82,    83,    -1,    -1,
      86,    87,    -1,    -1,    -1,    91,    54,    93,    -1,    -1,
      96,    -1,    -1,    99,    -1,   101,   102,    -1,    -1,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    85,    86,    -1,
       5,     6,    -1,    91,    -1,    93,    94,    -1,    96,    -1,
      -1,    99,    -1,   101,   102,    -1,    -1,   105,    23,    -1,
      -1,    26,    27,    -1,    -1,    30,    31,    32,    33,    -1,
      35,    36,    37,    -1,    39,    40,    41,    42,     5,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    26,
      27,    -1,    -1,    30,    31,    32,    33,    -1,    35,    36,
      37,    -1,    39,    40,    41,    42,    -1,    82,    -1,    -1,
      -1,    86,    87,    88,    -1,    -1,    91,    54,    93,    -1,
      -1,    96,    -1,    -1,    99,    -1,   101,   102,    -1,    -1,
     105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      -1,     5,     6,    -1,    91,    -1,    93,    94,    -1,    96,
      -1,    -1,    99,    -1,   101,   102,    -1,    -1,   105,    23,
      -1,    -1,    26,    27,    -1,    -1,    30,    31,    32,    33,
      -1,    35,    36,    37,    -1,    39,    40,    41,    42,     5,
       6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,
      26,    27,    -1,    -1,    30,    31,    32,    33,    -1,    35,
      36,    37,    -1,    39,    40,    41,    42,    -1,    82,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    91,    54,    93,
      94,    -1,    96,    -1,    -1,    99,    -1,   101,   102,    -1,
      -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      86,    87,     5,     6,    -1,    91,    -1,    93,    -1,    -1,
      96,    -1,    -1,    99,    -1,   101,   102,    -1,    -1,   105,
      23,    -1,    -1,    26,    27,    -1,    -1,    30,    31,    32,
      33,    -1,    35,    36,    37,    -1,    39,    40,    41,    42,
      70,    -1,    -1,    73,    74,    75,    76,    77,    78,    79,
      80,    54,    82,    -1,    84,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    86,    -1,     5,     6,    -1,    91,    92,
      93,    -1,    -1,    96,    -1,    -1,    99,    -1,   101,   102,
      -1,    -1,   105,    23,    -1,    -1,    26,    27,    -1,    -1,
      30,    31,    32,    33,    -1,    35,    36,    37,    -1,    39,
      40,    41,    42,     5,     6,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    26,    27,    -1,    -1,    30,    31,
      32,    33,    -1,    35,    36,    37,    -1,    39,    40,    41,
      42,    -1,    82,    -1,    -1,    -1,    86,    -1,    -1,    89,
      -1,    91,    54,    93,    -1,    -1,    96,    -1,    -1,    99,
      -1,   101,   102,    -1,    -1,   105,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    86,    -1,     5,     6,    -1,    91,
      92,    93,    -1,    -1,    96,    -1,    -1,    99,    -1,   101,
     102,    -1,    -1,   105,    23,    -1,    -1,    26,    27,    -1,
      -1,    30,    31,    32,    33,    -1,    35,    36,    37,    -1,
      39,    40,    41,    42,     5,     6,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    26,    27,    -1,    -1,    30,
      31,    32,    33,    -1,    35,    36,    37,    -1,    39,    40,
      41,    42,    -1,    82,    83,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    91,    54,    93,    -1,    -1,    96,    -1,    -1,
      99,    -1,   101,   102,    -1,    -1,   105,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    86,    -1,     5,     6,    -1,
      91,    -1,    93,    94,    -1,    96,    -1,    -1,    99,    -1,
     101,   102,    -1,    -1,   105,    23,    -1,    -1,    26,    27,
      -1,    -1,    30,    31,    32,    33,    -1,    35,    36,    37,
      -1,    39,    40,    41,    42,     5,     6,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    -1,    -1,    26,    27,    -1,    -1,
      30,    31,    32,    33,    -1,    35,    36,    37,    -1,    39,
      40,    41,    42,    -1,    82,    -1,    -1,    -1,    86,    87,
      -1,    -1,    -1,    91,    54,    93,    -1,    -1,    96,    -1,
      -1,    99,    -1,   101,   102,    -1,    -1,   105,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    83,    -1,    -1,    86,    -1,    -1,     5,
       6,    91,    -1,    93,    -1,    -1,    96,    -1,    -1,    99,
      -1,   101,   102,    19,    -1,   105,    -1,    23,    -1,    -1,
      26,    27,    -1,    -1,    30,    31,    32,    33,    -1,    35,
      36,    37,    -1,    39,    40,    41,    42,     5,     6,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,
      -1,    19,    -1,    -1,    -1,    23,    -1,    -1,    26,    27,
      -1,    -1,    30,    31,    32,    33,    -1,    35,    36,    37,
      -1,    39,    40,    41,    42,    -1,    82,    -1,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    91,    54,    93,    -1,    -1,
      96,    -1,    -1,    99,    -1,   101,   102,    -1,    -1,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    -1,
       5,     6,    -1,    91,    -1,    93,    -1,    -1,    96,    -1,
      -1,    99,    -1,   101,   102,    -1,    -1,   105,    23,    -1,
      -1,    26,    27,    -1,    -1,    30,    31,    32,    33,    -1,
      35,    36,    37,    -1,    39,    40,    41,    42,    -1,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    54,
      82,    83,    84,    -1,    86,    87,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    86,    -1,     5,     6,    -1,    91,    92,    93,    -1,
      -1,    96,    -1,    -1,    99,    -1,   101,   102,    -1,    -1,
     105,    23,    -1,    -1,    26,    27,    -1,    -1,    30,    31,
      32,    33,    -1,    35,    36,    37,    -1,    39,    40,    41,
      42,     5,     6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    -1,    26,    27,    -1,    -1,    30,    31,    32,    33,
      -1,    35,    36,    37,    -1,    39,    40,    41,    42,    -1,
      82,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    91,
      54,    93,    94,    -1,    96,    -1,    -1,    99,    -1,   101,
     102,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    86,    87,     5,     6,    -1,    91,    -1,    93,
      -1,    -1,    96,    -1,    -1,    99,    -1,   101,   102,    -1,
      -1,   105,    23,    -1,    -1,    26,    27,    -1,    -1,    30,
      31,    32,    33,    -1,    35,    36,    37,    -1,    39,    40,
      41,    42,     5,     6,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    -1,    -1,    26,    27,    -1,    -1,    30,    31,    32,
      33,    -1,    35,    36,    37,    -1,    39,    40,    41,    42,
      -1,    82,    -1,    -1,    -1,    86,    87,    -1,    -1,    -1,
      91,    54,    93,    -1,    -1,    96,    -1,    -1,    99,    -1,
     101,   102,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    86,    -1,     5,     6,    -1,    91,    -1,
      93,    -1,    -1,    96,    -1,    -1,    99,    -1,   101,   102,
      -1,    -1,   105,    23,    -1,    -1,    26,    27,    -1,    -1,
      30,    31,    32,    33,    -1,    35,    36,    37,    -1,    39,
      40,    41,    42,     5,     6,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    26,    27,    -1,    -1,    30,    31,
      32,    33,    -1,    35,    36,    37,    -1,    39,    40,    41,
      42,    -1,    82,    -1,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    91,    54,    93,    -1,    -1,    96,    -1,    -1,    99,
      -1,   101,   102,    -1,    -1,   105,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    91,
      -1,    93,    -1,    -1,    96,    -1,    -1,    99,    -1,   101,
     102,    -1,    -1,   105,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    -1,    82,    -1,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      -1,    82,    83,    84,    -1,    86,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    -1,    82,    83,    84,    -1,    86,
      87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,    73,    74,
      75,    76,    77,    78,    79,    80,    -1,    82,    -1,    84,
      -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
      73,    74,    75,    76,    77,    78,    79,    80,    -1,    82,
      -1,    84,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,
      -1,    94,    -1,    96,    97,    98,    99,   100,   101,   102,
     103,   104,    73,    74,    75,    76,    77,    78,    79,    80,
      -1,    82,    -1,    84,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    -1,    -1,    94,    -1,    96,    97,    98,    99,   100,
     101,   102,   103,   104,    73,    74,    75,    76,    77,    78,
      79,    80,    -1,    82,    -1,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,    73,    74,    75,    76,
      77,    78,    79,    80,    -1,    82,    -1,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    96,
      97,    98,    99,   100,   101,   102,   103,   104,    73,    74,
      75,    76,    77,    78,    79,    80,    -1,    82,    -1,    84,
      -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    97,    98,    99,   100,   101,   102,   103,   104,
      73,    74,    75,    76,    77,    78,    79,    80,    -1,    82,
      -1,    84,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    97,    98,    99,   100,   101,   102,
     103,   104,    73,    74,    75,    76,    77,    78,    79,    80,
      -1,    82,    -1,    84,    -1,    -1,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,
     101,   102,   103,   104,    73,    74,    75,    76,    77,    78,
      79,    80,    -1,    82,    -1,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    94,    -1,    96,    97,    98,
      99,   100,   101,   102,   103,   104,    73,    74,    75,    76,
      77,    78,    79,    80,    -1,    82,    -1,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,    96,
      97,    98,    99,   100,   101,   102,   103,   104,    73,    74,
      75,    76,    77,    78,    79,    80,    -1,    82,    -1,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    97,    98,    99,   100,   101,   102,   103,   104
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,   108,     4,     0,     5,     7,     9,    53,   109,
     110,   112,   122,   141,   145,   154,     6,    91,   111,   113,
     214,     6,    91,   156,   217,    91,   143,   217,     6,    91,
     147,   148,   149,    85,    92,   215,   216,   217,    93,   150,
     213,   214,     6,   173,    95,    92,   155,   156,     5,     6,
      23,    26,    27,    54,    70,    86,    91,    93,    96,   198,
     201,   202,   203,   206,   211,   212,   218,   224,   225,   226,
      92,   142,   143,    70,   144,   198,    70,    93,   150,   198,
      92,   146,   147,   198,    92,    95,    95,    85,   198,   151,
     152,   217,   213,    87,   190,    91,   198,   214,   213,   217,
      92,   155,   213,    90,    93,    87,    86,   198,   205,    87,
       5,     6,    30,    31,    32,    33,    35,    36,    37,    39,
      40,    41,    42,    82,    86,    91,    93,    96,    99,   101,
     102,   105,   163,   168,   169,   170,   171,   172,   174,   175,
     176,   177,   178,   185,   186,   187,   188,   189,   197,   198,
     201,   203,   206,   224,   225,    27,   198,    94,   163,   204,
     198,    70,    93,   199,    92,   142,   197,    70,   198,     6,
     198,    92,   146,    92,   215,   198,    94,    95,   106,   153,
     198,   222,   223,   190,    11,    13,    15,    17,    18,    21,
      22,    24,    25,    28,    29,   114,   115,   121,   122,   123,
     124,   125,   126,   127,   129,   135,   136,   137,   157,   158,
     159,   160,   161,   162,   163,   190,   191,   197,   217,     6,
     190,   201,   198,     6,    88,   219,   220,   221,   222,    27,
     205,    88,    96,   201,   207,   208,   210,   217,   213,    90,
     168,   168,   163,   198,    85,   168,   198,   168,   168,   168,
     168,    73,    74,    75,    76,    77,    78,    79,    80,    82,
      84,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   164,   165,   166,   167,    90,    91,    93,   192,   193,
     194,   195,   196,    90,    87,   179,    91,   199,   205,    92,
     205,    94,   197,   198,   200,   197,   151,   198,   100,   157,
     163,    87,   157,   163,    19,    83,   116,   117,   119,   120,
     157,   163,   190,   197,   217,     6,   128,    87,   197,   163,
     128,   128,   163,    86,    71,    72,    88,   114,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      70,    81,    94,   213,    88,   219,   205,   201,   199,    88,
     207,    32,   209,   198,   190,   185,    92,    94,   197,   163,
       6,    91,    92,   197,   198,    89,   163,   173,     6,    88,
     163,   179,   180,   181,   182,   183,   184,    92,   197,   205,
      95,    94,    95,   222,    83,   190,    14,    16,   138,   139,
     140,    83,    87,   163,    83,   116,   163,   190,    83,   190,
     190,    70,    81,    14,    16,    88,   130,   131,   132,   163,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   205,   199,   209,   205,   198,    85,
      92,    95,    85,    92,    95,    94,   163,    89,    94,    95,
      88,    95,    95,    89,    92,   200,    94,   163,    12,   197,
      88,   138,    89,    87,   163,   138,   118,   157,    83,    83,
     116,    19,    19,   133,   134,   159,   163,   197,   217,    88,
     131,    89,    92,    92,    92,    92,    92,   197,    89,    94,
      94,   163,    94,    88,   180,   163,   179,   184,   190,   135,
     190,   191,   138,    87,    88,   118,   118,    83,   163,   163,
      70,    81,   191,    92,   163,    89,    94,    12,    88,   138,
     118,   134,   163,   134,    94,   163,   135,   190,    88,    94
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   107,   108,   108,   109,   109,   109,   110,   110,   110,
     110,   111,   112,   113,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   115,   115,
     115,   115,   116,   117,   118,   119,   119,   119,   119,   119,
     119,   119,   120,   120,   120,   121,   122,   122,   122,   123,
     124,   124,   125,   125,   126,   126,   127,   127,   128,   129,
     129,   130,   130,   131,   132,   132,   132,   133,   133,   133,
     134,   135,   135,   135,   135,   135,   135,   136,   137,   137,
     137,   137,   138,   138,   139,   140,   140,   141,   141,   141,
     142,   142,   143,   143,   144,   144,   145,   145,   145,   146,
     146,   147,   147,   148,   149,   149,   150,   151,   151,   152,
     153,   154,   154,   154,   155,   155,   156,   156,   156,   157,
     157,   157,   157,   157,   158,   159,   160,   161,   161,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   163,   163,   164,   164,   164,   164,   164,
     165,   165,   165,   165,   165,   165,   165,   166,   166,   166,
     166,   167,   167,   167,   167,   167,   167,   168,   168,   168,
     168,   168,   168,   168,   168,   169,   169,   169,   169,   169,
     169,   169,   169,   170,   170,   171,   172,   173,   174,   174,
     174,   175,   175,   175,   176,   176,   176,   176,   176,   176,
     176,   177,   178,   178,   178,   178,   178,   178,   178,   179,
     179,   179,   180,   180,   181,   181,   182,   182,   182,   183,
     184,   184,   185,   185,   186,   186,   186,   186,   187,   188,
     188,   189,   190,   191,   191,   192,   193,   193,   194,   194,
     194,   194,   194,   194,   195,   196,   196,   196,   196,   196,
     196,   196,   196,   197,   197,   198,   198,   198,   198,   199,
     199,   200,   200,   201,   201,   202,   202,   202,   202,   202,
     202,   202,   202,   203,   204,   205,   206,   206,   207,   207,
     208,   208,   208,   208,   209,   210,   210,   210,   210,   211,
     212,   213,   213,   213,   214,   214,   214,   215,   215,   216,
     216,   216,   216,   217,   217,   218,   218,   219,   219,   220,
     220,   221,   222,   222,   223,   223,   224,   225,   226,   226,
     226
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     1,     1,     1,     5,     4,     3,
       4,     1,     5,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     2,     1,     1,     1,     5,     3,     4,     4,     3,
       4,     3,     4,     4,     2,     2,     1,     1,     1,     2,
       2,     1,     2,     1,     2,     1,     2,     1,     1,     4,
       3,     2,     1,     3,     2,     2,     1,     3,     3,     1,
       1,     7,     7,     5,     5,     5,     3,     1,     7,     6,
       5,     4,     2,     1,     3,     2,     1,     2,     4,     3,
       2,     1,     2,     1,     3,     2,     2,     4,     3,     2,
       1,     1,     1,     3,     2,     3,     3,     3,     1,     2,
       1,     2,     4,     3,     2,     1,     2,     4,     3,     1,
       1,     1,     1,     1,     0,     3,     1,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     2,     2,     2,     2,     1,     2,     1,     1,     2,
       2,     2,     2,     4,     3,     3,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     4,     1,     1,     1,     2,     4,
       3,     2,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     2,     1,     2,     3,     4,     5,     4,
       4,     3,     7,     6,     4,     3,     4,     4,     4,     4,
       3,     5,     2,     3,     1,     1,     1,     2,     3,     3,
       4,     3,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     1,     1,     4,     3,     2,     1,
       3,     2,     2,     1,     1,     3,     2,     2,     1,     2,
       2,     2,     1,     2,     3,     2,     4,     3,     1,     3,
       2,     1,     2,     1,     3,     4,     3,     2,     1,     1,
       1,     2,     3,     1,     1,     2,     3,     5,     2,     3,
       3
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
#line 28 "lab2.yacc"
                      {printf("Find package and import\n");}
#line 2426 "y.tab.c"
    break;

  case 79: /* ExprSwitchStmt: SWITCH SimpleStmt SEMICOLON '{' ExprCaseClauseList '}'  */
#line 142 "lab2.yacc"
                                                                                 {printf("simplestmt\n");}
#line 2432 "y.tab.c"
    break;


#line 2436 "y.tab.c"

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

#line 496 "lab2.yacc"


int main(int argc, char *argv[])
{
    yyin = fopen(argv[1], "r");
	yyparse();
        fclose(yyin);
	if(error_ == 0)
		printf("OK\n");
        
}
