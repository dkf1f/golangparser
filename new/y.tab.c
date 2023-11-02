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
  YYSYMBOL_ShortVarDecl = 158,             /* ShortVarDecl  */
  YYSYMBOL_EmptyStatement = 159,           /* EmptyStatement  */
  YYSYMBOL_SendStmt = 160,                 /* SendStmt  */
  YYSYMBOL_Channel = 161,                  /* Channel  */
  YYSYMBOL_IncDecStmt = 162,               /* IncDecStmt  */
  YYSYMBOL_Assignment = 163,               /* Assignment  */
  YYSYMBOL_Expression = 164,               /* Expression  */
  YYSYMBOL_UnaryExpr = 165,                /* UnaryExpr  */
  YYSYMBOL_PrimaryExpr = 166,              /* PrimaryExpr  */
  YYSYMBOL_Conversion = 167,               /* Conversion  */
  YYSYMBOL_MethodExpr = 168,               /* MethodExpr  */
  YYSYMBOL_ReceiverType = 169,             /* ReceiverType  */
  YYSYMBOL_MethodName = 170,               /* MethodName  */
  YYSYMBOL_Operand = 171,                  /* Operand  */
  YYSYMBOL_Literal = 172,                  /* Literal  */
  YYSYMBOL_BasicLit = 173,                 /* BasicLit  */
  YYSYMBOL_CompositeLit = 174,             /* CompositeLit  */
  YYSYMBOL_LiteralType = 175,              /* LiteralType  */
  YYSYMBOL_LiteralValue = 176,             /* LiteralValue  */
  YYSYMBOL_ElementList = 177,              /* ElementList  */
  YYSYMBOL_KeyedElement = 178,             /* KeyedElement  */
  YYSYMBOL_Key = 179,                      /* Key  */
  YYSYMBOL_FieldName = 180,                /* FieldName  */
  YYSYMBOL_Element = 181,                  /* Element  */
  YYSYMBOL_OperandName = 182,              /* OperandName  */
  YYSYMBOL_int_lit = 183,                  /* int_lit  */
  YYSYMBOL_imaginary_lit = 184,            /* imaginary_lit  */
  YYSYMBOL_float_lit = 185,                /* float_lit  */
  YYSYMBOL_FunctionLit = 186,              /* FunctionLit  */
  YYSYMBOL_Block = 187,                    /* Block  */
  YYSYMBOL_Statements = 188,               /* Statements  */
  YYSYMBOL_Selector = 189,                 /* Selector  */
  YYSYMBOL_Index = 190,                    /* Index  */
  YYSYMBOL_Slice = 191,                    /* Slice  */
  YYSYMBOL_TypeAssertion = 192,            /* TypeAssertion  */
  YYSYMBOL_Arguments = 193,                /* Arguments  */
  YYSYMBOL_ExpressionList = 194,           /* ExpressionList  */
  YYSYMBOL_Type = 195,                     /* Type  */
  YYSYMBOL_TypeArgs = 196,                 /* TypeArgs  */
  YYSYMBOL_TypeList = 197,                 /* TypeList  */
  YYSYMBOL_TypeName = 198,                 /* TypeName  */
  YYSYMBOL_TypeLit = 199,                  /* TypeLit  */
  YYSYMBOL_ArrayType = 200,                /* ArrayType  */
  YYSYMBOL_ArrayLength = 201,              /* ArrayLength  */
  YYSYMBOL_ElementType = 202,              /* ElementType  */
  YYSYMBOL_StructType = 203,               /* StructType  */
  YYSYMBOL_DeclList = 204,                 /* DeclList  */
  YYSYMBOL_FieldDecl = 205,                /* FieldDecl  */
  YYSYMBOL_Tag = 206,                      /* Tag  */
  YYSYMBOL_EmbeddedField = 207,            /* EmbeddedField  */
  YYSYMBOL_PointerType = 208,              /* PointerType  */
  YYSYMBOL_FunctionType = 209,             /* FunctionType  */
  YYSYMBOL_Signature = 210,                /* Signature  */
  YYSYMBOL_Parameters = 211,               /* Parameters  */
  YYSYMBOL_ParameterList = 212,            /* ParameterList  */
  YYSYMBOL_ParameterDecl = 213,            /* ParameterDecl  */
  YYSYMBOL_IdentifierList = 214,           /* IdentifierList  */
  YYSYMBOL_InterfaceType = 215,            /* InterfaceType  */
  YYSYMBOL_InterfaceElemList = 216,        /* InterfaceElemList  */
  YYSYMBOL_InterfaceElem = 217,            /* InterfaceElem  */
  YYSYMBOL_MethodElem = 218,               /* MethodElem  */
  YYSYMBOL_TypeElem = 219,                 /* TypeElem  */
  YYSYMBOL_TypeTerm = 220,                 /* TypeTerm  */
  YYSYMBOL_SliceType = 221,                /* SliceType  */
  YYSYMBOL_MapType = 222,                  /* MapType  */
  YYSYMBOL_ChannelType = 223               /* ChannelType  */
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
#define YYLAST   2548

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  107
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  117
/* YYNRULES -- Number of rules.  */
#define YYNRULES  297
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  495

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
       0,    27,    27,    28,    31,    32,    33,    35,    36,    37,
      38,    39,    41,    42,    44,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    63,    64,
      65,    66,    68,    69,    70,    73,    74,    75,    76,    77,
      78,    79,    83,    84,    85,    87,    89,    90,    91,    93,
      95,    96,    98,    99,   101,   102,   104,   105,   107,   109,
     110,   112,   113,   114,   115,   116,   117,   119,   120,   121,
     123,   126,   127,   128,   129,   130,   131,   136,   140,   141,
     142,   143,   145,   146,   148,   149,   149,   164,   165,   166,
     168,   169,   170,   171,   172,   173,   176,   177,   178,   180,
     181,   182,   182,   184,   186,   187,   189,   190,   191,   192,
     193,   196,   197,   198,   200,   201,   202,   203,   204,   206,
     207,   208,   209,   210,   211,   214,   216,   218,   219,   221,
     222,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   239,   270,   271,   272,   273,   274,   275,
     276,   277,   280,   281,   282,   283,   284,   285,   286,   287,
     289,   290,   292,   293,   294,   296,   297,   299,   301,   302,
     303,   305,   306,   307,   308,   309,   310,   311,   313,   314,
     315,   316,   317,   318,   319,   320,   322,   323,   324,   326,
     327,   329,   330,   332,   333,   334,   336,   338,   339,   341,
     342,   344,   345,   346,   347,   350,   351,   352,   355,   357,
     359,   360,   363,   365,   366,   368,   369,   370,   371,   372,
     373,   376,   379,   380,   381,   382,   383,   384,   385,   386,
     388,   389,   391,   392,   393,   394,   396,   397,   399,   400,
     402,   403,   405,   406,   407,   408,   409,   410,   411,   412,
     415,   416,   417,   420,   421,   423,   424,   426,   427,   428,
     429,   430,   432,   433,   434,   435,   438,   442,   444,   445,
     446,   448,   449,   450,   453,   454,   456,   457,   458,   459,
     462,   463,   466,   467,   469,   470,   472,   473,   475,   477,
     478,   480,   481,   485,   488,   491,   492,   493
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
  "VarDecl", "VarSpecList", "VarSpec", "SimpleStmt", "ShortVarDecl",
  "EmptyStatement", "SendStmt", "Channel", "IncDecStmt", "Assignment",
  "Expression", "UnaryExpr", "PrimaryExpr", "Conversion", "MethodExpr",
  "ReceiverType", "MethodName", "Operand", "Literal", "BasicLit",
  "CompositeLit", "LiteralType", "LiteralValue", "ElementList",
  "KeyedElement", "Key", "FieldName", "Element", "OperandName", "int_lit",
  "imaginary_lit", "float_lit", "FunctionLit", "Block", "Statements",
  "Selector", "Index", "Slice", "TypeAssertion", "Arguments",
  "ExpressionList", "Type", "TypeArgs", "TypeList", "TypeName", "TypeLit",
  "ArrayType", "ArrayLength", "ElementType", "StructType", "DeclList",
  "FieldDecl", "Tag", "EmbeddedField", "PointerType", "FunctionType",
  "Signature", "Parameters", "ParameterList", "ParameterDecl",
  "IdentifierList", "InterfaceType", "InterfaceElemList", "InterfaceElem",
  "MethodElem", "TypeElem", "TypeTerm", "SliceType", "MapType",
  "ChannelType", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-394)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-281)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      72,    78,    41,  -394,  -394,    12,    19,    43,    53,  -394,
    -394,  -394,  -394,  -394,  -394,  -394,  -394,    39,   -31,    80,
    -394,    48,    15,  -394,   482,    26,  -394,   610,   656,    28,
    -394,  -394,  -394,   819,  -394,     7,    59,   765,    89,    82,
     103,   894,  -394,    82,    89,  -394,   101,    89,    82,    96,
     110,   118,  1483,   128,  2322,   200,   819,  1308,   819,   169,
     149,  -394,  -394,  -394,  -394,  -394,  -394,  -394,  -394,  -394,
    -394,   153,    89,  2322,  -394,   178,   819,  1391,   819,  -394,
    -394,   163,   263,  -394,  -394,   180,    13,   819,  -394,   183,
     185,    74,   103,  1149,  -394,    30,  -394,  -394,   103,  -394,
    -394,  -394,  -394,   272,   819,    65,  1555,  -394,  -394,    18,
      82,   194,  -394,  -394,  -394,  -394,  -394,  -394,  -394,  -394,
    -394,  -394,  -394,  2322,  2405,  2322,  1187,  2322,  2322,  2322,
    2322,  2322,   190,  -394,    73,  -394,  -394,   196,  -394,  -394,
    -394,  -394,   201,  -394,  -394,  -394,  -394,  -394,  -394,   208,
     -56,   204,   213,   214,   216,   819,   215,   819,  -394,   211,
    -394,  2322,   819,  -394,  -394,  -394,  -394,  2322,  -394,    94,
    -394,  -394,  -394,  -394,  -394,  -394,  -394,    89,   819,  -394,
    -394,  -394,   206,  -394,  2443,  1429,  -394,   937,   302,   222,
    2322,  2322,   302,   302,  2322,  -394,  -394,  -394,  -394,  -394,
    -394,  -394,  -394,  -394,  -394,  -394,  -394,  -394,  -394,  -394,
    -394,  -394,   224,  -394,  -394,  1056,  -394,  1048,  1196,   232,
      37,  -394,  -394,   221,   139,  -394,   228,   515,  -394,  -394,
    1483,  -394,  -394,   272,   149,   229,     0,   287,   819,   103,
     314,  -394,  -394,   231,    17,   237,  -394,   145,  -394,  -394,
    -394,  -394,  2322,    55,  1512,  1595,  -394,  -394,  -394,  -394,
    -394,    80,  1270,  -394,  1633,   239,  -394,  -394,  -394,   819,
    -394,   240,   123,  -394,  -394,  -394,    74,   249,   124,   165,
     251,   137,  2322,  1716,   103,   253,   103,   103,  -394,   154,
    -394,  1317,   257,  -394,  -394,    24,  -394,  -394,  -394,  -394,
    -394,  2322,  -394,  -394,  -394,  -394,  2322,  2322,  2322,  2322,
    2322,  2322,  2322,  2322,  2322,  2322,  2322,  2322,  2322,   819,
    -394,  -394,  -394,  -394,   149,  -394,  -394,  -394,  -394,  -394,
     287,  -394,  -394,  -394,   819,  -394,  -394,   819,  -394,    67,
     106,  1754,   127,  -394,    87,  -394,   250,   254,   -41,   245,
     255,  -394,  -394,  -394,   256,  -394,   819,  -394,   248,  -394,
    2322,   333,  2322,  -394,   258,   165,   264,  1837,   165,  -394,
    2443,   271,  -394,  -394,  1875,  -394,  -394,  1959,  1997,  2443,
    -394,  -394,    69,  -394,   267,  -394,  -394,  -394,  -394,  -394,
    -394,  -394,  -394,  -394,  -394,  -394,  -394,  -394,  -394,  -394,
    -394,  -394,  -394,   265,   268,  -394,   273,   274,  -394,  2080,
    -394,   -26,  2163,  -394,   270,  -394,   259,  2201,  2284,  -394,
    -394,  -394,   103,    54,  -394,  -394,  -394,  1149,   165,   283,
     284,  -394,  -394,  2443,  2443,   290,  2322,  2322,  -394,  -394,
    -394,    99,   306,   296,  -394,  -394,  1149,  -394,  -394,  -394,
    -394,  -394,   288,  2322,  -394,  -394,    61,  -394,  -394,  -394,
    -394,  -394,  -394,   367,  -394,  -394,  1149,   293,   165,  -394,
    -394,  -394,  2443,  -394,  -394,  2322,  2322,  1149,  -394,   295,
    2322,  -394,    54,  -394,   303,  -394,  -394,  -394,  -394,  -394,
     299,  -394,  -394,  -394,  -394
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     0,     0,     2,     1,     0,     0,     0,     0,     3,
       5,     6,     4,    46,    47,    48,    11,     0,     0,     0,
      13,   280,     0,   111,     0,     0,    87,    93,     0,     0,
      96,   101,   102,     0,   272,     0,   275,   278,     0,     0,
       9,   269,   164,     0,     0,   113,     0,   115,     0,   240,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   116,
     233,   232,   242,   244,   243,   245,   246,   247,   248,   249,
      89,     0,    91,     0,    92,     0,     0,     0,     0,   104,
      98,     0,   100,   279,   271,     0,     0,     0,   277,     0,
     108,     0,    10,   126,     8,     0,   270,   268,     0,   281,
     112,   114,   267,     0,     0,     0,     0,   252,   295,     0,
       0,   199,   204,   175,   176,   177,   203,   202,   201,   206,
     207,   174,   205,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   231,   143,   144,   155,   154,     0,   152,   166,
     168,   169,     0,   165,   171,   173,   172,   170,   118,   163,
     233,   242,   244,   247,   248,     0,     0,     0,   251,     0,
     266,     0,     0,   234,    88,    90,    95,     0,   103,   199,
     105,    97,    99,   273,   274,   276,   106,     0,     0,   109,
     291,   110,   290,     7,   126,   126,    21,     0,    53,     0,
      51,     0,    57,    55,     0,   211,    26,    27,    14,    16,
      17,    18,    19,    20,    25,    23,    24,    77,    15,   119,
     124,   122,     0,   123,   120,   121,    22,     0,     0,     0,
     280,    12,   241,     0,   240,   283,     0,   285,   286,   287,
       0,   296,   254,     0,   265,     0,   256,   260,     0,   267,
       0,   148,   151,     0,   163,     0,   149,   266,   150,   145,
     146,   147,     0,     0,     0,     0,   156,   157,   158,   159,
     153,     0,     0,   178,     0,   234,   297,   235,   293,     0,
     117,   239,     0,    94,   107,   292,     0,     0,   231,     0,
       0,   231,     0,     0,     0,     0,     0,     0,    33,   231,
      31,     0,     0,    58,    52,     0,    50,    49,    56,    54,
      45,     0,   129,   130,   209,   210,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     288,   282,   284,   295,   264,   263,   253,   255,   261,   259,
     258,   208,   200,   167,     0,   230,   212,     0,   229,     0,
     163,     0,     0,   162,   199,   188,   197,   198,     0,   190,
       0,   193,   192,   161,     0,   250,     0,   236,     0,   289,
       0,    76,     0,    86,     0,    83,     0,     0,     0,    44,
     126,     0,    32,    28,     0,    29,    30,     0,     0,     0,
      66,    60,     0,    62,     0,   127,   132,   134,   142,   139,
     135,   133,   136,   137,   138,   141,   140,   131,   125,   294,
     262,   257,   181,     0,     0,   222,     0,     0,   227,     0,
     218,     0,     0,   213,     0,   187,     0,     0,     0,   160,
     238,   237,     0,     0,    85,    81,    82,   126,     0,     0,
       0,    41,    34,    39,    36,     0,     0,     0,    65,    69,
      64,    70,     0,     0,    59,    61,   126,   221,   224,   223,
     226,   225,     0,     0,   216,   217,     0,   214,   186,   189,
     197,   198,   191,    73,    74,    75,    84,     0,     0,    80,
      40,    38,    37,    42,    43,     0,     0,    63,   228,     0,
       0,   215,     0,    79,     0,    35,    67,    70,    68,   220,
       0,    71,    72,    78,   219
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -394,  -394,  -394,  -394,  -394,  -394,  -394,  -195,  -394,  -269,
    -394,  -285,  -394,  -394,  -394,   392,  -394,  -394,  -394,  -394,
    -394,    58,  -394,  -394,    14,  -394,  -394,  -222,  -393,  -394,
    -394,  -355,  -394,  -394,  -394,   323,   391,  -394,  -394,   317,
     394,  -394,  -394,   372,   230,  -394,  -394,  -394,   358,   400,
    -158,  -394,  -394,    32,  -394,  -394,  -394,   -49,   166,  -394,
    -394,  -394,  -394,   148,  -394,  -394,  -394,  -394,  -394,  -137,
      -4,  -394,  -394,  -394,    -3,   174,  -394,  -394,  -394,  -394,
     -40,  -372,  -394,  -394,  -394,  -394,  -394,   -50,   334,  -141,
      60,   246,  -394,   419,  -394,   -91,   572,   182,  -394,    90,
    -394,  -394,  -394,   -32,    46,   336,  -394,    -5,  -394,   192,
    -394,  -394,   -88,  -394,   681,   776,  -394
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     9,    10,    18,    11,    19,   195,   196,   284,
     285,   431,   286,   287,   197,   198,   199,   200,   201,   202,
     203,   294,   204,   382,   383,   384,   438,   439,   205,   206,
     207,   364,   365,   366,    13,    71,    72,    74,    14,    81,
      82,    31,    32,    39,    89,    90,   179,    15,    46,    47,
     208,   209,   210,   211,   212,   213,   214,   132,   133,   134,
     135,   136,   137,    43,   138,   139,   140,   141,   142,   347,
     348,   349,   350,   351,   352,   143,   144,   145,   146,   147,
     216,   217,   256,   257,   258,   259,   260,   218,   149,   163,
     272,   150,    61,   151,   159,   108,   152,   235,   236,   329,
     237,    64,    65,    40,    41,    35,    36,   219,    66,   226,
     227,   228,   229,   182,   153,   154,    69
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      94,    24,    27,   181,   148,   263,   220,    92,   158,   265,
     426,    98,    37,   430,   371,   231,   102,    24,    16,    21,
      27,    21,   305,   166,   220,    21,   277,   280,   158,   288,
     464,  -184,    21,    91,    28,    48,   220,   162,   379,    99,
     380,     4,    24,  -240,   215,    21,     5,   415,     6,    21,
       7,    20,   183,    50,   416,   466,    51,    52,   221,    28,
      17,   336,    38,   453,   266,   184,   268,    27,   454,  -240,
      48,   224,    91,   467,   477,     1,   243,   158,   239,    48,
      49,    37,     3,   379,    53,   380,    42,    97,    50,   491,
      37,    51,    52,   325,     8,    21,   233,    50,    33,    84,
      51,    52,    85,    17,   238,   435,   232,    45,   264,   267,
      22,   270,   381,   484,   233,    33,    55,   273,    70,    53,
      80,    56,    34,    57,    33,  -240,    58,   103,    53,  -240,
    -240,    34,    44,  -240,    25,   278,   281,   291,   289,   323,
     296,    93,   297,    44,    29,   300,   337,   290,   470,   471,
     480,    55,   404,   225,    86,   481,    56,   444,    57,   405,
      55,    58,   406,   253,   254,    56,   255,    57,   215,  -231,
      58,   178,    91,    17,  -240,  -280,  -196,   240,   355,   362,
     178,   363,   292,   400,   240,  -128,   103,   485,   359,    44,
      93,   407,   320,   100,   252,   302,   303,   264,   408,   331,
    -280,   409,   335,   104,   339,   105,   342,  -121,   302,   303,
    -128,    93,   432,   346,   354,   109,   412,   357,   358,   252,
    -121,   413,   414,  -128,   368,   302,   303,   155,   399,   103,
      17,   238,   252,   369,   372,  -163,   264,  -121,   361,   161,
    -128,   -32,   162,   402,   373,   164,   375,   376,   167,   252,
     298,   299,   385,   486,   488,   171,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,    28,
      60,   305,   173,    60,    60,   432,   432,   176,    49,    60,
     177,   461,   305,    60,   240,   252,   261,    60,   262,   241,
     242,  -180,   411,   246,   248,   249,   250,   251,    60,   264,
    -179,  -182,    60,  -183,    60,   269,   276,   267,   293,   295,
     301,   422,   424,   318,   432,   319,   321,   326,   429,   328,
     111,   215,    60,   333,    60,   372,  -185,   397,   398,   442,
     441,   334,   360,    60,   367,   356,   374,    60,   378,  -194,
     417,    60,   421,  -195,   418,   423,   425,   458,   419,   222,
      60,    60,    60,   427,   433,   234,   446,   447,    59,   452,
     448,    75,    79,   456,   457,   449,   450,    83,   346,   460,
     468,    88,   469,   472,   443,    96,   475,   476,   215,   482,
     478,   483,   463,   465,   215,   215,   107,   473,   474,   489,
     156,   493,   160,   494,    12,   165,   445,   215,    26,   172,
      78,    60,    30,    60,   479,   101,    23,   274,    60,   343,
     168,   440,   170,   459,   332,   462,   420,   215,   327,   322,
     401,   175,   174,   215,    60,   180,   487,   487,   215,   156,
       0,   490,     0,     0,     0,     0,     0,     0,   223,   180,
     107,     0,   492,    62,     0,     0,    62,    62,     0,     0,
       0,     0,    62,     0,     0,     0,    62,     0,     0,   244,
      62,   247,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    62,     0,    60,     0,    62,    60,    62,     0,   324,
       0,     0,   234,     0,    60,     0,   222,    48,    49,   107,
       0,   107,     0,     0,     0,    62,   271,    62,     0,     0,
       0,     0,     0,     0,     0,    50,    62,     0,    51,    52,
      62,     0,   275,     0,    62,    60,     0,     0,     0,     0,
      48,   224,    60,    62,    62,    62,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    53,     0,    50,     0,
       0,    51,    52,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    54,     0,     0,     0,     0,     0,     0,     0,
       0,   180,     0,     0,   107,    60,     0,     0,    55,    53,
       0,     0,   330,    56,    62,    57,    62,     0,    58,     0,
      60,    62,     0,    60,     0,     0,     0,     0,   340,     0,
       0,     0,     0,     0,     0,     0,    63,    62,     0,    63,
      63,    55,    60,   107,     0,    63,    56,     0,    57,    63,
     180,    58,     0,    63,     0,    48,    49,     0,     0,     0,
       0,   178,     0,     0,    63,     0,     0,     0,    63,     0,
      63,     0,     0,    50,     0,     0,    51,    52,     0,     0,
       0,     0,     0,     0,     0,     0,    62,     0,    63,    62,
      63,     0,     0,   107,     0,     0,     0,    62,     0,    63,
       0,    48,    49,    63,    53,     0,     0,    63,   107,     0,
       0,   403,     0,     0,     0,     0,    63,    63,    63,    50,
      73,     0,    51,    52,     0,     0,     0,     0,    62,     0,
     271,     0,     0,     0,     0,    62,    55,     0,     0,     0,
       0,    56,     0,    57,     0,    67,    58,     0,    67,    67,
      53,     0,     0,     0,    67,     0,     0,     0,    67,     0,
       0,     0,    67,     0,     0,     0,    76,    63,     0,    63,
       0,     0,     0,    67,    63,     0,     0,    67,    62,    67,
       0,     0,    55,     0,     0,     0,     0,    56,     0,    77,
      63,     0,    58,    62,     0,     0,    62,    67,     0,    67,
       0,     0,     0,     0,     0,     0,     0,     0,    67,     0,
      48,    49,    67,     0,     0,    62,    67,     0,     0,     0,
       0,     0,     0,     0,     0,    67,    67,    67,    50,     0,
       0,    51,    52,     0,     0,     0,     0,     0,     0,    63,
      68,     0,    63,    68,    68,     0,     0,     0,     0,    68,
      63,     0,     0,    68,     0,     0,     0,    68,     0,    53,
       0,     0,     0,     0,    48,    49,     0,     0,    68,     0,
       0,     0,    68,     0,    68,     0,    67,     0,    67,     0,
       0,    63,    50,    67,     0,    51,    52,     0,    63,     0,
      87,    55,    68,     0,    68,     0,    56,     0,    57,    67,
       0,    58,     0,    68,     0,     0,     0,    68,     0,     0,
       0,    68,     0,    53,     0,     0,     0,     0,     0,     0,
      68,    68,    68,     0,     0,     0,     0,     0,     0,     0,
       0,    63,     0,     0,     0,     0,     0,     0,     0,    48,
      49,     0,     0,     0,     0,    55,    63,     0,    67,    63,
      56,    67,    57,     0,     0,    58,     0,    50,     0,    67,
      51,    52,     0,     0,     0,     0,     0,     0,    63,     0,
       0,    68,     0,    68,     0,     0,     0,     0,    68,     0,
       0,     0,   110,   169,     0,     0,     0,     0,    53,     0,
      67,     0,     0,     0,    68,     0,   282,    67,     0,     0,
      50,     0,     0,    51,    52,     0,     0,   112,   113,   114,
     115,     0,   116,   117,   118,     0,   119,   120,   121,   122,
      55,     0,     0,     0,     0,    95,     0,    57,     0,     0,
      58,    53,     0,     0,     0,     0,     0,     0,     0,     0,
      67,     0,     0,    68,     0,     0,    68,     0,     0,     0,
       0,     0,     0,     0,    68,    67,     0,     0,    67,   123,
     283,     0,     0,   124,    93,     0,     0,     0,   125,     0,
     126,     0,     0,   127,     0,     0,   128,    67,   129,   130,
       0,     0,   131,     0,     0,    68,     0,     0,     0,     0,
       0,     0,    68,   110,   169,     6,     0,     7,     0,   184,
       0,   185,     0,   186,     0,   187,   188,     0,     0,   189,
     190,    50,   191,   192,    51,    52,   193,   194,   112,   113,
     114,   115,     0,   116,   117,   118,     0,   119,   120,   121,
     122,     0,     0,     0,     0,    68,     0,     0,     0,     0,
       0,     8,    53,     0,     0,     0,     0,     0,     0,     0,
      68,     0,     0,    68,     0,  -231,  -231,  -231,  -231,  -231,
    -231,  -231,  -231,  -231,  -231,  -231,  -231,   302,   303,     0,
     123,     0,    68,     0,   124,    93,   304,     0,     0,   125,
       0,   126,     0,     0,   127,     0,     0,   128,     0,   129,
     130,   252,     0,   131,   110,   169,     6,     0,     7,     0,
     184,     0,   185,     0,   186,     0,   187,   188,     0,     0,
     189,   190,    50,   191,   192,    51,    52,   193,   194,   112,
     113,   114,   115,     0,   116,   117,   118,     0,   119,   120,
     121,   122,   110,   111,     0,     0,     0,     0,     0,     0,
       0,     0,     8,    53,     0,     0,     0,     0,     0,     0,
      50,     0,     0,    51,    52,     0,     0,   112,   113,   114,
     115,     0,   116,   117,   118,     0,   119,   120,   121,   122,
       0,   123,     0,     0,     0,   124,    93,     0,     0,     0,
     125,    53,   126,     0,     0,   127,     0,     0,   128,     0,
     129,   130,     0,     0,   131,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,     0,     0,   123,
       0,     0,   245,   124,     0,   110,   344,     0,   125,     0,
     126,   157,     0,   127,     0,     0,   128,     0,   129,   130,
       0,     0,   131,    50,     0,     0,    51,    52,     0,     0,
     112,   113,   114,   115,     0,   116,   117,   118,     0,   119,
     120,   121,   122,   110,   111,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    53,     0,     0,     0,     0,     0,
       0,    50,     0,     0,    51,    52,     0,     0,   112,   113,
     114,   115,     0,   116,   117,   118,     0,   119,   120,   121,
     122,     0,   123,     0,     0,     0,   124,   262,   345,     0,
       0,   125,    53,   126,     0,     0,   127,     0,     0,   128,
       0,   129,   130,     0,     0,   131,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   377,     0,     0,
     123,     0,     0,     0,   124,     0,   110,   169,     0,   125,
       0,   126,   157,     0,   127,     0,     0,   128,     0,   129,
     130,     0,     0,   131,    50,     0,     0,    51,    52,     0,
       0,   112,   113,   114,   115,     0,   116,   117,   118,     0,
     119,   120,   121,   122,   110,   169,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    53,     0,     0,     0,     0,
       0,     0,    50,     0,     0,    51,    52,     0,     0,   112,
     113,   114,   115,     0,   116,   117,   118,     0,   119,   120,
     121,   122,     0,   123,     0,     0,     0,   124,     0,     0,
       0,     0,   125,    53,   126,   157,     0,   127,    48,    49,
     128,     0,   129,   130,     0,     0,   131,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    50,     0,     0,    51,
      52,   123,     0,     0,     0,   124,   279,   110,   111,     0,
     125,     0,   126,     0,     0,   127,     0,     0,   128,     0,
     129,   130,     0,     0,   131,    50,     0,    53,    51,    52,
       0,     0,   112,   113,   114,   115,     0,   116,   117,   118,
       0,   119,   120,   121,   122,     0,     0,     0,     0,     0,
      48,    49,     0,     0,     0,     0,    53,     0,     0,   106,
       0,     0,     0,     0,    56,     0,    57,     0,    50,    58,
       0,    51,   230,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   123,     0,     0,     0,   124,     0,
     110,   111,     0,   125,   338,   126,     0,     0,   127,    53,
       0,   128,     0,   129,   130,     0,     0,   131,    50,     0,
       0,    51,    52,     0,     0,   112,   113,   114,   115,     0,
     116,   117,   118,     0,   119,   120,   121,   122,   110,   111,
       0,    55,     0,     0,     0,     0,    56,     0,    57,    53,
       0,    58,     0,     0,     0,     0,    50,     0,     0,    51,
      52,     0,     0,   112,   113,   114,   115,     0,   116,   117,
     118,     0,   119,   120,   121,   122,     0,   123,     0,     0,
       0,   124,     0,     0,   341,     0,   125,    53,   126,     0,
       0,   127,     0,     0,   128,     0,   129,   130,     0,     0,
     131,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   123,     0,     0,     0,   124,
       0,   110,   111,     0,   125,   353,   126,     0,     0,   127,
       0,     0,   128,     0,   129,   130,     0,     0,   131,    50,
       0,     0,    51,    52,     0,     0,   112,   113,   114,   115,
       0,   116,   117,   118,     0,   119,   120,   121,   122,   110,
     111,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      53,     0,     0,     0,     0,     0,     0,    50,     0,     0,
      51,    52,     0,     0,   112,   113,   114,   115,     0,   116,
     117,   118,     0,   119,   120,   121,   122,     0,   123,   370,
       0,     0,   124,     0,     0,     0,     0,   125,    53,   126,
       0,     0,   127,     0,     0,   128,     0,   129,   130,     0,
       0,   131,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   123,     0,     0,     0,
     124,     0,   110,   111,     0,   125,     0,   126,   410,     0,
     127,     0,     0,   128,     0,   129,   130,     0,     0,   131,
      50,     0,     0,    51,    52,     0,     0,   112,   113,   114,
     115,     0,   116,   117,   118,     0,   119,   120,   121,   122,
     110,   111,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    53,     0,     0,     0,     0,     0,     0,    50,     0,
       0,    51,    52,     0,     0,   112,   113,   114,   115,     0,
     116,   117,   118,     0,   119,   120,   121,   122,     0,   123,
       0,     0,     0,   124,   428,     0,     0,     0,   125,    53,
     126,     0,     0,   127,     0,     0,   128,     0,   129,   130,
       0,     0,   131,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   123,   434,     0,
       0,   124,     0,     0,   110,   111,   125,     0,   126,     0,
       0,   127,     0,     0,   128,     0,   129,   130,   436,     0,
     131,     0,    50,     0,     0,    51,    52,     0,     0,   112,
     113,   114,   115,     0,   116,   117,   118,     0,   119,   120,
     121,   122,   110,   111,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    53,     0,     0,   437,     0,     0,     0,
      50,     0,     0,    51,    52,     0,     0,   112,   113,   114,
     115,     0,   116,   117,   118,     0,   119,   120,   121,   122,
       0,   123,     0,     0,     0,   124,     0,     0,     0,     0,
     125,    53,   126,     0,     0,   127,     0,     0,   128,     0,
     129,   130,     0,     0,   131,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   123,
       0,     0,     0,   124,     0,   110,   111,     0,   125,     0,
     126,     0,     0,   127,     0,     0,   128,     0,   129,   130,
       0,     0,   131,    50,     0,     0,    51,    52,     0,     0,
     112,   113,   114,   115,     0,   116,   117,   118,     0,   119,
     120,   121,   122,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    53,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   123,     0,     0,     0,   124,     0,   110,   111,
       0,   125,   451,   126,     0,     0,   127,     0,     0,   128,
       0,   129,   130,     0,     0,   131,    50,     0,     0,    51,
      52,     0,     0,   112,   113,   114,   115,     0,   116,   117,
     118,     0,   119,   120,   121,   122,   110,   344,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    53,     0,     0,
       0,     0,     0,     0,    50,     0,     0,    51,    52,     0,
       0,   112,   113,   114,   115,     0,   116,   117,   118,     0,
     119,   120,   121,   122,     0,   123,     0,     0,     0,   124,
       0,     0,     0,     0,   125,    53,   126,   455,     0,   127,
       0,     0,   128,     0,   129,   130,     0,     0,   131,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   123,     0,     0,     0,   124,   262,   110,
     111,     0,   125,     0,   126,     0,     0,   127,     0,     0,
     128,     0,   129,   130,     0,     0,   131,    50,     0,     0,
      51,    52,     0,     0,   112,   113,   114,   115,     0,   116,
     117,   118,     0,   119,   120,   121,   122,   110,   111,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    53,     0,
       0,     0,     0,     0,     0,    50,     0,     0,    51,    52,
       0,     0,   112,   113,   114,   115,     0,   116,   117,   118,
       0,   119,   120,   121,   122,     0,   123,     0,     0,     0,
     124,   262,     0,     0,     0,   125,    53,   126,     0,     0,
     127,     0,     0,   128,     0,   129,   130,     0,     0,   131,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   123,     0,     0,     0,   124,     0,
     110,   111,     0,   125,     0,   126,     0,     0,   127,     0,
       0,   128,     0,   129,   130,     0,     0,   131,    50,     0,
       0,    51,   230,     0,     0,   112,   113,   114,   115,     0,
     116,   117,   118,     0,   119,   120,   121,   122,   110,   169,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    53,
       0,     0,     0,     0,     0,     0,    50,     0,     0,    51,
      52,     0,     0,   112,   113,   114,   115,     0,   116,   117,
     118,     0,   119,   120,   121,   122,     0,   123,     0,     0,
       0,   124,     0,     0,     0,     0,   125,    53,   126,     0,
       0,   127,     0,     0,   128,     0,   129,   130,     0,     0,
     131,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   123,     0,     0,     0,   124,
       0,     0,     0,     0,   125,     0,   126,     0,     0,   127,
       0,     0,   128,     0,   129,   130,     0,     0,   131
};

