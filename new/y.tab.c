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
  YYSYMBOL_100_ = 100,                     /* '-'  */
  YYSYMBOL_101_ = 101,                     /* '|'  */
  YYSYMBOL_102_ = 102,                     /* '+'  */
  YYSYMBOL_103_ = 103,                     /* '<'  */
  YYSYMBOL_104_ = 104,                     /* '>'  */
  YYSYMBOL_105_ = 105,                     /* '!'  */
  YYSYMBOL_106_ = 106,                     /* '~'  */
  YYSYMBOL_YYACCEPT = 107,                 /* $accept  */
  YYSYMBOL_prog = 108,                     /* prog  */
  YYSYMBOL_TopLevelDecl = 109,             /* TopLevelDecl  */
  YYSYMBOL_FunctionDecl = 110,             /* FunctionDecl  */
  YYSYMBOL_MethodDecl = 111,               /* MethodDecl  */
  YYSYMBOL_Receiver = 112,                 /* Receiver  */
  YYSYMBOL_Statement = 113,                /* Statement  */
  YYSYMBOL_ForStmt = 114,                  /* ForStmt  */
  YYSYMBOL_ForClause = 115,                /* ForClause  */
  YYSYMBOL_InitStmt = 116,                 /* InitStmt  */
  YYSYMBOL_Condition = 117,                /* Condition  */
  YYSYMBOL_PostStmt = 118,                 /* PostStmt  */
  YYSYMBOL_RangeClause = 119,              /* RangeClause  */
  YYSYMBOL_DeferStmt = 120,                /* DeferStmt  */
  YYSYMBOL_Declaration = 121,              /* Declaration  */
  YYSYMBOL_GoStmt = 122,                   /* GoStmt  */
  YYSYMBOL_ReturnStmt = 123,               /* ReturnStmt  */
  YYSYMBOL_BreakStmt = 124,                /* BreakStmt  */
  YYSYMBOL_ContinueStmt = 125,             /* ContinueStmt  */
  YYSYMBOL_GotoStmt = 126,                 /* GotoStmt  */
  YYSYMBOL_Label = 127,                    /* Label  */
  YYSYMBOL_SelectStmt = 128,               /* SelectStmt  */
  YYSYMBOL_CommClauseList = 129,           /* CommClauseList  */
  YYSYMBOL_CommClause = 130,               /* CommClause  */
  YYSYMBOL_CommCase = 131,                 /* CommCase  */
  YYSYMBOL_RecvStmt = 132,                 /* RecvStmt  */
  YYSYMBOL_IfStmt = 133,                   /* IfStmt  */
  YYSYMBOL_SwitchStmt = 134,               /* SwitchStmt  */
  YYSYMBOL_ExprSwitchStmt = 135,           /* ExprSwitchStmt  */
  YYSYMBOL_ExprCaseClauseList = 136,       /* ExprCaseClauseList  */
  YYSYMBOL_ExprCaseClause = 137,           /* ExprCaseClause  */
  YYSYMBOL_ExprSwitchCase = 138,           /* ExprSwitchCase  */
  YYSYMBOL_ConstDecl = 139,                /* ConstDecl  */
  YYSYMBOL_ConstSpecList = 140,            /* ConstSpecList  */
  YYSYMBOL_ConstSpec = 141,                /* ConstSpec  */
  YYSYMBOL_ConstExpr = 142,                /* ConstExpr  */
  YYSYMBOL_TypeDecl = 143,                 /* TypeDecl  */
  YYSYMBOL_TypeSpecList = 144,             /* TypeSpecList  */
  YYSYMBOL_TypeSpec = 145,                 /* TypeSpec  */
  YYSYMBOL_AliasDecl = 146,                /* AliasDecl  */
  YYSYMBOL_TypeDef = 147,                  /* TypeDef  */
  YYSYMBOL_TypeParameters = 148,           /* TypeParameters  */
  YYSYMBOL_TypeParamList = 149,            /* TypeParamList  */
  YYSYMBOL_TypeParamDecl = 150,            /* TypeParamDecl  */
  YYSYMBOL_TypeConstraint = 151,           /* TypeConstraint  */
  YYSYMBOL_VarDecl = 152,                  /* VarDecl  */
  YYSYMBOL_VarSpecList = 153,              /* VarSpecList  */
  YYSYMBOL_VarSpec = 154,                  /* VarSpec  */
  YYSYMBOL_SimpleStmt = 155,               /* SimpleStmt  */
  YYSYMBOL_EmptyStatement = 156,           /* EmptyStatement  */
  YYSYMBOL_SendStmt = 157,                 /* SendStmt  */
  YYSYMBOL_Channel = 158,                  /* Channel  */
  YYSYMBOL_IncDecStmt = 159,               /* IncDecStmt  */
  YYSYMBOL_Assignment = 160,               /* Assignment  */
  YYSYMBOL_Expression = 161,               /* Expression  */
  YYSYMBOL_binary_op = 162,                /* binary_op  */
  YYSYMBOL_mul_op = 163,                   /* mul_op  */
  YYSYMBOL_add_op = 164,                   /* add_op  */
  YYSYMBOL_rel_op = 165,                   /* rel_op  */
  YYSYMBOL_UnaryExpr = 166,                /* UnaryExpr  */
  YYSYMBOL_PrimaryExpr = 167,              /* PrimaryExpr  */
  YYSYMBOL_Operand = 168,                  /* Operand  */
  YYSYMBOL_BasicLit = 169,                 /* BasicLit  */
  YYSYMBOL_CompositeLit = 170,             /* CompositeLit  */
  YYSYMBOL_LiteralValue = 171,             /* LiteralValue  */
  YYSYMBOL_ElementList = 172,              /* ElementList  */
  YYSYMBOL_KeyedElement = 173,             /* KeyedElement  */
  YYSYMBOL_Key = 174,                      /* Key  */
  YYSYMBOL_Element = 175,                  /* Element  */
  YYSYMBOL_int_lit = 176,                  /* int_lit  */
  YYSYMBOL_imaginary_lit = 177,            /* imaginary_lit  */
  YYSYMBOL_float_lit = 178,                /* float_lit  */
  YYSYMBOL_FunctionLit = 179,              /* FunctionLit  */
  YYSYMBOL_Block = 180,                    /* Block  */
  YYSYMBOL_Statements = 181,               /* Statements  */
  YYSYMBOL_Selector = 182,                 /* Selector  */
  YYSYMBOL_Slice = 183,                    /* Slice  */
  YYSYMBOL_ExpressionList = 184,           /* ExpressionList  */
  YYSYMBOL_Type = 185,                     /* Type  */
  YYSYMBOL_TypeArgs = 186,                 /* TypeArgs  */
  YYSYMBOL_TypeList = 187,                 /* TypeList  */
  YYSYMBOL_TypeName = 188,                 /* TypeName  */
  YYSYMBOL_ArrayType = 189,                /* ArrayType  */
  YYSYMBOL_StructType = 190,               /* StructType  */
  YYSYMBOL_DeclList = 191,                 /* DeclList  */
  YYSYMBOL_FieldDecl = 192,                /* FieldDecl  */
  YYSYMBOL_EmbeddedField = 193,            /* EmbeddedField  */
  YYSYMBOL_FunctionType = 194,             /* FunctionType  */
  YYSYMBOL_Signature = 195,                /* Signature  */
  YYSYMBOL_Parameters = 196,               /* Parameters  */
  YYSYMBOL_ParameterList = 197,            /* ParameterList  */
  YYSYMBOL_ParameterDecl = 198,            /* ParameterDecl  */
  YYSYMBOL_IdentifierList = 199,           /* IdentifierList  */
  YYSYMBOL_InterfaceType = 200,            /* InterfaceType  */
  YYSYMBOL_InterfaceElemList = 201,        /* InterfaceElemList  */
  YYSYMBOL_InterfaceElem = 202,            /* InterfaceElem  */
  YYSYMBOL_TypeElem = 203,                 /* TypeElem  */
  YYSYMBOL_TypeTerm = 204,                 /* TypeTerm  */
  YYSYMBOL_SliceType = 205,                /* SliceType  */
  YYSYMBOL_MapType = 206,                  /* MapType  */
  YYSYMBOL_ChannelType = 207               /* ChannelType  */
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
#define YYLAST   2800

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  107
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  101
/* YYNRULES -- Number of rules.  */
#define YYNRULES  298
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  513

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
      91,    92,    96,   102,    95,   100,    90,    97,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    89,     2,
     103,     2,   104,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    93,     2,    94,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    87,   101,    88,   106,     2,     2,     2,
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
       0,    29,    29,    30,    33,    34,    35,    37,    38,    39,
      40,    42,    43,    45,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    64,    65,    66,
      67,    70,    73,    74,    76,    77,    79,    80,    83,    84,
      85,    87,    89,    90,    91,    93,    95,    96,    99,   100,
     102,   103,   105,   106,   108,   110,   111,   113,   114,   115,
     116,   117,   118,   120,   121,   122,   126,   127,   128,   129,
     130,   131,   136,   140,   141,   142,   143,   145,   146,   148,
     149,   149,   164,   165,   166,   168,   169,   170,   171,   173,
     174,   177,   178,   179,   181,   182,   183,   183,   185,   189,
     191,   192,   193,   195,   196,   198,   200,   203,   204,   205,
     207,   208,   209,   210,   211,   214,   215,   216,   217,   218,
     222,   224,   225,   227,   228,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   245,
     246,   249,   250,   251,   252,   253,   255,   256,   257,   258,
     259,   260,   261,   263,   264,   265,   266,   268,   269,   270,
     271,   272,   273,   276,   277,   278,   279,   280,   281,   282,
     283,   286,   287,   288,   289,   290,   291,   292,   294,   295,
     296,   300,   301,   302,   305,   306,   307,   308,   309,   311,
     313,   314,   315,   316,   317,   318,   319,   321,   322,   323,
     325,   326,   328,   331,   334,   335,   336,   339,   340,   342,
     343,   345,   346,   347,   351,   352,   355,   356,   357,   358,
     361,   362,   363,   366,   368,   370,   371,   374,   377,   378,
     379,   380,   381,   382,   398,   399,   401,   402,   405,   406,
     407,   408,   409,   410,   411,   412,   413,   415,   416,   418,
     419,   421,   422,   426,   427,   430,   431,   433,   434,   436,
     437,   438,   439,   441,   442,   443,   444,   451,   453,   454,
     455,   456,   457,   459,   460,   461,   464,   465,   467,   468,
     469,   470,   473,   474,   477,   478,   480,   481,   483,   484,
     486,   487,   491,   492,   496,   499,   504,   505,   506
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
  "']'", "','", "'*'", "'/'", "'%'", "'&'", "'-'", "'|'", "'+'", "'<'",
  "'>'", "'!'", "'~'", "$accept", "prog", "TopLevelDecl", "FunctionDecl",
  "MethodDecl", "Receiver", "Statement", "ForStmt", "ForClause",
  "InitStmt", "Condition", "PostStmt", "RangeClause", "DeferStmt",
  "Declaration", "GoStmt", "ReturnStmt", "BreakStmt", "ContinueStmt",
  "GotoStmt", "Label", "SelectStmt", "CommClauseList", "CommClause",
  "CommCase", "RecvStmt", "IfStmt", "SwitchStmt", "ExprSwitchStmt",
  "ExprCaseClauseList", "ExprCaseClause", "ExprSwitchCase", "ConstDecl",
  "ConstSpecList", "ConstSpec", "ConstExpr", "TypeDecl", "TypeSpecList",
  "TypeSpec", "AliasDecl", "TypeDef", "TypeParameters", "TypeParamList",
  "TypeParamDecl", "TypeConstraint", "VarDecl", "VarSpecList", "VarSpec",
  "SimpleStmt", "EmptyStatement", "SendStmt", "Channel", "IncDecStmt",
  "Assignment", "Expression", "binary_op", "mul_op", "add_op", "rel_op",
  "UnaryExpr", "PrimaryExpr", "Operand", "BasicLit", "CompositeLit",
  "LiteralValue", "ElementList", "KeyedElement", "Key", "Element",
  "int_lit", "imaginary_lit", "float_lit", "FunctionLit", "Block",
  "Statements", "Selector", "Slice", "ExpressionList", "Type", "TypeArgs",
  "TypeList", "TypeName", "ArrayType", "StructType", "DeclList",
  "FieldDecl", "EmbeddedField", "FunctionType", "Signature", "Parameters",
  "ParameterList", "ParameterDecl", "IdentifierList", "InterfaceType",
  "InterfaceElemList", "InterfaceElem", "TypeElem", "TypeTerm",
  "SliceType", "MapType", "ChannelType", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-405)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-296)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      47,    63,   158,  -405,  -405,    13,    17,    37,    38,  -405,
    -405,  -405,  -405,  -405,  -405,  -405,    57,    26,    69,  -405,
      -8,    30,  -405,   147,    31,  -405,   570,   -41,    35,  -405,
    -405,  -405,    87,     6,    14,   649,  1144,  -405,    84,    43,
     623,     6,    87,  -405,    51,    87,     6,    59,    75,    85,
    1869,    91,  2023,   129,  1144,  1281,  1144,   110,  -405,  -405,
    -405,  -405,  -405,  -405,  -405,    94,    87,  2023,  -405,   118,
    1144,  1144,  -405,   112,   196,    39,   120,     4,    14,   992,
    -405,   282,  -405,  -405,  -405,   130,    22,  1144,  -405,    14,
    -405,  -405,  -405,  -405,   212,  1144,     3,    34,  -405,    24,
       6,   134,   135,  -405,  -405,  -405,  -405,  -405,  -405,  -405,
    -405,  -405,  -405,  -405,  2023,  2023,  1359,  2023,  1160,  2023,
    2023,  2023,  2023,  2023,  2696,  -405,   101,  -405,  -405,  -405,
    -405,  -405,  -405,  -405,  -405,   136,   142,   142,   142,   142,
    1144,   143,  1144,  2408,  -405,  2023,  -405,  -405,   136,  2023,
    -405,  -405,  -405,  -405,  -405,   140,    87,  -405,  1144,  -405,
    -405,   138,  -405,   -24,  2101,  2139,  -405,  1397,   230,   154,
    2023,  2023,   230,   230,  2023,   782,  -405,  -405,  -405,  -405,
    -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,
    -405,  -405,   151,  -405,  -405,  2310,  -405,   891,   695,    -2,
      92,  -405,   103,  -405,  -405,  -405,  -405,  -405,   152,     6,
    -405,   159,    15,  -405,  -405,    10,  -405,   243,   157,   163,
      18,   220,  1144,    14,   247,  -405,  1144,  -405,  -405,   106,
    -405,  2536,  -405,     1,  -405,   165,  -405,   105,   161,  -405,
    -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,
    -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,
    -405,  -405,  -405,  2023,  -405,  -405,  -405,    40,  1030,  1475,
    -405,  -405,  2023,  -405,  -405,  -405,  -405,  -405,  -405,  -405,
    1144,   162,   136,   136,  -405,  -405,  -405,     4,   175,  2190,
    1122,   177,  2344,  2023,    14,   179,    14,  -405,  2190,  -405,
     714,    66,  -405,  -405,    49,   136,  2696,  -405,  -405,  2696,
     -24,  2264,  2023,  -405,  -405,  -405,  -405,  2023,  2023,  2023,
    2023,  2023,  2023,  2023,  2023,  2023,  2023,  2023,  2023,  2023,
    2023,  -405,   171,  1144,  -405,  -405,  -405,   243,   174,   157,
    1144,  -405,  -405,  -405,  -405,   233,  -405,  -405,   172,  -405,
    1513,  2023,  -405,  1144,  2696,  -405,  1144,     6,   123,   176,
    1597,  1243,  -405,  1243,     7,   124,   142,   142,   142,  1635,
    2376,  2696,  -405,  1144,  -405,  2023,   256,  2023,  -405,   182,
     150,   183,  2217,   150,  2696,  -405,  2023,  -405,  -405,  1713,
    1751,  2101,  -405,  -405,    74,  -405,   185,  2696,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,  -405,  -405,  -405,  -405,   180,   114,  -405,  1144,
    -405,  -405,  2696,  -405,  -405,   142,   184,    14,   265,  1144,
     189,  -405,  1829,  -405,  1907,  -405,  2440,  1985,  -405,   190,
    -405,  2568,    45,   136,  -405,  -405,   992,  1122,  2600,   195,
     202,  2696,  2023,  2023,  -405,  -405,  2472,   -44,   208,  -405,
    -405,   992,  1144,  -405,   198,  -405,  -405,  -405,  -405,   200,
    -405,  -405,  -405,   128,  2023,  -405,  -405,  2504,  -405,   284,
    -405,  -405,   992,   210,   150,  -405,  2101,  2696,  2696,  2023,
    2023,   992,  -405,  -405,  1144,  -405,  2632,  2023,  -405,    45,
    -405,   211,  -405,  -405,  2696,  2696,   215,  -405,  2664,  -405,
    -405,  -405,  -405
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     0,     0,     2,     1,     0,     0,     0,     0,     3,
       5,     6,     4,    42,    43,    44,     0,     0,     0,    12,
     282,     0,   107,     0,     0,    82,    88,   102,     0,    91,
      96,    97,     0,     0,     9,   272,     0,   274,     0,   277,
     280,     0,     0,   109,     0,   111,     0,   236,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   112,   240,   242,
     243,   244,   245,   246,    84,     0,    86,     0,    87,     0,
       0,     0,    93,     0,    95,     0,   104,     0,    10,   120,
       8,     0,   271,   281,   273,     0,     0,     0,   279,     0,
     283,   108,   110,   267,     0,     0,     0,     0,   296,     0,
       0,   185,     0,   219,   194,   195,   196,   218,   217,   216,
     221,   222,   193,   220,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   235,   139,   163,   171,   186,   187,
     197,   190,   192,   191,   188,   114,     0,     0,     0,     0,
       0,     0,     0,     0,   241,     0,    83,    85,    90,     0,
      98,    99,    92,    94,   100,     0,     0,   292,     0,   105,
     106,   291,     7,   185,   120,   120,    20,    33,    49,     0,
      47,     0,    53,    51,     0,     0,   226,    25,    26,    13,
      15,    16,    17,    18,    19,    24,    22,    23,    72,    14,
     119,   117,     0,   118,   115,   116,    21,     0,     0,     0,
     282,   269,     0,   275,   276,   278,    11,   237,     0,   292,
     285,     0,   287,   289,   297,   282,   256,     0,   266,     0,
     258,   262,     0,     0,     0,   203,     0,   167,   170,   185,
     206,   214,   197,     0,   208,     0,   210,     0,     0,   168,
     169,   165,   164,   166,   157,   158,   162,   161,   142,   141,
     149,   150,   154,   152,   146,   147,   148,   151,   153,   155,
     156,   159,   160,     0,   145,   144,   143,     0,     0,     0,
     181,   182,     0,   199,   198,   201,   202,   298,   238,   294,
       0,     0,   113,    89,   101,   103,   293,     0,     0,   235,
       0,     0,   235,     0,     0,     0,     0,    32,   235,    30,
       0,     0,    54,    48,     0,    46,    45,    52,    50,    41,
     185,   116,     0,   123,   124,   224,   225,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   268,     0,     0,   288,   284,   286,     0,   251,   265,
       0,   264,   255,   257,   261,   260,   223,   184,     0,   204,
       0,     0,   189,     0,   140,   227,     0,     0,   185,     0,
       0,     0,   180,     0,     0,     0,   240,   242,   245,     0,
       0,   234,   253,     0,   290,     0,    69,     0,    81,     0,
      78,     0,     0,     0,    40,    28,    35,    29,    27,     0,
       0,     0,    62,    56,     0,    58,     0,   121,   128,   130,
     138,   135,   131,   129,   132,   133,   134,   137,   136,   127,
     126,   125,   270,   239,   252,   263,   250,     0,   259,     0,
     205,   207,   214,   197,   209,     0,     0,   267,     0,     0,
       0,   174,     0,   178,     0,   231,     0,     0,   172,     0,
     254,     0,     0,    80,    76,    77,   120,     0,     0,     0,
       0,    34,     0,     0,    61,    60,   235,     0,     0,    55,
      57,   120,     0,   247,     0,   295,   200,   183,   184,     0,
     176,   175,   177,     0,     0,   229,   230,     0,   173,    68,
      70,    71,    79,     0,     0,    75,     0,    38,    39,     0,
       0,    59,   249,   248,     0,   179,     0,     0,   228,     0,
      74,     0,    31,    36,    63,    64,   239,   233,     0,    66,
      67,    73,   232
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -405,  -405,  -405,  -405,  -405,  -405,  -196,  -405,  -405,  -405,
    -405,  -405,  -405,  -405,   301,  -405,  -405,  -405,  -405,  -405,
      54,  -405,  -405,   -90,  -405,  -405,  -404,  -405,  -405,  -369,
    -405,  -405,  -405,   240,   300,  -405,  -405,   237,   305,  -405,
    -405,   287,   164,  -405,  -405,  -405,   270,   312,  -159,  -405,
     -72,  -405,  -405,  -405,   126,  -405,  -405,  -405,  -405,   -38,
    -405,  -405,  -405,  -405,   482,  -405,   -29,  -405,   -25,  -405,
    -405,  -405,  -405,   -16,  -401,  -405,  -405,   362,   119,   -15,
    -134,  -213,   -23,    -1,   109,  -405,  -405,  -405,   -26,   329,
     -27,  -405,   481,  -405,   125,  -405,   -75,  -405,    90,  -405,
    -405
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     9,    10,    11,    18,   176,   177,   294,   295,
     450,   502,   296,   178,   179,   180,   181,   182,   183,   184,
     303,   185,   394,   395,   396,   454,   186,   187,   188,   379,
     380,   381,    13,    65,    66,    68,    14,    73,    74,    30,
      31,    33,    75,    76,   159,    15,    44,    45,   189,   190,
     191,   192,   193,   194,   124,   263,   264,   265,   266,   125,
     126,   127,   128,   129,   130,   233,   234,   235,   236,   131,
     132,   133,   134,   196,   197,   270,   271,   198,   141,   341,
     417,   218,   136,   137,   219,   220,   221,    60,    34,    35,
      38,    39,   199,    61,   211,   212,   213,   161,   138,   139,
      63
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      58,   316,   160,    58,   339,   288,   291,    78,   297,   209,
     157,   445,    58,    58,   449,    89,  -251,    58,    80,    16,
      93,   209,    59,    20,   215,    59,   489,    58,    20,    70,
     215,    58,    20,    58,    59,    59,    20,    20,   480,    59,
     214,    27,  -251,    20,    27,   482,   355,    58,    58,    59,
       1,   272,    32,    59,   202,    59,   164,  -282,    58,   204,
     491,   140,   162,   391,    58,   392,   224,     3,   329,    59,
      59,    42,    58,   206,   223,    41,   227,   228,   483,   330,
      59,   239,   240,   241,   242,   243,    59,    42,   391,   349,
     392,   210,   430,    20,    59,   509,   350,    17,  -251,   431,
     337,    79,   432,  -251,    17,    42,  -251,    36,    21,   158,
     158,    36,   216,    62,   217,   501,    62,    58,    37,    58,
     217,   158,    43,    64,   414,    62,    62,    72,    24,    28,
      62,   356,    79,   154,   155,    58,   329,   393,    86,    59,
      62,    59,    57,    91,    62,    69,    62,   390,    17,    94,
      32,   299,    46,    47,    82,    83,   140,    59,     4,    88,
      62,    62,   459,     5,   377,     6,   378,     7,    95,    98,
      48,    62,    96,    49,    50,   144,    84,    62,    99,    85,
     145,   143,    94,   334,  -236,    62,   146,    42,   149,   150,
     151,   267,   268,   116,   269,   331,   224,   352,   332,    58,
     272,    51,    27,    58,   152,   195,   205,   346,   463,   464,
     116,     8,   374,   428,   208,   156,   433,    52,   207,   434,
     495,    59,   203,   272,   224,    59,   307,   308,   226,   116,
      62,   272,    62,    53,   284,   278,   302,   312,    54,   287,
      55,   304,   231,    56,   143,   366,   333,   335,    62,   338,
     340,   342,   344,   347,   351,   353,   373,    58,   375,   277,
     382,   279,   386,   412,   337,   418,   419,   367,   442,   429,
     444,   468,   446,   376,   461,   462,   467,   286,   385,    59,
     387,   470,   388,   485,   478,   486,   316,    46,   200,   490,
     289,   292,   493,   298,   494,   316,   499,   306,   500,   511,
     309,   311,  -295,    12,   460,    48,   147,    25,    49,    50,
      58,   153,    62,    29,    71,    92,    62,    58,    22,   455,
     285,   421,   228,   195,   415,   239,   424,   503,   492,   343,
      58,   427,    59,    58,    19,     0,    51,   336,   366,    59,
     366,   345,     0,     0,     0,   348,     0,     0,     0,     0,
      58,     0,    59,     0,     0,    59,     0,     0,   368,     0,
     367,     0,   367,     0,     0,     0,     0,    36,    53,     0,
      62,     0,    59,    54,   201,    55,     0,     0,    56,     0,
       0,     0,     0,     0,     0,     0,     0,   365,     0,   354,
       0,     0,     0,     0,     0,   370,    58,     0,   371,   372,
       0,     0,     0,     0,     0,     0,    58,     0,     0,     0,
       0,   346,     0,     0,   135,     0,   231,     0,    59,   384,
       0,     0,     0,    62,     0,   479,   481,     0,    59,   148,
      62,     0,     0,     0,     0,     0,     0,     0,   397,    58,
       0,     0,     0,    62,     0,     0,    62,     0,     0,     0,
       0,   368,   413,   368,     0,     0,     0,     0,     0,   416,
       0,    59,     0,    62,     0,     0,     0,     0,     0,     0,
       0,    58,   425,     0,     0,   426,   231,   422,     0,   237,
       0,     0,   144,   510,     0,     0,     0,    23,    26,     0,
       0,     0,   440,    59,     0,   436,     0,     0,    40,     0,
       0,   441,    23,     0,     0,    26,     0,   282,   448,    62,
       0,   283,   451,    77,     0,     0,     0,   456,     0,    62,
       0,     0,     0,    90,     0,     0,    23,     0,     0,   300,
       0,     0,   305,     0,     0,     0,     0,     0,   465,     0,
       0,     0,     0,     0,     0,     0,     0,    26,   469,     0,
       0,     0,    62,     0,     0,     0,     0,     0,   371,     0,
       0,     0,    40,   477,     0,     0,     0,    40,     0,     0,
       0,     0,   195,   231,     0,    46,    47,     0,   487,   488,
     222,   416,     0,   225,    62,     0,     0,   195,     0,     0,
       0,     0,     0,    48,     0,     0,    49,    50,   232,     0,
     496,     0,     0,     0,     0,     0,     0,     0,   195,     0,
       0,     0,   195,   506,     0,   504,   505,   195,   273,   274,
     275,   276,     0,   508,    51,     0,     0,     0,    46,    47,
     364,     0,     0,     0,     0,     0,     0,    77,     0,     0,
      67,     0,     0,     0,     0,   225,    48,     0,   301,    49,
      50,     0,     0,     0,    46,    47,    53,   232,     0,     0,
       0,    54,     0,    55,     0,     0,    56,     0,     0,     0,
       0,     0,    48,     0,     0,    49,    50,    51,     0,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
     409,   410,   411,     0,     0,     0,     0,     0,     0,     0,
       0,   222,     0,    51,     0,     0,     0,     0,    87,    53,
       0,   225,     0,     0,    54,     0,    55,     0,     0,    56,
       0,     0,     0,   237,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    53,     0,     0,     0,   443,
      81,     0,    55,     0,     0,    56,     0,     0,     0,     0,
       0,   409,   411,   457,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,     0,     0,     0,     0,
       0,     0,   232,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   389,     0,     0,   100,   310,     6,
     272,     7,   225,   164,     0,   165,   473,   166,     0,   167,
     168,     0,     0,   169,   170,   102,   171,   172,     0,   272,
     173,   174,   103,   104,   105,   106,     0,   107,   108,   109,
       0,   110,   111,   112,   113,     0,     0,     0,     0,     0,
       0,     0,   232,   423,     0,     8,    51,     0,     0,     0,
     225,     0,     0,     0,     0,     0,     0,     0,   273,   274,
     275,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   114,     0,     0,     0,   115,   175,
     230,     0,   458,   117,     0,   118,     0,     0,   119,     0,
       0,   120,   121,     0,   122,     0,     0,   123,     0,     0,
       0,     0,     0,     0,     0,     0,   100,   163,     6,     0,
       7,     0,   164,     0,   165,     0,   166,   466,   167,   168,
       0,     0,   169,   170,   102,   171,   172,     0,     0,   173,
     174,   103,   104,   105,   106,     0,   107,   108,   109,   232,
     110,   111,   112,   113,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     8,    51,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   114,     0,     0,     0,   115,   175,   315,
       0,     0,   117,     0,   118,     0,     0,   119,     0,     0,
     120,   121,     0,   122,     0,     0,   123,   100,   163,     6,
       0,     7,     0,   164,     0,   165,     0,   166,     0,   167,
     168,     0,     0,   169,   170,   102,   171,   172,     0,     0,
     173,   174,   103,   104,   105,   106,     0,   107,   108,   109,
       0,   110,   111,   112,   113,   357,   358,     0,     0,     0,
       0,     0,     0,     0,     0,     8,    51,     0,     0,     0,
       0,     0,     0,   359,     0,     0,    49,    50,     0,     0,
     103,   104,   105,   106,     0,   107,   108,   109,     0,   110,
     111,   112,   113,     0,   114,     0,     0,     0,   115,   175,
       0,     0,     0,   117,    51,   118,     0,     0,   119,     0,
       0,   120,   121,     0,   122,     0,     0,   123,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   114,     0,     0,     0,   360,   116,     0,     0,
       0,   361,   362,   118,     0,     0,   363,   100,   229,   120,
     121,     0,   122,     0,     0,   123,   377,     0,   378,     0,
       0,     0,     0,     0,     0,   102,     0,     0,     0,    46,
      47,     0,   103,   104,   105,   106,     0,   107,   108,   109,
       0,   110,   111,   112,   113,   100,   101,    48,     0,     0,
      49,    50,     0,     0,     0,     0,    51,     0,     0,     0,
       0,     0,     0,   102,     0,     0,     0,     0,     0,     0,
     103,   104,   105,   106,     0,   107,   108,   109,    51,   110,
     111,   112,   113,     0,   114,     0,     0,     0,   115,   116,
     230,     0,     0,   117,    51,   118,     0,     0,   119,     0,
       0,   120,   121,     0,   122,     0,     0,   123,     0,     0,
      53,     0,     0,     0,     0,    54,     0,    55,     0,     0,
      56,     0,   114,     0,     0,   238,   115,   116,   357,   358,
       0,   117,     0,   118,   142,     0,   119,     0,     0,   120,
     121,     0,   122,     0,     0,   123,   359,     0,     0,    49,
      50,     0,     0,   103,   104,   105,   106,     0,   107,   108,
     109,     0,   110,   111,   112,   113,   100,   101,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    51,     0,     0,
       0,     0,     0,     0,   102,     0,     0,     0,     0,     0,
       0,   103,   104,   105,   106,     0,   107,   108,   109,     0,
     110,   111,   112,   113,     0,   114,     0,     0,     0,   360,
     116,     0,     0,     0,   361,    51,   118,     0,     0,   363,
       0,     0,   120,   121,     0,   122,     0,     0,   123,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   114,   100,   229,     0,   115,   116,     0,
       0,     0,   117,     0,   118,   142,     0,   119,     0,     0,
     120,   121,   102,   122,     0,     0,   123,     0,     0,   103,
     104,   105,   106,     0,   107,   108,   109,     0,   110,   111,
     112,   113,   100,   163,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    51,     0,     0,   293,     0,     0,     0,
     102,     0,     0,     0,     0,     0,     0,   103,   104,   105,
     106,     0,   107,   108,   109,     0,   110,   111,   112,   113,
       0,   114,     0,     0,     0,   115,   116,   230,     0,     0,
     117,    51,   118,     0,     0,   119,     0,     0,   120,   121,
       0,   122,     0,     0,   123,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   114,
     100,   101,     0,   115,   175,     0,     0,     0,   117,     0,
     118,     0,     0,   119,     0,     0,   120,   121,   102,   122,
       0,     0,   123,     0,     0,   103,   104,   105,   106,     0,
     107,   108,   109,     0,   110,   111,   112,   113,   100,   229,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    51,
       0,     0,     0,     0,     0,     0,   102,     0,     0,     0,
       0,     0,     0,   103,   104,   105,   106,     0,   107,   108,
     109,     0,   110,   111,   112,   113,     0,   114,     0,     0,
       0,   115,   116,     0,   369,     0,   117,    51,   118,     0,
       0,   119,     0,     0,   120,   121,     0,   122,     0,     0,
     123,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   114,     0,     0,     0,   115,
     116,   420,   100,   101,   117,     0,   118,     0,     0,   119,
       0,     0,   120,   121,     0,   122,     0,     0,   123,     0,
     102,     0,     0,     0,   140,     0,     0,   103,   104,   105,
     106,     0,   107,   108,   109,     0,   110,   111,   112,   113,
     100,   101,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    51,     0,     0,     0,     0,     0,     0,   102,     0,
       0,     0,     0,     0,     0,   103,   104,   105,   106,     0,
     107,   108,   109,     0,   110,   111,   112,   113,     0,   114,
       0,     0,     0,   115,   116,     0,     0,     0,   117,    51,
     118,     0,     0,   119,     0,     0,   120,   121,     0,   122,
       0,     0,   123,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   114,   100,   101,
       0,   115,   116,     0,     0,     0,   117,     0,   118,   435,
       0,   119,   452,     0,   120,   121,   102,   122,     0,     0,
     123,     0,     0,   103,   104,   105,   106,     0,   107,   108,
     109,     0,   110,   111,   112,   113,   100,   101,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    51,     0,     0,
     453,     0,     0,     0,   102,     0,     0,     0,     0,     0,
       0,   103,   104,   105,   106,     0,   107,   108,   109,     0,
     110,   111,   112,   113,     0,   114,     0,     0,     0,   115,
     116,     0,     0,     0,   117,    51,   118,     0,     0,   119,
       0,     0,   120,   121,     0,   122,     0,     0,   123,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   114,   100,   101,     0,   115,   116,     0,
       0,     0,   117,     0,   118,     0,     0,   119,     0,     0,
     120,   121,   102,   122,     0,     0,   123,     0,     0,   103,
     104,   105,   106,     0,   107,   108,   109,     0,   110,   111,
     112,   113,     0,     0,    46,    47,     0,     0,     0,     0,
       0,     0,     0,    51,     0,     0,     0,     0,     0,     0,
       0,     0,    48,     0,     0,    49,    50,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   114,   100,   101,     0,   115,   116,     0,     0,     0,
     117,   471,   118,    51,     0,   119,     0,     0,   120,   121,
     102,   122,     0,     0,   123,     0,     0,   103,   104,   105,
     106,     0,   107,   108,   109,     0,   110,   111,   112,   113,
       0,     0,     0,     0,     0,    97,     0,     0,     0,     0,
      54,    51,    55,     0,     0,    56,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   114,
     100,   101,     0,   115,   116,     0,     0,     0,   117,   472,
     118,     0,     0,   119,     0,     0,   120,   121,   102,   122,
       0,     0,   123,     0,     0,   103,   104,   105,   106,     0,
     107,   108,   109,     0,   110,   111,   112,   113,   100,   101,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    51,
       0,     0,     0,     0,     0,     0,   102,     0,     0,     0,
       0,     0,     0,   103,   104,   105,   106,     0,   107,   108,
     109,     0,   110,   111,   112,   113,     0,   114,     0,     0,
       0,   115,   116,     0,     0,     0,   117,    51,   118,   476,
       0,   119,     0,     0,   120,   121,     0,   122,     0,     0,
     123,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   114,   100,   163,     0,   115,
     116,     0,     0,     0,   117,     0,   118,     0,     0,   119,
       0,     0,   120,   121,   102,   122,     0,     0,   123,     0,
       0,   103,   104,   105,   106,     0,   107,   108,   109,     0,
     110,   111,   112,   113,   100,   163,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    51,     0,     0,     0,     0,
       0,     0,   102,     0,     0,     0,     0,     0,     0,   103,
     104,   105,   106,     0,   107,   108,   109,     0,   110,   111,
     112,   113,     0,   114,     0,     0,     0,   115,   116,     0,
       0,     0,   117,    51,   118,     0,     0,   119,     0,     0,
     120,   121,     0,   122,     0,     0,   123,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   114,   100,   101,     0,   115,   290,     0,     0,     0,
     117,     0,   118,     0,     0,   119,     0,     0,   120,   121,
     102,   122,     0,     0,   123,     0,     0,   103,   104,   105,
     106,     0,   107,   108,   109,     0,   110,   111,   112,   113,
       0,   313,   314,   244,   245,   246,   247,   248,   249,   250,
     251,    51,   252,  -116,   253,     0,  -122,    79,     0,     0,
       0,     0,     0,     0,     0,     0,   254,   255,   256,   257,
     258,   259,   260,   261,   262,     0,     0,     0,     0,   114,
       0,     0,     0,   115,   447,     0,     0,     0,   117,     0,
     118,     0,     0,   119,     0,     0,   120,   121,     0,   122,
       0,     0,   123,  -235,  -235,  -235,  -235,  -235,  -235,  -235,
    -235,  -235,  -235,  -235,  -235,   313,   314,   244,   245,   246,
     247,   248,   249,   250,   251,     0,   252,     0,   253,     0,
       0,     0,     0,  -212,     0,     0,     0,     0,     0,  -214,
     254,   255,   256,   257,   258,   259,   260,   261,   262,  -235,
    -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,
    -235,   313,   314,   244,   245,   246,   247,   248,   249,   250,
     251,     0,   252,     0,   253,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -235,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   313,   314,   244,   245,   246,
     247,   248,   249,   250,   251,     0,   252,  -116,   253,     0,
    -122,   383,     0,     0,     0,     0,     0,     0,     0,     0,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   244,
     245,   246,   247,   248,   249,   250,   251,     0,   252,     0,
     253,     0,     0,     0,     0,   437,     0,     0,     0,     0,
     438,   439,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   244,   245,   246,   247,   248,   249,   250,   251,     0,
     252,     0,   253,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   280,   281,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   244,   245,   246,   247,   248,   249,   250,
     251,     0,   252,     0,   253,     0,     0,     0,     0,   474,
       0,     0,     0,     0,   475,     0,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   244,   245,   246,   247,   248,
     249,   250,   251,     0,   252,     0,   253,     0,  -122,     0,
       0,   -65,     0,     0,     0,     0,     0,     0,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   244,   245,   246,
     247,   248,   249,   250,   251,     0,   252,     0,   253,     0,
       0,     0,     0,   497,     0,     0,     0,     0,   498,     0,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   244,
     245,   246,   247,   248,   249,   250,   251,     0,   252,     0,
     253,     0,     0,     0,     0,  -212,     0,     0,     0,     0,
       0,     0,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   244,   245,   246,   247,   248,   249,   250,   251,     0,
     252,     0,   253,     0,     0,    79,     0,     0,     0,     0,
       0,     0,     0,     0,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   244,   245,   246,   247,   248,   249,   250,
     251,     0,   252,     0,   253,     0,     0,   484,     0,     0,
       0,     0,     0,     0,     0,     0,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   244,   245,   246,   247,   248,
     249,   250,   251,     0,   252,     0,   253,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   507,     0,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   244,   245,   246,
     247,   248,   249,   250,   251,     0,   252,     0,   253,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   512,     0,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   244,
     245,   246,   247,   248,   249,   250,   251,     0,   252,     0,
     253,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   254,   255,   256,   257,   258,   259,   260,   261,
     262
};