static const yytype_int16 yycheck[] =
{
      40,     6,     7,    91,    54,   142,     6,    39,    57,   150,
     365,    43,    17,   368,   283,   106,    48,    22,     6,     6,
      25,     6,   217,    73,     6,     6,   184,   185,    77,   187,
     423,    87,     6,    38,     6,     5,     6,    93,    14,    44,
      16,     0,    47,     6,    93,     6,     5,    88,     7,     6,
       9,     5,    92,    23,    95,   427,    26,    27,    98,     6,
      91,     6,    93,    89,   155,    11,   157,    72,    94,    32,
       5,     6,    77,   428,   446,     3,   125,   126,   110,     5,
       6,    86,     4,    14,    54,    16,     6,    41,    23,   482,
      95,    26,    27,   234,    53,     6,    96,    23,    85,    92,
      26,    27,    95,    91,   109,   374,    88,    92,    91,    92,
      91,   161,    88,   468,    96,    85,    86,   167,    92,    54,
      92,    91,    92,    93,    85,    88,    96,    90,    54,    92,
      93,    92,    95,    96,    91,   184,   185,   187,   187,   230,
     190,    87,   191,    95,    91,   194,    91,   187,   433,   434,
      89,    86,    85,    88,    95,    94,    91,    88,    93,    92,
      86,    96,    95,    90,    91,    91,    93,    93,   217,    70,
      96,   106,   177,    91,    87,    81,    89,    90,   269,    14,
     106,    16,   187,   324,    90,    86,    90,   472,   276,    95,
      87,    85,   224,    92,    95,    71,    72,    91,    92,   239,
     106,    95,   252,    93,   254,    87,   255,    83,    71,    72,
      86,    87,   370,   262,   264,    87,    89,    94,    95,    95,
      83,    94,    95,    86,    87,    71,    72,    27,   319,    90,
      91,   236,    95,   282,   283,    90,    91,    83,   278,    70,
      86,    87,    93,   334,   284,    92,   286,   287,    70,    95,
     192,   193,   301,   475,   476,    92,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,     6,
      24,   466,    92,    27,    28,   433,   434,    94,     6,    33,
      95,   418,   477,    37,    90,    95,    90,    41,    87,   123,
     124,    87,   341,   127,   128,   129,   130,   131,    52,    91,
      87,    87,    56,    87,    58,    94,   100,    92,     6,    87,
      86,   360,   362,    81,   472,    94,    88,    88,   367,    32,
       6,   370,    76,    92,    78,   374,    87,   377,   378,   379,
     379,    94,    83,    87,    83,    95,    83,    91,    81,    89,
      95,    95,    94,    89,    89,    12,    88,    88,    92,   103,
     104,   105,   106,    89,    83,   109,    89,    92,    24,   409,
      92,    27,    28,   412,    94,    92,    92,    33,   417,   418,
      87,    37,    88,    83,   379,    41,    70,    81,   427,    12,
      92,    88,   422,   423,   433,   434,    52,   436,   437,    94,
      56,    88,    58,    94,     2,    72,   382,   446,     7,    82,
      28,   155,     8,   157,   453,    47,     6,   177,   162,   261,
      76,   379,    78,   417,   240,   418,   356,   466,   236,   227,
     330,    87,    86,   472,   178,    91,   475,   476,   477,    95,
      -1,   480,    -1,    -1,    -1,    -1,    -1,    -1,   104,   105,
     106,    -1,   482,    24,    -1,    -1,    27,    28,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    37,    -1,    -1,   125,
      41,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,   227,    -1,    56,   230,    58,    -1,   233,
      -1,    -1,   236,    -1,   238,    -1,   240,     5,     6,   155,
      -1,   157,    -1,    -1,    -1,    76,   162,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    87,    -1,    26,    27,
      91,    -1,   178,    -1,    95,   269,    -1,    -1,    -1,    -1,
       5,     6,   276,   104,   105,   106,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    23,    -1,
      -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   227,    -1,    -1,   230,   319,    -1,    -1,    86,    54,
      -1,    -1,   238,    91,   155,    93,   157,    -1,    96,    -1,
     334,   162,    -1,   337,    -1,    -1,    -1,    -1,   254,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,   178,    -1,    27,
      28,    86,   356,   269,    -1,    33,    91,    -1,    93,    37,
     276,    96,    -1,    41,    -1,     5,     6,    -1,    -1,    -1,
      -1,   106,    -1,    -1,    52,    -1,    -1,    -1,    56,    -1,
      58,    -1,    -1,    23,    -1,    -1,    26,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   227,    -1,    76,   230,
      78,    -1,    -1,   319,    -1,    -1,    -1,   238,    -1,    87,
      -1,     5,     6,    91,    54,    -1,    -1,    95,   334,    -1,
      -1,   337,    -1,    -1,    -1,    -1,   104,   105,   106,    23,
      70,    -1,    26,    27,    -1,    -1,    -1,    -1,   269,    -1,
     356,    -1,    -1,    -1,    -1,   276,    86,    -1,    -1,    -1,
      -1,    91,    -1,    93,    -1,    24,    96,    -1,    27,    28,
      54,    -1,    -1,    -1,    33,    -1,    -1,    -1,    37,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    70,   155,    -1,   157,
      -1,    -1,    -1,    52,   162,    -1,    -1,    56,   319,    58,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    91,    -1,    93,
     178,    -1,    96,   334,    -1,    -1,   337,    76,    -1,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,
       5,     6,    91,    -1,    -1,   356,    95,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   104,   105,   106,    23,    -1,
      -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,   227,
      24,    -1,   230,    27,    28,    -1,    -1,    -1,    -1,    33,
     238,    -1,    -1,    37,    -1,    -1,    -1,    41,    -1,    54,
      -1,    -1,    -1,    -1,     5,     6,    -1,    -1,    52,    -1,
      -1,    -1,    56,    -1,    58,    -1,   155,    -1,   157,    -1,
      -1,   269,    23,   162,    -1,    26,    27,    -1,   276,    -1,
      85,    86,    76,    -1,    78,    -1,    91,    -1,    93,   178,
      -1,    96,    -1,    87,    -1,    -1,    -1,    91,    -1,    -1,
      -1,    95,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,
     104,   105,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   319,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
       6,    -1,    -1,    -1,    -1,    86,   334,    -1,   227,   337,
      91,   230,    93,    -1,    -1,    96,    -1,    23,    -1,   238,
      26,    27,    -1,    -1,    -1,    -1,    -1,    -1,   356,    -1,
      -1,   155,    -1,   157,    -1,    -1,    -1,    -1,   162,    -1,
      -1,    -1,     5,     6,    -1,    -1,    -1,    -1,    54,    -1,
     269,    -1,    -1,    -1,   178,    -1,    19,   276,    -1,    -1,
      23,    -1,    -1,    26,    27,    -1,    -1,    30,    31,    32,
      33,    -1,    35,    36,    37,    -1,    39,    40,    41,    42,
      86,    -1,    -1,    -1,    -1,    91,    -1,    93,    -1,    -1,
      96,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     319,    -1,    -1,   227,    -1,    -1,   230,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   238,   334,    -1,    -1,   337,    82,
      83,    -1,    -1,    86,    87,    -1,    -1,    -1,    91,    -1,
      93,    -1,    -1,    96,    -1,    -1,    99,   356,   101,   102,
      -1,    -1,   105,    -1,    -1,   269,    -1,    -1,    -1,    -1,
      -1,    -1,   276,     5,     6,     7,    -1,     9,    -1,    11,
      -1,    13,    -1,    15,    -1,    17,    18,    -1,    -1,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    -1,    35,    36,    37,    -1,    39,    40,    41,
      42,    -1,    -1,    -1,    -1,   319,    -1,    -1,    -1,    -1,
      -1,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     334,    -1,    -1,   337,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    -1,
      82,    -1,   356,    -1,    86,    87,    88,    -1,    -1,    91,
      -1,    93,    -1,    -1,    96,    -1,    -1,    99,    -1,   101,
     102,    95,    -1,   105,     5,     6,     7,    -1,     9,    -1,
      11,    -1,    13,    -1,    15,    -1,    17,    18,    -1,    -1,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    35,    36,    37,    -1,    39,    40,
      41,    42,     5,     6,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    -1,    -1,    26,    27,    -1,    -1,    30,    31,    32,
      33,    -1,    35,    36,    37,    -1,    39,    40,    41,    42,
      -1,    82,    -1,    -1,    -1,    86,    87,    -1,    -1,    -1,
      91,    54,    93,    -1,    -1,    96,    -1,    -1,    99,    -1,
     101,   102,    -1,    -1,   105,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    -1,    -1,    82,
      -1,    -1,    85,    86,    -1,     5,     6,    -1,    91,    -1,
      93,    94,    -1,    96,    -1,    -1,    99,    -1,   101,   102,
      -1,    -1,   105,    23,    -1,    -1,    26,    27,    -1,    -1,
      30,    31,    32,    33,    -1,    35,    36,    37,    -1,    39,
      40,    41,    42,     5,     6,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    26,    27,    -1,    -1,    30,    31,
      32,    33,    -1,    35,    36,    37,    -1,    39,    40,    41,
      42,    -1,    82,    -1,    -1,    -1,    86,    87,    88,    -1,
      -1,    91,    54,    93,    -1,    -1,    96,    -1,    -1,    99,
      -1,   101,   102,    -1,    -1,   105,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    -1,    -1,
      82,    -1,    -1,    -1,    86,    -1,     5,     6,    -1,    91,
      -1,    93,    94,    -1,    96,    -1,    -1,    99,    -1,   101,
     102,    -1,    -1,   105,    23,    -1,    -1,    26,    27,    -1,
      -1,    30,    31,    32,    33,    -1,    35,    36,    37,    -1,
      39,    40,    41,    42,     5,     6,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    26,    27,    -1,    -1,    30,
      31,    32,    33,    -1,    35,    36,    37,    -1,    39,    40,
      41,    42,    -1,    82,    -1,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    91,    54,    93,    94,    -1,    96,     5,     6,
      99,    -1,   101,   102,    -1,    -1,   105,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    26,
      27,    82,    -1,    -1,    -1,    86,    87,     5,     6,    -1,
      91,    -1,    93,    -1,    -1,    96,    -1,    -1,    99,    -1,
     101,   102,    -1,    -1,   105,    23,    -1,    54,    26,    27,
      -1,    -1,    30,    31,    32,    33,    -1,    35,    36,    37,
      -1,    39,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,
       5,     6,    -1,    -1,    -1,    -1,    54,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    91,    -1,    93,    -1,    23,    96,
      -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    -1,
       5,     6,    -1,    91,    92,    93,    -1,    -1,    96,    54,
      -1,    99,    -1,   101,   102,    -1,    -1,   105,    23,    -1,
      -1,    26,    27,    -1,    -1,    30,    31,    32,    33,    -1,
      35,    36,    37,    -1,    39,    40,    41,    42,     5,     6,
      -1,    86,    -1,    -1,    -1,    -1,    91,    -1,    93,    54,
      -1,    96,    -1,    -1,    -1,    -1,    23,    -1,    -1,    26,
      27,    -1,    -1,    30,    31,    32,    33,    -1,    35,    36,
      37,    -1,    39,    40,    41,    42,    -1,    82,    -1,    -1,
      -1,    86,    -1,    -1,    89,    -1,    91,    54,    93,    -1,
      -1,    96,    -1,    -1,    99,    -1,   101,   102,    -1,    -1,
     105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      -1,     5,     6,    -1,    91,    92,    93,    -1,    -1,    96,
      -1,    -1,    99,    -1,   101,   102,    -1,    -1,   105,    23,
      -1,    -1,    26,    27,    -1,    -1,    30,    31,    32,    33,
      -1,    35,    36,    37,    -1,    39,    40,    41,    42,     5,
       6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,
      26,    27,    -1,    -1,    30,    31,    32,    33,    -1,    35,
      36,    37,    -1,    39,    40,    41,    42,    -1,    82,    83,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    91,    54,    93,
      -1,    -1,    96,    -1,    -1,    99,    -1,   101,   102,    -1,
      -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      86,    -1,     5,     6,    -1,    91,    -1,    93,    94,    -1,
      96,    -1,    -1,    99,    -1,   101,   102,    -1,    -1,   105,
      23,    -1,    -1,    26,    27,    -1,    -1,    30,    31,    32,
      33,    -1,    35,    36,    37,    -1,    39,    40,    41,    42,
       5,     6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,
      -1,    26,    27,    -1,    -1,    30,    31,    32,    33,    -1,
      35,    36,    37,    -1,    39,    40,    41,    42,    -1,    82,
      -1,    -1,    -1,    86,    87,    -1,    -1,    -1,    91,    54,
      93,    -1,    -1,    96,    -1,    -1,    99,    -1,   101,   102,
      -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,    -1,
      -1,    86,    -1,    -1,     5,     6,    91,    -1,    93,    -1,
      -1,    96,    -1,    -1,    99,    -1,   101,   102,    19,    -1,
     105,    -1,    23,    -1,    -1,    26,    27,    -1,    -1,    30,
      31,    32,    33,    -1,    35,    36,    37,    -1,    39,    40,
      41,    42,     5,     6,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    -1,    -1,    19,    -1,    -1,    -1,
      23,    -1,    -1,    26,    27,    -1,    -1,    30,    31,    32,
      33,    -1,    35,    36,    37,    -1,    39,    40,    41,    42,
      -1,    82,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      91,    54,    93,    -1,    -1,    96,    -1,    -1,    99,    -1,
     101,   102,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    86,    -1,     5,     6,    -1,    91,    -1,
      93,    -1,    -1,    96,    -1,    -1,    99,    -1,   101,   102,
      -1,    -1,   105,    23,    -1,    -1,    26,    27,    -1,    -1,
      30,    31,    32,    33,    -1,    35,    36,    37,    -1,    39,
      40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    86,    -1,     5,     6,
      -1,    91,    92,    93,    -1,    -1,    96,    -1,    -1,    99,
      -1,   101,   102,    -1,    -1,   105,    23,    -1,    -1,    26,
      27,    -1,    -1,    30,    31,    32,    33,    -1,    35,    36,
      37,    -1,    39,    40,    41,    42,     5,     6,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    26,    27,    -1,
      -1,    30,    31,    32,    33,    -1,    35,    36,    37,    -1,
      39,    40,    41,    42,    -1,    82,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    91,    54,    93,    94,    -1,    96,
      -1,    -1,    99,    -1,   101,   102,    -1,    -1,   105,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    87,     5,
       6,    -1,    91,    -1,    93,    -1,    -1,    96,    -1,    -1,
      99,    -1,   101,   102,    -1,    -1,   105,    23,    -1,    -1,
      26,    27,    -1,    -1,    30,    31,    32,    33,    -1,    35,
      36,    37,    -1,    39,    40,    41,    42,     5,     6,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    26,    27,
      -1,    -1,    30,    31,    32,    33,    -1,    35,    36,    37,
      -1,    39,    40,    41,    42,    -1,    82,    -1,    -1,    -1,
      86,    87,    -1,    -1,    -1,    91,    54,    93,    -1,    -1,
      96,    -1,    -1,    99,    -1,   101,   102,    -1,    -1,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    -1,
       5,     6,    -1,    91,    -1,    93,    -1,    -1,    96,    -1,
      -1,    99,    -1,   101,   102,    -1,    -1,   105,    23,    -1,
      -1,    26,    27,    -1,    -1,    30,    31,    32,    33,    -1,
      35,    36,    37,    -1,    39,    40,    41,    42,     5,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    26,
      27,    -1,    -1,    30,    31,    32,    33,    -1,    35,    36,
      37,    -1,    39,    40,    41,    42,    -1,    82,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    91,    54,    93,    -1,
      -1,    96,    -1,    -1,    99,    -1,   101,   102,    -1,    -1,
     105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    91,    -1,    93,    -1,    -1,    96,
      -1,    -1,    99,    -1,   101,   102,    -1,    -1,   105
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,   108,     4,     0,     5,     7,     9,    53,   109,
     110,   112,   122,   141,   145,   154,     6,    91,   111,   113,
     211,     6,    91,   156,   214,    91,   143,   214,     6,    91,
     147,   148,   149,    85,    92,   212,   213,   214,    93,   150,
     210,   211,     6,   170,    95,    92,   155,   156,     5,     6,
      23,    26,    27,    54,    70,    86,    91,    93,    96,   195,
     198,   199,   200,   203,   208,   209,   215,   221,   222,   223,
      92,   142,   143,    70,   144,   195,    70,    93,   150,   195,
      92,   146,   147,   195,    92,    95,    95,    85,   195,   151,
     152,   214,   210,    87,   187,    91,   195,   211,   210,   214,
      92,   155,   210,    90,    93,    87,    86,   195,   202,    87,
       5,     6,    30,    31,    32,    33,    35,    36,    37,    39,
      40,    41,    42,    82,    86,    91,    93,    96,    99,   101,
     102,   105,   164,   165,   166,   167,   168,   169,   171,   172,
     173,   174,   175,   182,   183,   184,   185,   186,   194,   195,
     198,   200,   203,   221,   222,    27,   195,    94,   164,   201,
     195,    70,    93,   196,    92,   142,   194,    70,   195,     6,
     195,    92,   146,    92,   212,   195,    94,    95,   106,   153,
     195,   219,   220,   187,    11,    13,    15,    17,    18,    21,
      22,    24,    25,    28,    29,   114,   115,   121,   122,   123,
     124,   125,   126,   127,   129,   135,   136,   137,   157,   158,
     159,   160,   161,   162,   163,   164,   187,   188,   194,   214,
       6,   187,   198,   195,     6,    88,   216,   217,   218,   219,
      27,   202,    88,    96,   198,   204,   205,   207,   214,   210,
      90,   165,   165,   164,   195,    85,   165,   195,   165,   165,
     165,   165,    95,    90,    91,    93,   189,   190,   191,   192,
     193,    90,    87,   176,    91,   196,   202,    92,   202,    94,
     194,   195,   197,   194,   151,   195,   100,   157,   164,    87,
     157,   164,    19,    83,   116,   117,   119,   120,   157,   164,
     187,   194,   214,     6,   128,    87,   194,   164,   128,   128,
     164,    86,    71,    72,    88,   114,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    81,    94,
     210,    88,   216,   202,   198,   196,    88,   204,    32,   206,
     195,   187,   182,    92,    94,   194,     6,    91,    92,   194,
     195,    89,   164,   170,     6,    88,   164,   176,   177,   178,
     179,   180,   181,    92,   194,   202,    95,    94,    95,   219,
      83,   187,    14,    16,   138,   139,   140,    83,    87,   164,
      83,   116,   164,   187,    83,   187,   187,    70,    81,    14,
      16,    88,   130,   131,   132,   164,   194,   194,   194,   194,
     194,   194,   194,   194,   194,   194,   194,   194,   194,   202,
     196,   206,   202,   195,    85,    92,    95,    85,    92,    95,
      94,   164,    89,    94,    95,    88,    95,    95,    89,    92,
     197,    94,   164,    12,   194,    88,   138,    89,    87,   164,
     138,   118,   157,    83,    83,   116,    19,    19,   133,   134,
     160,   164,   194,   214,    88,   131,    89,    92,    92,    92,
      92,    92,   194,    89,    94,    94,   164,    94,    88,   177,
     164,   176,   181,   187,   135,   187,   188,   138,    87,    88,
     118,   118,    83,   164,   164,    70,    81,   188,    92,   164,
      89,    94,    12,    88,   138,   118,   134,   164,   134,    94,
     164,   135,   187,    88,    94
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
     157,   157,   157,   157,   157,   158,   159,   160,   161,   162,
     162,   163,   163,   163,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   164,   165,   165,   165,   165,   165,   165,
     165,   165,   166,   166,   166,   166,   166,   166,   166,   166,
     167,   167,   168,   169,   170,   171,   171,   171,   172,   172,
     172,   173,   173,   173,   173,   173,   173,   173,   174,   175,
     175,   175,   175,   175,   175,   175,   176,   176,   176,   177,
     177,   178,   178,   179,   179,   179,   180,   181,   181,   182,
     182,   183,   183,   183,   183,   184,   185,   185,   186,   187,
     188,   188,   189,   190,   190,   191,   191,   191,   191,   191,
     191,   192,   193,   193,   193,   193,   193,   193,   193,   193,
     194,   194,   195,   195,   195,   195,   196,   196,   197,   197,
     198,   198,   199,   199,   199,   199,   199,   199,   199,   199,
     200,   201,   202,   203,   203,   204,   204,   205,   205,   205,
     205,   206,   207,   207,   207,   207,   208,   209,   210,   210,
     210,   211,   211,   211,   212,   212,   213,   213,   213,   213,
     214,   214,   215,   215,   216,   216,   217,   217,   218,   219,
     219,   220,   220,   221,   222,   223,   223,   223
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
       1,     1,     1,     1,     1,     3,     0,     3,     1,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     2,     2,     2,     2,     2,
       2,     2,     1,     2,     1,     1,     2,     2,     2,     2,
       4,     3,     3,     1,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     4,     1,     1,     1,     2,     4,     3,     2,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       2,     1,     2,     3,     4,     5,     4,     4,     3,     7,
       6,     4,     3,     4,     4,     4,     4,     3,     5,     2,
       3,     1,     1,     1,     2,     3,     3,     4,     3,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     1,     1,     4,     3,     2,     1,     3,     2,     2,
       1,     1,     3,     2,     2,     1,     2,     2,     2,     1,
       2,     3,     2,     4,     3,     1,     3,     2,     1,     2,
       1,     3,     4,     3,     2,     1,     1,     1,     2,     3,
       1,     1,     2,     3,     5,     2,     3,     3
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
#line 27 "lab2.yacc"
                      {printf("Find package and import\n");}
#line 2306 "y.tab.c"
    break;

  case 79: /* ExprSwitchStmt: SWITCH SimpleStmt SEMICOLON '{' ExprCaseClauseList '}'  */
#line 141 "lab2.yacc"
                                                                                 {printf("simplestmt\n");}
#line 2312 "y.tab.c"
    break;


#line 2316 "y.tab.c"

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

#line 498 "lab2.yacc"


int main(int argc, char *argv[])
{
    yyin = fopen(argv[1], "r");
	yyparse();
        fclose(yyin);
	if(error_ == 0)
		printf("OK\n");
        
}