static const yytype_int16 yycheck[] =
{
      23,   197,    77,    26,   217,   164,   165,    33,   167,     6,
       6,   380,    35,    36,   383,    41,     6,    40,    34,     6,
      46,     6,    23,     6,     6,    26,    70,    50,     6,    70,
       6,    54,     6,    56,    35,    36,     6,     6,   442,    40,
       6,     6,    32,     6,     6,   446,     6,    70,    71,    50,
       3,    95,    93,    54,    81,    56,    11,    81,    81,    86,
     461,    27,    78,    14,    87,    16,    90,     4,    70,    70,
      71,    95,    95,    89,   100,     6,   114,   115,   447,    81,
      81,   119,   120,   121,   122,   123,    87,    95,    14,    88,
      16,    88,    85,     6,    95,   499,    95,    91,    88,    92,
      90,    87,    95,    93,    91,    95,    96,    85,    91,   106,
     106,    85,    88,    23,    96,   484,    26,   140,    92,   142,
      96,   106,    92,    92,   337,    35,    36,    92,    91,    91,
      40,    91,    87,    94,    95,   158,    70,    88,    95,   140,
      50,   142,    23,    92,    54,    26,    56,    81,    91,    90,
      93,   167,     5,     6,    35,    36,    27,   158,     0,    40,
      70,    71,    88,     5,    14,     7,    16,     9,    93,    50,
      23,    81,    87,    26,    27,    56,    92,    87,    87,    95,
      70,    55,    90,   209,    92,    95,    92,    95,    70,    70,
      71,    90,    91,    87,    93,    92,    90,    92,    95,   222,
      95,    54,     6,   226,    92,    79,    87,   223,    94,    95,
      87,    53,   287,    90,    95,    95,    92,    70,     6,    95,
      92,   222,    92,    95,    90,   226,   172,   173,    93,    87,
     140,    95,   142,    86,    94,    92,     6,    86,    91,   101,
      93,    87,   116,    96,   118,   268,    94,    88,   158,     6,
      93,    88,    32,     6,    89,    94,    94,   280,    83,   140,
      83,   142,    83,    92,    90,    32,    94,   268,    12,    93,
      88,     6,    89,   289,    89,    95,    92,   158,   294,   280,
     296,    92,   298,    88,    94,    83,   482,     5,     6,    81,
     164,   165,    94,   167,    94,   491,    12,   171,    88,    88,
     174,   175,    87,     2,   394,    23,    66,     7,    26,    27,
     333,    74,   222,     8,    27,    45,   226,   340,     6,   391,
     156,   350,   360,   197,   339,   363,   351,   486,   462,   220,
     353,   357,   333,   356,     5,    -1,    54,   212,   361,   340,
     363,   222,    -1,    -1,    -1,   226,    -1,    -1,    -1,    -1,
     373,    -1,   353,    -1,    -1,   356,    -1,    -1,   268,    -1,
     361,    -1,   363,    -1,    -1,    -1,    -1,    85,    86,    -1,
     280,    -1,   373,    91,    92,    93,    -1,    -1,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   268,    -1,   263,
      -1,    -1,    -1,    -1,    -1,   269,   419,    -1,   272,   280,
      -1,    -1,    -1,    -1,    -1,    -1,   429,    -1,    -1,    -1,
      -1,   427,    -1,    -1,    52,    -1,   290,    -1,   419,   293,
      -1,    -1,    -1,   333,    -1,   441,   442,    -1,   429,    67,
     340,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   312,   462,
      -1,    -1,    -1,   353,    -1,    -1,   356,    -1,    -1,    -1,
      -1,   361,   333,   363,    -1,    -1,    -1,    -1,    -1,   340,
      -1,   462,    -1,   373,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   494,   353,    -1,    -1,   356,   350,   351,    -1,   117,
      -1,    -1,   363,   499,    -1,    -1,    -1,     6,     7,    -1,
      -1,    -1,   373,   494,    -1,   369,    -1,    -1,    17,    -1,
      -1,   375,    21,    -1,    -1,    24,    -1,   145,   382,   419,
      -1,   149,   386,    32,    -1,    -1,    -1,   391,    -1,   429,
      -1,    -1,    -1,    42,    -1,    -1,    45,    -1,    -1,   167,
      -1,    -1,   170,    -1,    -1,    -1,    -1,    -1,   419,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,   429,    -1,
      -1,    -1,   462,    -1,    -1,    -1,    -1,    -1,   432,    -1,
      -1,    -1,    81,   437,    -1,    -1,    -1,    86,    -1,    -1,
      -1,    -1,   446,   447,    -1,     5,     6,    -1,   452,   453,
      99,   462,    -1,   101,   494,    -1,    -1,   461,    -1,    -1,
      -1,    -1,    -1,    23,    -1,    -1,    26,    27,   116,    -1,
     474,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   482,    -1,
      -1,    -1,   486,   494,    -1,   489,   490,   491,   136,   137,
     138,   139,    -1,   497,    54,    -1,    -1,    -1,     5,     6,
     268,    -1,    -1,    -1,    -1,    -1,    -1,   156,    -1,    -1,
      70,    -1,    -1,    -1,    -1,   163,    23,    -1,   167,    26,
      27,    -1,    -1,    -1,     5,     6,    86,   175,    -1,    -1,
      -1,    91,    -1,    93,    -1,    -1,    96,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    26,    27,    54,    -1,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   220,    -1,    54,    -1,    -1,    -1,    -1,    85,    86,
      -1,   229,    -1,    -1,    91,    -1,    93,    -1,    -1,    96,
      -1,    -1,    -1,   361,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,   377,
      91,    -1,    93,    -1,    -1,    96,    -1,    -1,    -1,    -1,
      -1,   389,   390,   391,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,   290,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    -1,    -1,     5,     6,     7,
      95,     9,   310,    11,    -1,    13,   434,    15,    -1,    17,
      18,    -1,    -1,    21,    22,    23,    24,    25,    -1,    95,
      28,    29,    30,    31,    32,    33,    -1,    35,    36,    37,
      -1,    39,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   350,   351,    -1,    53,    54,    -1,    -1,    -1,
     358,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   366,   367,
     368,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    87,
      88,    -1,   391,    91,    -1,    93,    -1,    -1,    96,    -1,
      -1,    99,   100,    -1,   102,    -1,    -1,   105,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     5,     6,     7,    -1,
       9,    -1,    11,    -1,    13,    -1,    15,   425,    17,    18,
      -1,    -1,    21,    22,    23,    24,    25,    -1,    -1,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,   447,
      39,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    87,    88,
      -1,    -1,    91,    -1,    93,    -1,    -1,    96,    -1,    -1,
      99,   100,    -1,   102,    -1,    -1,   105,     5,     6,     7,
      -1,     9,    -1,    11,    -1,    13,    -1,    15,    -1,    17,
      18,    -1,    -1,    21,    22,    23,    24,    25,    -1,    -1,
      28,    29,    30,    31,    32,    33,    -1,    35,    36,    37,
      -1,    39,    40,    41,    42,     5,     6,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    -1,    -1,    26,    27,    -1,    -1,
      30,    31,    32,    33,    -1,    35,    36,    37,    -1,    39,
      40,    41,    42,    -1,    82,    -1,    -1,    -1,    86,    87,
      -1,    -1,    -1,    91,    54,    93,    -1,    -1,    96,    -1,
      -1,    99,   100,    -1,   102,    -1,    -1,   105,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    86,    87,    -1,    -1,
      -1,    91,    92,    93,    -1,    -1,    96,     5,     6,    99,
     100,    -1,   102,    -1,    -1,   105,    14,    -1,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,     5,
       6,    -1,    30,    31,    32,    33,    -1,    35,    36,    37,
      -1,    39,    40,    41,    42,     5,     6,    23,    -1,    -1,
      26,    27,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    -1,    35,    36,    37,    54,    39,
      40,    41,    42,    -1,    82,    -1,    -1,    -1,    86,    87,
      88,    -1,    -1,    91,    54,    93,    -1,    -1,    96,    -1,
      -1,    99,   100,    -1,   102,    -1,    -1,   105,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    91,    -1,    93,    -1,    -1,
      96,    -1,    82,    -1,    -1,    85,    86,    87,     5,     6,
      -1,    91,    -1,    93,    94,    -1,    96,    -1,    -1,    99,
     100,    -1,   102,    -1,    -1,   105,    23,    -1,    -1,    26,
      27,    -1,    -1,    30,    31,    32,    33,    -1,    35,    36,
      37,    -1,    39,    40,    41,    42,     5,     6,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    -1,    35,    36,    37,    -1,
      39,    40,    41,    42,    -1,    82,    -1,    -1,    -1,    86,
      87,    -1,    -1,    -1,    91,    54,    93,    -1,    -1,    96,
      -1,    -1,    99,   100,    -1,   102,    -1,    -1,   105,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    82,     5,     6,    -1,    86,    87,    -1,
      -1,    -1,    91,    -1,    93,    94,    -1,    96,    -1,    -1,
      99,   100,    23,   102,    -1,    -1,   105,    -1,    -1,    30,
      31,    32,    33,    -1,    35,    36,    37,    -1,    39,    40,
      41,    42,     5,     6,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    -1,    -1,    19,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    -1,    35,    36,    37,    -1,    39,    40,    41,    42,
      -1,    82,    -1,    -1,    -1,    86,    87,    88,    -1,    -1,
      91,    54,    93,    -1,    -1,    96,    -1,    -1,    99,   100,
      -1,   102,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
       5,     6,    -1,    86,    87,    -1,    -1,    -1,    91,    -1,
      93,    -1,    -1,    96,    -1,    -1,    99,   100,    23,   102,
      -1,    -1,   105,    -1,    -1,    30,    31,    32,    33,    -1,
      35,    36,    37,    -1,    39,    40,    41,    42,     5,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    -1,    35,    36,
      37,    -1,    39,    40,    41,    42,    -1,    82,    -1,    -1,
      -1,    86,    87,    -1,    89,    -1,    91,    54,    93,    -1,
      -1,    96,    -1,    -1,    99,   100,    -1,   102,    -1,    -1,
     105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      87,    88,     5,     6,    91,    -1,    93,    -1,    -1,    96,
      -1,    -1,    99,   100,    -1,   102,    -1,    -1,   105,    -1,
      23,    -1,    -1,    -1,    27,    -1,    -1,    30,    31,    32,
      33,    -1,    35,    36,    37,    -1,    39,    40,    41,    42,
       5,     6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    -1,
      35,    36,    37,    -1,    39,    40,    41,    42,    -1,    82,
      -1,    -1,    -1,    86,    87,    -1,    -1,    -1,    91,    54,
      93,    -1,    -1,    96,    -1,    -1,    99,   100,    -1,   102,
      -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,     5,     6,
      -1,    86,    87,    -1,    -1,    -1,    91,    -1,    93,    94,
      -1,    96,    19,    -1,    99,   100,    23,   102,    -1,    -1,
     105,    -1,    -1,    30,    31,    32,    33,    -1,    35,    36,
      37,    -1,    39,    40,    41,    42,     5,     6,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      19,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    -1,    35,    36,    37,    -1,
      39,    40,    41,    42,    -1,    82,    -1,    -1,    -1,    86,
      87,    -1,    -1,    -1,    91,    54,    93,    -1,    -1,    96,
      -1,    -1,    99,   100,    -1,   102,    -1,    -1,   105,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    82,     5,     6,    -1,    86,    87,    -1,
      -1,    -1,    91,    -1,    93,    -1,    -1,    96,    -1,    -1,
      99,   100,    23,   102,    -1,    -1,   105,    -1,    -1,    30,
      31,    32,    33,    -1,    35,    36,    37,    -1,    39,    40,
      41,    42,    -1,    -1,     5,     6,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    82,     5,     6,    -1,    86,    87,    -1,    -1,    -1,
      91,    92,    93,    54,    -1,    96,    -1,    -1,    99,   100,
      23,   102,    -1,    -1,   105,    -1,    -1,    30,    31,    32,
      33,    -1,    35,    36,    37,    -1,    39,    40,    41,    42,
      -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      91,    54,    93,    -1,    -1,    96,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
       5,     6,    -1,    86,    87,    -1,    -1,    -1,    91,    92,
      93,    -1,    -1,    96,    -1,    -1,    99,   100,    23,   102,
      -1,    -1,   105,    -1,    -1,    30,    31,    32,    33,    -1,
      35,    36,    37,    -1,    39,    40,    41,    42,     5,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    -1,    35,    36,
      37,    -1,    39,    40,    41,    42,    -1,    82,    -1,    -1,
      -1,    86,    87,    -1,    -1,    -1,    91,    54,    93,    94,
      -1,    96,    -1,    -1,    99,   100,    -1,   102,    -1,    -1,
     105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    82,     5,     6,    -1,    86,
      87,    -1,    -1,    -1,    91,    -1,    93,    -1,    -1,    96,
      -1,    -1,    99,   100,    23,   102,    -1,    -1,   105,    -1,
      -1,    30,    31,    32,    33,    -1,    35,    36,    37,    -1,
      39,    40,    41,    42,     5,     6,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    -1,    35,    36,    37,    -1,    39,    40,
      41,    42,    -1,    82,    -1,    -1,    -1,    86,    87,    -1,
      -1,    -1,    91,    54,    93,    -1,    -1,    96,    -1,    -1,
      99,   100,    -1,   102,    -1,    -1,   105,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    82,     5,     6,    -1,    86,    87,    -1,    -1,    -1,
      91,    -1,    93,    -1,    -1,    96,    -1,    -1,    99,   100,
      23,   102,    -1,    -1,   105,    -1,    -1,    30,    31,    32,
      33,    -1,    35,    36,    37,    -1,    39,    40,    41,    42,
      -1,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    54,    82,    83,    84,    -1,    86,    87,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,
     100,   101,   102,   103,   104,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    86,    87,    -1,    -1,    -1,    91,    -1,
      93,    -1,    -1,    96,    -1,    -1,    99,   100,    -1,   102,
      -1,    -1,   105,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    -1,    82,    -1,    84,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    82,    -1,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    -1,    82,    83,    84,    -1,
      86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    97,    98,    99,   100,   101,   102,   103,   104,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    82,    -1,
      84,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,    73,    74,    75,    76,    77,    78,    79,    80,    -1,
      82,    -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    82,    -1,    84,    -1,    -1,    -1,    -1,    89,
      -1,    -1,    -1,    -1,    94,    -1,    96,    97,    98,    99,
     100,   101,   102,   103,   104,    73,    74,    75,    76,    77,
      78,    79,    80,    -1,    82,    -1,    84,    -1,    86,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,
      98,    99,   100,   101,   102,   103,   104,    73,    74,    75,
      76,    77,    78,    79,    80,    -1,    82,    -1,    84,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    94,    -1,
      96,    97,    98,    99,   100,   101,   102,   103,   104,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    82,    -1,
      84,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    97,    98,    99,   100,   101,   102,   103,
     104,    73,    74,    75,    76,    77,    78,    79,    80,    -1,
      82,    -1,    84,    -1,    -1,    87,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,   101,
     102,   103,   104,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    82,    -1,    84,    -1,    -1,    87,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    97,    98,    99,
     100,   101,   102,   103,   104,    73,    74,    75,    76,    77,
      78,    79,    80,    -1,    82,    -1,    84,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,    96,    97,
      98,    99,   100,   101,   102,   103,   104,    73,    74,    75,
      76,    77,    78,    79,    80,    -1,    82,    -1,    84,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    -1,
      96,    97,    98,    99,   100,   101,   102,   103,   104,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    82,    -1,
      84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    97,    98,    99,   100,   101,   102,   103,
     104
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,   108,     4,     0,     5,     7,     9,    53,   109,
     110,   111,   121,   139,   143,   152,     6,    91,   112,   196,
       6,    91,   154,   199,    91,   141,   199,     6,    91,   145,
     146,   147,    93,   148,   195,   196,    85,    92,   197,   198,
     199,     6,    95,    92,   153,   154,     5,     6,    23,    26,
      27,    54,    70,    86,    91,    93,    96,   185,   189,   190,
     194,   200,   205,   207,    92,   140,   141,    70,   142,   185,
      70,   148,    92,   144,   145,   149,   150,   199,   195,    87,
     180,    91,   185,   185,    92,    95,    95,    85,   185,   195,
     199,    92,   153,   195,    90,    93,    87,    86,   185,    87,
       5,     6,    23,    30,    31,    32,    33,    35,    36,    37,
      39,    40,    41,    42,    82,    86,    87,    91,    93,    96,
      99,   100,   102,   105,   161,   166,   167,   168,   169,   170,
     171,   176,   177,   178,   179,   184,   189,   190,   205,   206,
      27,   185,    94,   161,   185,    70,    92,   140,   184,    70,
     185,   185,    92,   144,    94,    95,    95,     6,   106,   151,
     203,   204,   180,     6,    11,    13,    15,    17,    18,    21,
      22,    24,    25,    28,    29,    87,   113,   114,   120,   121,
     122,   123,   124,   125,   126,   128,   133,   134,   135,   155,
     156,   157,   158,   159,   160,   161,   180,   181,   184,   199,
       6,    92,   197,    92,   197,   185,   180,     6,   185,     6,
      88,   201,   202,   203,     6,     6,    88,    96,   188,   191,
     192,   193,   199,   195,    90,   171,    93,   166,   166,     6,
      88,   161,   171,   172,   173,   174,   175,   184,    85,   166,
     166,   166,   166,   166,    73,    74,    75,    76,    77,    78,
      79,    80,    82,    84,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   162,   163,   164,   165,    90,    91,    93,
     182,   183,    95,   171,   171,   171,   171,   185,    92,   185,
      94,    95,   184,   184,    94,   149,   185,   101,   155,   161,
      87,   155,   161,    19,   115,   116,   119,   155,   161,   180,
     184,   199,     6,   127,    87,   184,   161,   127,   127,   161,
       6,   161,    86,    71,    72,    88,   113,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    70,
      81,    92,    95,    94,   195,    88,   201,    90,     6,   188,
      93,   186,    88,   191,    32,   185,   180,     6,   185,    88,
      95,    89,    92,    94,   161,     6,    91,     5,     6,    23,
      86,    91,    92,    96,   184,   185,   189,   190,   205,    89,
     161,   161,   185,    94,   203,    83,   180,    14,    16,   136,
     137,   138,    83,    87,   161,   180,    83,   180,   180,    70,
      81,    14,    16,    88,   129,   130,   131,   161,   184,   184,
     184,   184,   184,   184,   184,   184,   184,   184,   184,   184,
     184,   184,    92,   185,   188,   186,   185,   187,    32,    94,
      88,   173,   161,   171,   175,   185,   185,   195,    90,    93,
      85,    92,    95,    92,    95,    94,   161,    89,    94,    95,
     185,   161,    12,   184,    88,   136,    89,    87,   161,   136,
     117,   161,    19,    19,   132,   157,   161,   184,   199,    88,
     130,    89,    95,    94,    95,   185,   171,    92,     6,   185,
      92,    92,    92,   184,    89,    94,    94,   161,    94,   180,
     133,   180,   181,   136,    87,    88,    83,   161,   161,    70,
      81,   181,   187,    94,    94,    92,   161,    89,    94,    12,
      88,   136,   118,   155,   161,   161,   185,    94,   161,   133,
     180,    88,    94
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   107,   108,   108,   109,   109,   109,   110,   110,   110,
     110,   111,   112,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   114,   114,   114,
     114,   115,   116,   116,   117,   117,   118,   118,   119,   119,
     119,   120,   121,   121,   121,   122,   123,   123,   124,   124,
     125,   125,   126,   126,   127,   128,   128,   129,   129,   130,
     131,   131,   131,   132,   132,   132,   133,   133,   133,   133,
     133,   133,   134,   135,   135,   135,   135,   136,   136,   137,
     138,   138,   139,   139,   139,   140,   140,   141,   141,   142,
     142,   143,   143,   143,   144,   144,   145,   145,   146,   147,
     148,   148,   148,   149,   149,   150,   151,   152,   152,   152,
     153,   153,   154,   154,   154,   155,   155,   155,   155,   155,
     156,   157,   158,   159,   159,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   161,
     161,   162,   162,   162,   162,   162,   163,   163,   163,   163,
     163,   163,   163,   164,   164,   164,   164,   165,   165,   165,
     165,   165,   165,   166,   166,   166,   166,   166,   166,   166,
     166,   167,   167,   167,   167,   167,   167,   167,   167,   167,
     167,   167,   167,   167,   168,   168,   168,   168,   168,   168,
     169,   169,   169,   169,   169,   169,   169,   170,   170,   170,
     170,   170,   170,   170,   171,   171,   171,   172,   172,   173,
     173,   174,   174,   174,   175,   175,   176,   176,   176,   176,
     177,   178,   178,   179,   180,   181,   181,   182,   183,   183,
     183,   183,   183,   183,   184,   184,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   186,   186,   187,
     187,   188,   188,   189,   189,   190,   190,   191,   191,   192,
     192,   192,   192,   193,   193,   193,   193,   194,   195,   195,
     195,   195,   195,   196,   196,   196,   197,   197,   198,   198,
     198,   198,   199,   199,   200,   200,   201,   201,   202,   202,
     203,   203,   204,   204,   205,   206,   207,   207,   207
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     1,     1,     1,     5,     4,     3,
       4,     5,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       2,     5,     1,     0,     1,     0,     1,     0,     4,     4,
       2,     2,     1,     1,     1,     2,     2,     1,     2,     1,
       2,     1,     2,     1,     1,     4,     3,     2,     1,     3,
       2,     2,     1,     3,     3,     1,     7,     7,     5,     3,
       5,     5,     1,     7,     6,     5,     4,     2,     1,     3,
       2,     1,     2,     4,     3,     2,     1,     2,     1,     3,
       2,     2,     4,     3,     2,     1,     1,     1,     3,     3,
       3,     4,     0,     3,     1,     2,     1,     2,     4,     3,
       2,     1,     2,     4,     3,     1,     1,     1,     1,     1,
       0,     3,     1,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     2,     2,
       2,     1,     4,     5,     4,     5,     5,     5,     4,     6,
       3,     2,     2,     5,     3,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       5,     2,     2,     2,     3,     4,     2,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     2,     1,     2,     5,     4,
       4,     3,     7,     6,     3,     1,     1,     3,     3,     5,
       1,     2,     1,     1,     1,     1,     1,     3,     4,     3,
       1,     1,     3,     4,     5,     4,     3,     2,     1,     3,
       2,     2,     1,     3,     2,     2,     1,     2,     4,     3,
       5,     2,     1,     3,     2,     4,     3,     1,     3,     2,
       1,     2,     1,     3,     4,     3,     2,     1,     2,     1,
       3,     1,     1,     2,     3,     5,     2,     3,     3
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
#line 29 "lab2.yacc"
                      {printf("Find package and import\n");}
#line 2342 "y.tab.c"
    break;

  case 74: /* ExprSwitchStmt: SWITCH SimpleStmt SEMICOLON '{' ExprCaseClauseList '}'  */
#line 141 "lab2.yacc"
                                                                                 {printf("simplestmt\n");}
#line 2348 "y.tab.c"
    break;


#line 2352 "y.tab.c"

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

#line 509 "lab2.yacc"


int main(int argc, char *argv[])
{
    yyin = fopen(argv[1], "r");
	yyparse();
        fclose(yyin);
	if(error_ == 0)
		printf("OK\n");
        
}
