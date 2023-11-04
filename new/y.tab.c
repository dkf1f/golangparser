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
  YYSYMBOL_RangeClause = 116,              /* RangeClause  */
  YYSYMBOL_DeferStmt = 117,                /* DeferStmt  */
  YYSYMBOL_Declaration = 118,              /* Declaration  */
  YYSYMBOL_GoStmt = 119,                   /* GoStmt  */
  YYSYMBOL_ReturnStmt = 120,               /* ReturnStmt  */
  YYSYMBOL_BreakStmt = 121,                /* BreakStmt  */
  YYSYMBOL_ContinueStmt = 122,             /* ContinueStmt  */
  YYSYMBOL_GotoStmt = 123,                 /* GotoStmt  */
  YYSYMBOL_Label = 124,                    /* Label  */
  YYSYMBOL_SelectStmt = 125,               /* SelectStmt  */
  YYSYMBOL_CommClauseList = 126,           /* CommClauseList  */
  YYSYMBOL_CommClause = 127,               /* CommClause  */
  YYSYMBOL_CommCase = 128,                 /* CommCase  */
  YYSYMBOL_RecvStmt = 129,                 /* RecvStmt  */
  YYSYMBOL_RecvExpr = 130,                 /* RecvExpr  */
  YYSYMBOL_IfStmt = 131,                   /* IfStmt  */
  YYSYMBOL_SwitchStmt = 132,               /* SwitchStmt  */
  YYSYMBOL_ExprSwitchStmt = 133,           /* ExprSwitchStmt  */
  YYSYMBOL_ExprCaseClauseList = 134,       /* ExprCaseClauseList  */
  YYSYMBOL_ExprCaseClause = 135,           /* ExprCaseClause  */
  YYSYMBOL_ExprSwitchCase = 136,           /* ExprSwitchCase  */
  YYSYMBOL_ConstDecl = 137,                /* ConstDecl  */
  YYSYMBOL_ConstSpecList = 138,            /* ConstSpecList  */
  YYSYMBOL_ConstSpec = 139,                /* ConstSpec  */
  YYSYMBOL_ConstExpr = 140,                /* ConstExpr  */
  YYSYMBOL_TypeDecl = 141,                 /* TypeDecl  */
  YYSYMBOL_TypeSpecList = 142,             /* TypeSpecList  */
  YYSYMBOL_TypeSpec = 143,                 /* TypeSpec  */
  YYSYMBOL_AliasDecl = 144,                /* AliasDecl  */
  YYSYMBOL_TypeDef = 145,                  /* TypeDef  */
  YYSYMBOL_TypeParameters = 146,           /* TypeParameters  */
  YYSYMBOL_TypeParamList = 147,            /* TypeParamList  */
  YYSYMBOL_TypeParamDecl = 148,            /* TypeParamDecl  */
  YYSYMBOL_TypeConstraint = 149,           /* TypeConstraint  */
  YYSYMBOL_VarDecl = 150,                  /* VarDecl  */
  YYSYMBOL_VarSpecList = 151,              /* VarSpecList  */
  YYSYMBOL_VarSpec = 152,                  /* VarSpec  */
  YYSYMBOL_SimpleStmt = 153,               /* SimpleStmt  */
  YYSYMBOL_EmptyStatement = 154,           /* EmptyStatement  */
  YYSYMBOL_SendStmt = 155,                 /* SendStmt  */
  YYSYMBOL_Channel = 156,                  /* Channel  */
  YYSYMBOL_IncDecStmt = 157,               /* IncDecStmt  */
  YYSYMBOL_Assignment = 158,               /* Assignment  */
  YYSYMBOL_Expression = 159,               /* Expression  */
  YYSYMBOL_binary_op = 160,                /* binary_op  */
  YYSYMBOL_mul_op = 161,                   /* mul_op  */
  YYSYMBOL_add_op = 162,                   /* add_op  */
  YYSYMBOL_rel_op = 163,                   /* rel_op  */
  YYSYMBOL_UnaryExpr = 164,                /* UnaryExpr  */
  YYSYMBOL_PrimaryExpr = 165,              /* PrimaryExpr  */
  YYSYMBOL_Conversion = 166,               /* Conversion  */
  YYSYMBOL_MethodExpr = 167,               /* MethodExpr  */
  YYSYMBOL_MethodName = 168,               /* MethodName  */
  YYSYMBOL_Operand = 169,                  /* Operand  */
  YYSYMBOL_Literal = 170,                  /* Literal  */
  YYSYMBOL_BasicLit = 171,                 /* BasicLit  */
  YYSYMBOL_CompositeLit = 172,             /* CompositeLit  */
  YYSYMBOL_LiteralType = 173,              /* LiteralType  */
  YYSYMBOL_LiteralValue = 174,             /* LiteralValue  */
  YYSYMBOL_ElementList = 175,              /* ElementList  */
  YYSYMBOL_KeyedElement = 176,             /* KeyedElement  */
  YYSYMBOL_Key = 177,                      /* Key  */
  YYSYMBOL_Element = 178,                  /* Element  */
  YYSYMBOL_OperandName = 179,              /* OperandName  */
  YYSYMBOL_int_lit = 180,                  /* int_lit  */
  YYSYMBOL_imaginary_lit = 181,            /* imaginary_lit  */
  YYSYMBOL_float_lit = 182,                /* float_lit  */
  YYSYMBOL_FunctionLit = 183,              /* FunctionLit  */
  YYSYMBOL_Block = 184,                    /* Block  */
  YYSYMBOL_Statements = 185,               /* Statements  */
  YYSYMBOL_Selector = 186,                 /* Selector  */
  YYSYMBOL_Index = 187,                    /* Index  */
  YYSYMBOL_Slice = 188,                    /* Slice  */
  YYSYMBOL_TypeAssertion = 189,            /* TypeAssertion  */
  YYSYMBOL_Arguments = 190,                /* Arguments  */
  YYSYMBOL_ExpressionList = 191,           /* ExpressionList  */
  YYSYMBOL_Type = 192,                     /* Type  */
  YYSYMBOL_TypeArgs = 193,                 /* TypeArgs  */
  YYSYMBOL_TypeList = 194,                 /* TypeList  */
  YYSYMBOL_TypeName = 195,                 /* TypeName  */
  YYSYMBOL_ArrayType = 196,                /* ArrayType  */
  YYSYMBOL_StructType = 197,               /* StructType  */
  YYSYMBOL_DeclList = 198,                 /* DeclList  */
  YYSYMBOL_FieldDecl = 199,                /* FieldDecl  */
  YYSYMBOL_EmbeddedField = 200,            /* EmbeddedField  */
  YYSYMBOL_PointerType = 201,              /* PointerType  */
  YYSYMBOL_FunctionType = 202,             /* FunctionType  */
  YYSYMBOL_Signature = 203,                /* Signature  */
  YYSYMBOL_Parameters = 204,               /* Parameters  */
  YYSYMBOL_ParameterList = 205,            /* ParameterList  */
  YYSYMBOL_ParameterDecl = 206,            /* ParameterDecl  */
  YYSYMBOL_IdentifierList = 207,           /* IdentifierList  */
  YYSYMBOL_InterfaceType = 208,            /* InterfaceType  */
  YYSYMBOL_InterfaceElemList = 209,        /* InterfaceElemList  */
  YYSYMBOL_InterfaceElem = 210,            /* InterfaceElem  */
  YYSYMBOL_TypeElem = 211,                 /* TypeElem  */
  YYSYMBOL_TypeTerm = 212,                 /* TypeTerm  */
  YYSYMBOL_SliceType = 213,                /* SliceType  */
  YYSYMBOL_MapType = 214,                  /* MapType  */
  YYSYMBOL_ChannelType = 215               /* ChannelType  */
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
#define YYLAST   2890

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  107
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  109
/* YYNRULES -- Number of rules.  */
#define YYNRULES  310
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  511

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
       0,    28,    28,    29,    32,    33,    34,    36,    37,    38,
      39,    41,    42,    44,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    63,    64,    65,
      66,    69,    70,    71,    72,    73,    74,    75,    79,    80,
      81,    83,    85,    86,    87,    89,    91,    92,    94,    95,
      97,    98,   100,   101,   103,   105,   106,   108,   109,   110,
     111,   112,   113,   115,   116,   117,   119,   122,   123,   124,
     125,   126,   127,   132,   136,   137,   138,   139,   141,   142,
     144,   145,   145,   160,   161,   162,   164,   165,   166,   167,
     168,   169,   172,   173,   174,   176,   177,   178,   178,   180,
     184,   186,   187,   188,   190,   191,   193,   195,   198,   199,
     200,   202,   203,   204,   205,   206,   208,   209,   210,   211,
     212,   216,   218,   219,   221,   222,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     239,   240,   242,   243,   244,   245,   246,   248,   249,   250,
     251,   252,   253,   254,   256,   257,   258,   259,   261,   262,
     263,   264,   265,   266,   269,   270,   271,   272,   273,   274,
     275,   276,   279,   280,   281,   282,   283,   284,   285,   286,
     288,   289,   292,   293,   295,   296,   298,   300,   301,   302,
     304,   305,   306,   307,   308,   309,   310,   312,   313,   314,
     315,   316,   317,   318,   321,   323,   324,   325,   327,   328,
     330,   331,   333,   334,   335,   338,   339,   341,   342,   344,
     345,   346,   347,   350,   351,   352,   355,   357,   359,   360,
     363,   365,   366,   368,   369,   370,   371,   372,   373,   376,
     379,   380,   381,   382,   383,   384,   385,   386,   389,   390,
     392,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   404,   405,   407,   408,   410,   411,   415,   418,   419,
     421,   422,   424,   425,   426,   427,   429,   430,   431,   432,
     435,   439,   441,   442,   443,   445,   446,   447,   450,   451,
     453,   454,   455,   456,   459,   460,   463,   464,   466,   467,
     469,   470,   472,   473,   477,   478,   482,   485,   490,   491,
     492
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
  "RangeClause", "DeferStmt", "Declaration", "GoStmt", "ReturnStmt",
  "BreakStmt", "ContinueStmt", "GotoStmt", "Label", "SelectStmt",
  "CommClauseList", "CommClause", "CommCase", "RecvStmt", "RecvExpr",
  "IfStmt", "SwitchStmt", "ExprSwitchStmt", "ExprCaseClauseList",
  "ExprCaseClause", "ExprSwitchCase", "ConstDecl", "ConstSpecList",
  "ConstSpec", "ConstExpr", "TypeDecl", "TypeSpecList", "TypeSpec",
  "AliasDecl", "TypeDef", "TypeParameters", "TypeParamList",
  "TypeParamDecl", "TypeConstraint", "VarDecl", "VarSpecList", "VarSpec",
  "SimpleStmt", "EmptyStatement", "SendStmt", "Channel", "IncDecStmt",
  "Assignment", "Expression", "binary_op", "mul_op", "add_op", "rel_op",
  "UnaryExpr", "PrimaryExpr", "Conversion", "MethodExpr", "MethodName",
  "Operand", "Literal", "BasicLit", "CompositeLit", "LiteralType",
  "LiteralValue", "ElementList", "KeyedElement", "Key", "Element",
  "OperandName", "int_lit", "imaginary_lit", "float_lit", "FunctionLit",
  "Block", "Statements", "Selector", "Index", "Slice", "TypeAssertion",
  "Arguments", "ExpressionList", "Type", "TypeArgs", "TypeList",
  "TypeName", "ArrayType", "StructType", "DeclList", "FieldDecl",
  "EmbeddedField", "PointerType", "FunctionType", "Signature",
  "Parameters", "ParameterList", "ParameterDecl", "IdentifierList",
  "InterfaceType", "InterfaceElemList", "InterfaceElem", "TypeElem",
  "TypeTerm", "SliceType", "MapType", "ChannelType", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-421)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-309)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      33,    42,    52,  -421,  -421,    27,    29,    43,    48,  -421,
    -421,  -421,  -421,  -421,  -421,  -421,   124,    45,    44,  -421,
     -39,    14,  -421,   629,    31,  -421,   690,   -23,    37,  -421,
    -421,  -421,    56,   -11,     4,   482,   511,  -421,    97,     9,
     275,  -421,   -11,    56,  -421,    16,    56,   -11,    54,    24,
      62,   655,    76,  2067,   148,   511,  1173,   511,   130,   101,
    -421,  -421,  -421,  -421,  -421,  -421,  -421,  -421,  -421,   138,
      56,  2067,  -421,   173,   511,   511,  -421,   162,   250,     3,
     164,     6,     4,  1052,  -421,    87,  -421,  -421,  -421,  -421,
     175,    15,   511,  -421,     4,  -421,  -421,  -421,  -421,   258,
     511,    -3,    39,  -421,    11,   -11,   109,  -421,  -421,  -421,
    -421,  -421,  -421,  -421,  -421,  -421,  -421,  -421,  2067,  2105,
    1211,  2067,   120,  2067,  2067,  2067,  2067,  2067,  2786,  -421,
      74,  -421,  -421,  -421,  -421,  -421,  -421,   182,  -421,  -421,
    -421,  -421,  -421,  -421,   178,    79,   189,   191,   192,   195,
     511,   208,   511,  2530,  -421,  2067,   511,  -421,  -421,  -421,
     178,  2067,  -421,  -421,  -421,  -421,  -421,   209,    56,  -421,
     511,  -421,  -421,   205,  -421,    -8,  2188,  2226,  -421,  1090,
     277,   220,  2067,  2067,   277,   277,  2067,   850,  -421,  -421,
    -421,  -421,  -421,  -421,  -421,  -421,  -421,  -421,  -421,  -421,
    -421,  -421,  -421,  -421,   225,  -421,  -421,  2402,  -421,   951,
     847,   -28,   165,  -421,  -421,  -421,  -421,  -421,   218,   -11,
    -421,   227,    10,  -421,  -421,  -421,   258,   101,   228,    23,
     281,   511,     4,   311,  -421,   655,  -421,   114,  -421,  2562,
    -421,     0,  -421,   229,  -421,   117,   155,   226,  -421,    79,
    -421,  -421,  -421,  -421,  -421,  -421,  -421,  -421,  -421,  -421,
    -421,  -421,  -421,  -421,  -421,  -421,  -421,  -421,  -421,  -421,
    -421,  -421,  -421,  2067,  -421,  -421,  -421,    49,  1295,  1378,
    -421,  -421,  -421,  -421,  -421,  -421,  2067,    44,  2067,  -421,
    -421,  -421,   511,   178,   224,   145,   178,  -421,  -421,  -421,
       6,   238,  1268,   731,   239,  1836,  2067,  1416,     4,     4,
     240,  1268,  -421,   948,    20,  -421,  -421,    70,   178,  2786,
    -421,  -421,  2786,    95,  2356,  2067,  -421,  -421,  -421,  -421,
    2067,  2067,  2067,  2067,  2067,  2067,  2067,  2067,  2067,  2067,
    2067,  2067,  2067,  2067,   511,  -421,  -421,  -421,   101,  -421,
    -421,  -421,  -421,   293,  -421,   236,  -421,   172,  -421,  1499,
    2067,  -421,   511,  2786,  -421,   511,  -421,   -21,    96,  1537,
    2280,  2786,  -421,   131,  -421,   511,  -421,   233,  -421,  2067,
     316,  2067,  -421,   242,   194,   243,  2309,   194,  2786,  2188,
    2594,  -421,  -421,  1620,  -421,  1658,  1742,  2188,  -421,  -421,
      80,  -421,   244,  2786,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,  -421,  -421,
    -421,  -421,  -421,  2786,  -421,  -421,  -421,   245,   248,  -421,
    1780,   249,  -421,  1863,  -421,  2434,  1946,  -421,   252,  -421,
    1984,  -421,  -421,  2626,    61,   178,  -421,  -421,  1052,   731,
    2658,   256,  -421,  2188,  2188,  2690,  2067,  2067,  -421,  -421,
    -421,  2466,   -32,   255,  -421,  -421,  1052,  -421,  -421,  -421,
    -421,  -421,   146,  2067,  -421,  -421,  2498,  -421,  -421,   335,
    -421,  -421,  1052,   264,   194,  -421,  -421,  -421,  2188,  2786,
    2786,  2067,  2067,  1052,  -421,  2722,  2067,  -421,    61,  -421,
     265,  -421,  -421,  2786,  -421,  -421,  2754,  -421,  -421,  -421,
    -421
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     0,     0,     2,     1,     0,     0,     0,     0,     3,
       5,     6,     4,    42,    43,    44,     0,     0,     0,    12,
     294,     0,   108,     0,     0,    83,    89,   103,     0,    92,
      97,    98,     0,     0,     9,   283,     0,   286,     0,   289,
     292,   183,     0,     0,   110,     0,   112,     0,   265,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   113,   250,
     253,   255,   254,   256,   257,   258,   259,   260,    85,     0,
      87,     0,    88,     0,     0,     0,    94,     0,    96,     0,
     105,     0,    10,   121,     8,     0,   284,   282,   293,   285,
       0,     0,     0,   291,     0,   295,   109,   111,   281,     0,
       0,     0,     0,   308,     0,     0,   217,   222,   194,   195,
     196,   221,   220,   219,   224,   225,   193,   223,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   249,   140,
     164,   175,   174,   172,   185,   187,   188,     0,   198,   184,
     190,   192,   191,   189,   115,     0,   253,   255,   258,   259,
       0,     0,     0,     0,   280,     0,     0,   251,    84,    86,
      91,     0,    99,   100,    93,    95,   101,     0,     0,   304,
       0,   106,   107,   303,     7,   217,   121,   121,    20,     0,
      49,     0,    47,     0,    53,    51,     0,     0,   229,    25,
      26,    13,    15,    16,    17,    18,    19,    24,    22,    23,
      73,    14,   120,   118,     0,   119,   116,   117,    21,     0,
       0,     0,   294,   287,   288,   290,    11,   266,     0,   304,
     297,     0,   299,   301,   309,   269,     0,   279,     0,   271,
     275,     0,   281,     0,   168,     0,   171,   217,   207,   215,
     198,     0,   209,     0,   211,     0,     0,     0,   169,   280,
     170,   166,   165,   167,   158,   159,   163,   162,   143,   142,
     150,   151,   155,   153,   147,   148,   149,   152,   154,   156,
     157,   160,   161,     0,   146,   145,   144,     0,     0,     0,
     176,   177,   178,   179,   173,   197,     0,     0,     0,   310,
     252,   306,     0,   114,   264,     0,    90,   102,   104,   305,
       0,     0,   249,     0,     0,   249,     0,     0,     0,     0,
       0,   249,    30,     0,     0,    54,    48,     0,    46,    45,
      52,    50,    41,   217,   117,     0,   124,   125,   227,   228,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   300,   296,   298,   278,   277,
     268,   270,   274,   273,   226,   217,   218,   310,   205,     0,
       0,   186,     0,   141,   230,     0,   247,     0,     0,     0,
       0,   248,   182,     0,   267,     0,   261,     0,   302,     0,
      72,     0,    82,     0,    79,     0,     0,     0,    40,     0,
       0,    28,    29,     0,    27,     0,     0,     0,    62,    56,
       0,    58,     0,   122,   129,   131,   139,   136,   132,   130,
     133,   134,   135,   138,   137,   128,   127,   126,   307,   276,
     272,   206,   208,   215,   198,   210,   201,     0,     0,   240,
       0,     0,   245,     0,   236,     0,     0,   231,     0,   180,
       0,   263,   262,     0,     0,    81,    77,    78,   121,     0,
       0,     0,    37,     0,     0,     0,     0,     0,    61,    65,
      60,   249,     0,     0,    55,    57,   121,   239,   242,   241,
     244,   243,     0,     0,   234,   235,     0,   232,   181,    69,
      70,    71,    80,     0,     0,    76,    36,    34,     0,    38,
      39,     0,     0,    59,   246,     0,     0,   233,     0,    75,
       0,    31,    63,    66,    64,   238,     0,    67,    68,    74,
     237
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -421,  -421,  -421,  -421,  -421,  -421,  -183,  -421,  -421,  -421,
    -421,   352,  -421,  -421,  -421,  -421,  -421,    81,  -421,  -421,
     -45,  -421,  -421,  -220,  -420,  -421,  -421,  -373,  -421,  -421,
    -421,   286,   356,  -421,  -421,   287,   351,  -421,  -421,   337,
     199,  -421,  -421,  -421,   323,   364,  -145,  -421,   -25,  -421,
    -421,  -421,   -55,  -421,  -421,  -421,  -421,   110,  -421,  -421,
    -421,    89,  -421,  -421,  -421,  -421,  -421,  -110,  -421,    19,
    -421,    22,   141,  -421,  -421,  -421,  -421,   -34,  -408,  -421,
    -421,  -421,  -421,  -421,   -46,   322,  -221,     5,   -91,   377,
     440,   154,  -421,  -421,  -421,  -421,   -24,    34,   295,  -421,
      -2,  -421,   166,  -421,   -79,  -421,   467,   558,  -421
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     9,    10,    11,    18,   188,   189,   308,   309,
     190,   191,   192,   193,   194,   195,   196,   316,   197,   400,
     401,   402,   458,   459,   198,   199,   200,   383,   384,   385,
      13,    69,    70,    72,    14,    77,    78,    30,    31,    33,
      79,    80,   171,    15,    45,    46,   201,   202,   203,   204,
     205,   206,   128,   273,   274,   275,   276,   129,   130,   131,
     132,    42,   133,   134,   135,   136,   137,   138,   241,   242,
     243,   244,   139,   140,   141,   142,   143,   208,   209,   280,
     281,   282,   283,   284,   210,   145,   157,   295,    59,   146,
     147,   228,   229,   230,    62,    63,    34,    35,    38,    39,
     211,    64,   221,   222,   223,   173,   148,   149,    67
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      84,   153,   172,   219,    23,    26,   349,   144,   217,    82,
     240,   447,   169,   227,   451,    40,   219,   212,    94,    23,
      20,    20,    26,    98,   480,   160,   329,   285,   207,   212,
      81,   301,   304,    16,   310,    20,     1,    20,   491,    19,
     482,    95,   342,    27,    23,   224,     3,    74,   174,    20,
      41,    20,     4,   343,    27,   364,    43,     5,   493,     6,
     216,     7,    20,   286,   428,   239,   150,   153,    26,    87,
      32,   429,   176,  -294,   430,   245,   483,   240,   507,  -204,
      17,   232,   233,    40,   397,   220,   398,    43,   358,    40,
     342,    83,    47,   212,   397,   359,   398,   166,   167,   225,
      36,   396,   231,   170,    91,     8,    44,   226,    96,   293,
      49,   500,   170,    50,    51,   296,   170,   100,    17,   226,
      21,   302,   305,    68,   311,   105,   106,   419,   319,    76,
      36,   322,   324,   313,    24,   348,   318,    37,   227,    28,
     365,    52,   217,    49,    99,   312,    50,    51,    83,   101,
     107,   108,   109,   110,   207,   111,   112,   113,   399,   114,
     115,   116,   117,   104,   277,   278,    81,   279,   464,   287,
     288,  -265,    36,    54,    52,   150,  -294,   314,    55,    37,
      56,   431,  -204,    57,  -212,   233,   287,   288,   432,    89,
      43,   433,    90,   240,   156,   345,  -204,  -265,   354,   233,
     155,  -204,   118,  -212,   233,   247,   119,   120,   381,   361,
     382,   121,   286,   122,   152,    17,   123,    32,   363,   124,
     125,   378,   126,   439,   370,   127,   440,   231,   234,   236,
     158,   371,   367,   248,   250,   251,   252,   253,   494,   376,
     377,   286,   373,   161,   452,   287,   288,   290,   239,   240,
     424,   388,   390,  -265,   164,    99,    27,  -265,  -265,   168,
      43,  -265,  -308,  -308,    48,   320,   321,   213,   380,   120,
     403,   502,   504,   286,   391,   392,  -200,   394,  -199,  -202,
      47,    48,  -203,   315,   404,   405,   406,   407,   408,   409,
     410,   411,   412,   413,   414,   415,   416,   417,    49,   329,
     290,    50,    51,   297,   239,   423,   300,   317,   486,   487,
     329,   325,   344,   352,   435,   346,   350,   355,   360,   375,
     362,   379,   386,   393,   443,   420,   233,   442,   444,    52,
     446,   450,   448,   466,   207,   445,   492,   467,   455,   240,
     468,   470,   461,   501,   485,    58,   477,   498,    73,   415,
     417,   462,   499,   509,    12,   465,   159,    86,    88,    29,
      92,    54,    93,    25,    75,   165,    55,   298,    56,    97,
      22,    57,   460,   103,   356,   371,   372,   151,   422,   154,
     441,   476,   425,   351,     0,   371,   214,   472,   347,     0,
       0,     0,     0,   207,   239,   463,   162,   163,   207,   207,
      60,   489,   490,    60,     0,     0,     0,   151,     0,   479,
     481,   207,    60,    60,   215,     0,     0,    60,   495,     0,
       0,     0,   218,     0,     0,     0,     0,   207,    60,     0,
       0,     0,    60,   207,    60,     0,   503,   503,   207,     0,
       0,   506,     0,   246,     0,   249,     0,     0,     0,     0,
       0,    60,    60,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    60,    61,   508,     0,    61,     0,     0,    60,
       0,     0,   289,     0,   291,    61,    61,    60,   294,     0,
      61,     0,     0,     0,     0,     0,     0,    47,    48,     0,
      65,    61,   299,    65,     0,    61,     0,    61,     0,     0,
       0,     0,    65,    65,     0,    49,     0,    65,    50,    51,
       0,     0,     0,     0,    61,    61,    47,    48,    65,     0,
       0,     0,    65,     0,    65,    61,     0,    60,     0,    60,
       0,     0,    61,    60,    49,     0,    52,    50,    51,     0,
      61,    65,    65,     0,     0,     0,     0,    60,     0,     0,
       0,     0,    65,   353,     0,     0,     0,   357,     0,    65,
       0,     0,     0,     0,     0,    52,     0,    65,    54,     0,
       0,     0,     0,    85,     0,    56,     0,     0,    57,     0,
       0,    66,     0,     0,    66,     0,     0,     0,     0,     0,
      61,     0,    61,    66,    66,     0,    61,    54,    66,     0,
     368,     0,    55,     0,    56,     0,     0,    57,    60,    66,
      61,     0,    60,    66,   374,    66,     0,    65,     0,    65,
       0,     0,     0,    65,     0,     0,     0,     0,     0,     0,
       0,     0,    66,    66,    47,    48,     0,    65,     0,     0,
       0,     0,     0,    66,     0,     0,     0,     0,     0,     0,
      66,     0,    49,     0,     0,    50,    51,     0,    66,     0,
      47,    48,     0,     0,     0,     0,   418,     0,     0,    60,
       0,    61,     0,     0,     0,    61,     0,     0,    49,     0,
       0,    50,    51,    52,   426,     0,     0,   427,     0,     0,
       0,     0,     0,     0,     0,    47,    48,   294,    65,    53,
       0,     0,    65,     0,     0,     0,     0,     0,    66,    52,
      66,     0,     0,    49,    66,    54,    50,    51,     0,     0,
      55,    60,    56,     0,     0,    57,     0,     0,    66,     0,
       0,     0,    61,     0,     0,     0,   105,   237,     0,    60,
       0,   102,    60,     0,    52,   381,    55,   382,    56,     0,
       0,    57,    60,     0,    49,     0,     0,    50,    51,    65,
      71,   107,   108,   109,   110,     0,   111,   112,   113,     0,
     114,   115,   116,   117,     0,     0,    54,     0,     0,     0,
       0,    55,     0,    56,    61,    52,    57,     0,     0,    66,
       0,     0,     0,    66,     0,     0,     0,     0,     0,     0,
       0,     0,    61,     0,     0,    61,     0,     0,     0,     0,
       0,    65,     0,   118,     0,    61,     0,   119,   120,   238,
       0,     0,   121,     0,   122,     0,     0,   123,     0,    65,
     124,   125,    65,   126,     0,     0,   127,     0,     0,     0,
       0,     0,    65,     0,     0,     0,     0,     0,     0,     0,
      66,     0,     0,     0,     0,   105,   323,     6,     0,     7,
       0,   176,     0,   177,     0,   178,     0,   179,   180,     0,
       0,   181,   182,    49,   183,   184,    50,    51,   185,   186,
     107,   108,   109,   110,     0,   111,   112,   113,     0,   114,
     115,   116,   117,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    66,     8,    52,     0,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,     0,     0,
      66,     0,     0,    66,     0,     0,     0,     0,     0,     0,
       0,     0,   118,    66,     0,     0,   119,   187,   238,     0,
       0,   121,   286,   122,     0,     0,   123,     0,     0,   124,
     125,     0,   126,     0,     0,   127,   105,   175,     6,     0,
       7,     0,   176,     0,   177,     0,   178,     0,   179,   180,
       0,     0,   181,   182,    49,   183,   184,    50,    51,   185,
     186,   107,   108,   109,   110,     0,   111,   112,   113,     0,
     114,   115,   116,   117,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     8,    52,     0,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   395,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   118,     0,     0,     0,   119,   187,   328,
       0,     0,   121,   286,   122,     0,     0,   123,     0,     0,
     124,   125,     0,   126,     0,     0,   127,   105,   175,     6,
       0,     7,     0,   176,     0,   177,     0,   178,     0,   179,
     180,     0,     0,   181,   182,    49,   183,   184,    50,    51,
     185,   186,   107,   108,   109,   110,     0,   111,   112,   113,
       0,   114,   115,   116,   117,   105,   175,     0,     0,     0,
       0,     0,     0,     0,     0,     8,    52,     0,     0,   306,
       0,     0,     0,    49,     0,     0,    50,    51,     0,     0,
     107,   108,   109,   110,     0,   111,   112,   113,     0,   114,
     115,   116,   117,     0,   118,     0,     0,     0,   119,   187,
       0,     0,     0,   121,    52,   122,     0,     0,   123,     0,
       0,   124,   125,     0,   126,     0,     0,   127,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   118,   307,     0,     0,   119,   187,   105,   106,
       0,   121,     0,   122,     0,     0,   123,     0,     0,   124,
     125,     0,   126,     0,     0,   127,    49,     0,     0,    50,
      51,     0,     0,   107,   108,   109,   110,     0,   111,   112,
     113,     0,   114,   115,   116,   117,   105,   237,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    52,     0,     0,
       0,     0,     0,     0,    49,     0,     0,    50,    51,     0,
       0,   107,   108,   109,   110,     0,   111,   112,   113,     0,
     114,   115,   116,   117,     0,   118,     0,     0,     0,   119,
     120,     0,     0,     0,   121,    52,   122,   152,     0,   123,
       0,     0,   124,   125,     0,   126,     0,     0,   127,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   118,     0,     0,     0,   119,   120,   238,
     105,   106,   121,     0,   122,     0,     0,   123,     0,     0,
     124,   125,     0,   126,     0,     0,   127,     0,    49,     0,
       0,    50,    51,     0,     0,   107,   108,   109,   110,     0,
     111,   112,   113,     0,   114,   115,   116,   117,     0,   326,
     327,   254,   255,   256,   257,   258,   259,   260,   261,    52,
     262,  -117,   263,     0,  -123,    83,     0,     0,     0,     0,
       0,     0,     0,     0,   264,   265,   266,   267,   268,   269,
     270,   271,   272,     0,     0,     0,     0,   118,     0,     0,
       0,   119,   120,   105,   106,     0,   121,   366,   122,     0,
       0,   123,     0,     0,   124,   125,     0,   126,     0,     0,
     127,    49,     0,     0,    50,    51,     0,     0,   107,   108,
     109,   110,     0,   111,   112,   113,     0,   114,   115,   116,
     117,   105,   106,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    52,     0,     0,     0,     0,     0,     0,    49,
       0,     0,    50,    51,     0,     0,   107,   108,   109,   110,
       0,   111,   112,   113,     0,   114,   115,   116,   117,     0,
     118,     0,     0,     0,   119,   120,     0,   369,     0,   121,
      52,   122,     0,     0,   123,     0,     0,   124,   125,     0,
     126,     0,     0,   127,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   118,   389,
       0,     0,   119,   120,   105,   237,     0,   121,     0,   122,
       0,     0,   123,     0,     0,   124,   125,     0,   126,     0,
       0,   127,    49,     0,     0,    50,    51,     0,     0,   107,
     108,   109,   110,     0,   111,   112,   113,     0,   114,   115,
     116,   117,   105,   106,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    52,     0,     0,     0,     0,     0,     0,
      49,     0,     0,    50,    51,     0,     0,   107,   108,   109,
     110,     0,   111,   112,   113,     0,   114,   115,   116,   117,
       0,   118,     0,     0,     0,   119,   120,   421,     0,     0,
     121,    52,   122,     0,     0,   123,     0,     0,   124,   125,
       0,   126,     0,     0,   127,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   118,
       0,     0,     0,   119,   120,   105,   106,     0,   121,     0,
     122,   434,     0,   123,     0,     0,   124,   125,     0,   126,
       0,     0,   127,    49,     0,     0,    50,    51,     0,     0,
     107,   108,   109,   110,     0,   111,   112,   113,     0,   114,
     115,   116,   117,   105,   106,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    52,     0,     0,   456,     0,     0,
       0,    49,     0,     0,    50,    51,     0,     0,   107,   108,
     109,   110,     0,   111,   112,   113,     0,   114,   115,   116,
     117,     0,   118,   454,     0,     0,   119,   120,     0,     0,
       0,   121,    52,   122,     0,     0,   123,     0,     0,   124,
     125,     0,   126,     0,     0,   127,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     118,     0,     0,     0,   119,   120,     0,   105,   106,   121,
       0,   122,     0,     0,   123,     0,     0,   124,   125,     0,
     126,   457,     0,   127,     0,    49,     0,     0,    50,    51,
       0,     0,   107,   108,   109,   110,     0,   111,   112,   113,
       0,   114,   115,   116,   117,   105,   106,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    52,     0,     0,     0,
       0,     0,     0,    49,     0,     0,    50,    51,     0,     0,
     107,   108,   109,   110,     0,   111,   112,   113,     0,   114,
     115,   116,   117,     0,   118,     0,     0,     0,   119,   120,
       0,     0,     0,   121,    52,   122,     0,     0,   123,     0,
       0,   124,   125,     0,   126,     0,     0,   127,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   118,     0,     0,     0,   119,   120,   105,   106,
       0,   121,   469,   122,     0,     0,   123,     0,     0,   124,
     125,     0,   126,     0,     0,   127,    49,     0,     0,    50,
      51,     0,     0,   107,   108,   109,   110,     0,   111,   112,
     113,     0,   114,   115,   116,   117,     0,   326,   327,   254,
     255,   256,   257,   258,   259,   260,   261,    52,   262,  -117,
     263,     0,  -123,   387,     0,     0,     0,     0,     0,     0,
       0,     0,   264,   265,   266,   267,   268,   269,   270,   271,
     272,     0,     0,     0,     0,   118,     0,     0,     0,   119,
     120,   105,   106,     0,   121,   471,   122,     0,     0,   123,
       0,     0,   124,   125,     0,   126,     0,     0,   127,    49,
       0,     0,    50,    51,     0,     0,   107,   108,   109,   110,
       0,   111,   112,   113,     0,   114,   115,   116,   117,   105,
     106,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      52,     0,     0,     0,     0,     0,     0,    49,     0,     0,
      50,    51,     0,     0,   107,   108,   109,   110,     0,   111,
     112,   113,     0,   114,   115,   116,   117,     0,   118,     0,
       0,     0,   119,   120,     0,     0,     0,   121,    52,   122,
     475,     0,   123,     0,     0,   124,   125,     0,   126,     0,
       0,   127,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   118,     0,     0,     0,
     119,   120,   105,   106,     0,   121,   478,   122,     0,     0,
     123,     0,     0,   124,   125,     0,   126,     0,     0,   127,
      49,     0,     0,    50,    51,     0,     0,   107,   108,   109,
     110,     0,   111,   112,   113,     0,   114,   115,   116,   117,
     105,   106,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    52,     0,     0,     0,     0,     0,     0,    49,     0,
       0,    50,   235,     0,     0,   107,   108,   109,   110,     0,
     111,   112,   113,     0,   114,   115,   116,   117,     0,   118,
       0,     0,     0,   119,   120,     0,     0,     0,   121,    52,
     122,     0,     0,   123,     0,     0,   124,   125,     0,   126,
       0,     0,   127,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   118,     0,     0,
       0,   119,   120,   105,   175,     0,   121,     0,   122,     0,
       0,   123,     0,     0,   124,   125,     0,   126,     0,     0,
     127,    49,     0,     0,    50,    51,     0,     0,   107,   108,
     109,   110,     0,   111,   112,   113,     0,   114,   115,   116,
     117,   105,   175,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    52,     0,     0,     0,     0,     0,     0,    49,
       0,     0,    50,    51,     0,     0,   107,   108,   109,   110,
       0,   111,   112,   113,     0,   114,   115,   116,   117,     0,
     118,     0,     0,     0,   119,   120,     0,     0,     0,   121,
      52,   122,     0,     0,   123,     0,     0,   124,   125,     0,
     126,     0,     0,   127,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   118,     0,
       0,     0,   119,   303,   105,   106,     0,   121,     0,   122,
       0,     0,   123,     0,     0,   124,   125,     0,   126,     0,
       0,   127,    49,     0,     0,    50,    51,     0,     0,   107,
     108,   109,   110,     0,   111,   112,   113,     0,   114,   115,
     116,   117,     0,   254,   255,   256,   257,   258,   259,   260,
     261,     0,   262,    52,   263,     0,     0,     0,     0,   436,
       0,     0,     0,     0,   437,   438,   264,   265,   266,   267,
     268,   269,   270,   271,   272,     0,     0,     0,     0,     0,
       0,   118,     0,     0,     0,   119,   449,     0,     0,     0,
     121,     0,   122,     0,     0,   123,     0,     0,   124,   125,
       0,   126,     0,     0,   127,  -249,  -249,  -249,  -249,  -249,
    -249,  -249,  -249,  -249,  -249,  -249,  -249,   326,   327,   254,
     255,   256,   257,   258,   259,   260,   261,     0,   262,     0,
     263,     0,     0,     0,     0,  -213,     0,     0,     0,     0,
       0,  -215,   264,   265,   266,   267,   268,   269,   270,   271,
     272,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,
    -249,  -249,  -249,   326,   327,   254,   255,   256,   257,   258,
     259,   260,   261,     0,   262,     0,   263,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -249,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   254,   255,   256,
     257,   258,   259,   260,   261,     0,   262,     0,   263,     0,
       0,     0,     0,   473,     0,     0,     0,     0,   474,     0,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   254,
     255,   256,   257,   258,   259,   260,   261,     0,   262,     0,
     263,     0,  -123,     0,     0,   -66,     0,     0,     0,     0,
       0,     0,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   254,   255,   256,   257,   258,   259,   260,   261,     0,
     262,     0,   263,     0,     0,     0,     0,   496,     0,     0,
       0,     0,   497,     0,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   254,   255,   256,   257,   258,   259,   260,
     261,     0,   262,     0,   263,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   292,     0,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   254,   255,   256,   257,   258,
     259,   260,   261,     0,   262,     0,   263,     0,     0,     0,
       0,  -213,     0,     0,     0,     0,     0,     0,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   254,   255,   256,
     257,   258,   259,   260,   261,     0,   262,   453,   263,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   254,
     255,   256,   257,   258,   259,   260,   261,     0,   262,     0,
     263,     0,     0,    83,     0,     0,     0,     0,     0,     0,
       0,     0,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   254,   255,   256,   257,   258,   259,   260,   261,     0,
     262,     0,   263,     0,     0,   484,     0,     0,     0,     0,
       0,     0,     0,     0,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   254,   255,   256,   257,   258,   259,   260,
     261,     0,   262,   488,   263,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   254,   255,   256,   257,   258,
     259,   260,   261,     0,   262,     0,   263,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   505,     0,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   254,   255,   256,
     257,   258,   259,   260,   261,     0,   262,     0,   263,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   510,     0,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   254,
     255,   256,   257,   258,   259,   260,   261,     0,   262,     0,
     263,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   264,   265,   266,   267,   268,   269,   270,   271,
     272
};

static const yytype_int16 yycheck[] =
{
      34,    56,    81,     6,     6,     7,   227,    53,    99,    33,
     120,   384,     6,   104,   387,    17,     6,     6,    42,    21,
       6,     6,    24,    47,   444,    71,   209,   137,    83,     6,
      32,   176,   177,     6,   179,     6,     3,     6,    70,     5,
     448,    43,    70,     6,    46,     6,     4,    70,    82,     6,
       6,     6,     0,    81,     6,     6,    95,     5,   466,     7,
      94,     9,     6,    95,    85,   120,    27,   122,    70,    35,
      93,    92,    11,    81,    95,   121,   449,   187,   498,    87,
      91,   105,    90,    85,    14,    88,    16,    95,    88,    91,
      70,    87,     5,     6,    14,    95,    16,    94,    95,    88,
      85,    81,   104,   106,    95,    53,    92,    96,    92,   155,
      23,   484,   106,    26,    27,   161,   106,    93,    91,    96,
      91,   176,   177,    92,   179,     5,     6,   348,   183,    92,
      85,   186,   187,   179,    91,   226,   182,    92,   229,    91,
      91,    54,   233,    23,    90,   179,    26,    27,    87,    87,
      30,    31,    32,    33,   209,    35,    36,    37,    88,    39,
      40,    41,    42,    87,    90,    91,   168,    93,    88,    90,
      91,     6,    85,    86,    54,    27,    81,   179,    91,    92,
      93,    85,    87,    96,    89,    90,    90,    91,    92,    92,
      95,    95,    95,   303,    93,   219,    87,    32,   232,    90,
      70,    87,    82,    89,    90,    85,    86,    87,    14,    92,
      16,    91,    95,    93,    94,    91,    96,    93,   273,    99,
     100,   300,   102,    92,   279,   105,    95,   229,   118,   119,
      92,   286,   278,   123,   124,   125,   126,   127,    92,    94,
      95,    95,   288,    70,   389,    90,    91,    92,   303,   359,
     360,   306,   307,    88,    92,    90,     6,    92,    93,    95,
      95,    96,    90,    91,     6,   184,   185,    92,   302,    87,
     325,   491,   492,    95,   308,   309,    87,   311,    87,    87,
       5,     6,    87,     6,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,    23,   482,
      92,    26,    27,    94,   359,   360,   101,    87,   453,   454,
     493,    86,    94,    32,   369,    88,    88,     6,    89,    95,
      94,    83,    83,    83,   379,    32,    90,    94,    12,    54,
      88,   386,    89,    89,   389,   381,    81,    92,   393,   449,
      92,    92,   397,   488,    88,    23,    94,    12,    26,   395,
     396,   397,    88,    88,     2,   400,    70,    35,    36,     8,
      85,    86,    40,     7,    27,    78,    91,   168,    93,    46,
       6,    96,   397,    51,   233,   430,   287,    55,   359,    57,
     375,   436,   360,   229,    -1,   440,    91,   433,   222,    -1,
      -1,    -1,    -1,   448,   449,   397,    74,    75,   453,   454,
      23,   456,   457,    26,    -1,    -1,    -1,    85,    -1,   443,
     444,   466,    35,    36,    92,    -1,    -1,    40,   473,    -1,
      -1,    -1,   100,    -1,    -1,    -1,    -1,   482,    51,    -1,
      -1,    -1,    55,   488,    57,    -1,   491,   492,   493,    -1,
      -1,   496,    -1,   121,    -1,   123,    -1,    -1,    -1,    -1,
      -1,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    23,   498,    -1,    26,    -1,    -1,    92,
      -1,    -1,   150,    -1,   152,    35,    36,   100,   156,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    -1,     5,     6,    -1,
      23,    51,   170,    26,    -1,    55,    -1,    57,    -1,    -1,
      -1,    -1,    35,    36,    -1,    23,    -1,    40,    26,    27,
      -1,    -1,    -1,    -1,    74,    75,     5,     6,    51,    -1,
      -1,    -1,    55,    -1,    57,    85,    -1,   150,    -1,   152,
      -1,    -1,    92,   156,    23,    -1,    54,    26,    27,    -1,
     100,    74,    75,    -1,    -1,    -1,    -1,   170,    -1,    -1,
      -1,    -1,    85,   231,    -1,    -1,    -1,   235,    -1,    92,
      -1,    -1,    -1,    -1,    -1,    54,    -1,   100,    86,    -1,
      -1,    -1,    -1,    91,    -1,    93,    -1,    -1,    96,    -1,
      -1,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
     150,    -1,   152,    35,    36,    -1,   156,    86,    40,    -1,
     278,    -1,    91,    -1,    93,    -1,    -1,    96,   231,    51,
     170,    -1,   235,    55,   292,    57,    -1,   150,    -1,   152,
      -1,    -1,    -1,   156,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    75,     5,     6,    -1,   170,    -1,    -1,
      -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    -1,    23,    -1,    -1,    26,    27,    -1,   100,    -1,
       5,     6,    -1,    -1,    -1,    -1,   344,    -1,    -1,   292,
      -1,   231,    -1,    -1,    -1,   235,    -1,    -1,    23,    -1,
      -1,    26,    27,    54,   362,    -1,    -1,   365,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     5,     6,   375,   231,    70,
      -1,    -1,   235,    -1,    -1,    -1,    -1,    -1,   150,    54,
     152,    -1,    -1,    23,   156,    86,    26,    27,    -1,    -1,
      91,   344,    93,    -1,    -1,    96,    -1,    -1,   170,    -1,
      -1,    -1,   292,    -1,    -1,    -1,     5,     6,    -1,   362,
      -1,    86,   365,    -1,    54,    14,    91,    16,    93,    -1,
      -1,    96,   375,    -1,    23,    -1,    -1,    26,    27,   292,
      70,    30,    31,    32,    33,    -1,    35,    36,    37,    -1,
      39,    40,    41,    42,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    91,    -1,    93,   344,    54,    96,    -1,    -1,   231,
      -1,    -1,    -1,   235,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   362,    -1,    -1,   365,    -1,    -1,    -1,    -1,
      -1,   344,    -1,    82,    -1,   375,    -1,    86,    87,    88,
      -1,    -1,    91,    -1,    93,    -1,    -1,    96,    -1,   362,
      99,   100,   365,   102,    -1,    -1,   105,    -1,    -1,    -1,
      -1,    -1,   375,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     292,    -1,    -1,    -1,    -1,     5,     6,     7,    -1,     9,
      -1,    11,    -1,    13,    -1,    15,    -1,    17,    18,    -1,
      -1,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    -1,    35,    36,    37,    -1,    39,
      40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   344,    53,    54,    -1,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    -1,    -1,
     362,    -1,    -1,   365,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    82,   375,    -1,    -1,    86,    87,    88,    -1,
      -1,    91,    95,    93,    -1,    -1,    96,    -1,    -1,    99,
     100,    -1,   102,    -1,    -1,   105,     5,     6,     7,    -1,
       9,    -1,    11,    -1,    13,    -1,    15,    -1,    17,    18,
      -1,    -1,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    -1,
      39,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    54,    -1,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    87,    88,
      -1,    -1,    91,    95,    93,    -1,    -1,    96,    -1,    -1,
      99,   100,    -1,   102,    -1,    -1,   105,     5,     6,     7,
      -1,     9,    -1,    11,    -1,    13,    -1,    15,    -1,    17,
      18,    -1,    -1,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    -1,    35,    36,    37,
      -1,    39,    40,    41,    42,     5,     6,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    54,    -1,    -1,    19,
      -1,    -1,    -1,    23,    -1,    -1,    26,    27,    -1,    -1,
      30,    31,    32,    33,    -1,    35,    36,    37,    -1,    39,
      40,    41,    42,    -1,    82,    -1,    -1,    -1,    86,    87,
      -1,    -1,    -1,    91,    54,    93,    -1,    -1,    96,    -1,
      -1,    99,   100,    -1,   102,    -1,    -1,   105,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    83,    -1,    -1,    86,    87,     5,     6,
      -1,    91,    -1,    93,    -1,    -1,    96,    -1,    -1,    99,
     100,    -1,   102,    -1,    -1,   105,    23,    -1,    -1,    26,
      27,    -1,    -1,    30,    31,    32,    33,    -1,    35,    36,
      37,    -1,    39,    40,    41,    42,     5,     6,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    26,    27,    -1,
      -1,    30,    31,    32,    33,    -1,    35,    36,    37,    -1,
      39,    40,    41,    42,    -1,    82,    -1,    -1,    -1,    86,
      87,    -1,    -1,    -1,    91,    54,    93,    94,    -1,    96,
      -1,    -1,    99,   100,    -1,   102,    -1,    -1,   105,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    87,    88,
       5,     6,    91,    -1,    93,    -1,    -1,    96,    -1,    -1,
      99,   100,    -1,   102,    -1,    -1,   105,    -1,    23,    -1,
      -1,    26,    27,    -1,    -1,    30,    31,    32,    33,    -1,
      35,    36,    37,    -1,    39,    40,    41,    42,    -1,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    54,
      82,    83,    84,    -1,    86,    87,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,   101,
     102,   103,   104,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    86,    87,     5,     6,    -1,    91,    92,    93,    -1,
      -1,    96,    -1,    -1,    99,   100,    -1,   102,    -1,    -1,
     105,    23,    -1,    -1,    26,    27,    -1,    -1,    30,    31,
      32,    33,    -1,    35,    36,    37,    -1,    39,    40,    41,
      42,     5,     6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    -1,    26,    27,    -1,    -1,    30,    31,    32,    33,
      -1,    35,    36,    37,    -1,    39,    40,    41,    42,    -1,
      82,    -1,    -1,    -1,    86,    87,    -1,    89,    -1,    91,
      54,    93,    -1,    -1,    96,    -1,    -1,    99,   100,    -1,
     102,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,
      -1,    -1,    86,    87,     5,     6,    -1,    91,    -1,    93,
      -1,    -1,    96,    -1,    -1,    99,   100,    -1,   102,    -1,
      -1,   105,    23,    -1,    -1,    26,    27,    -1,    -1,    30,
      31,    32,    33,    -1,    35,    36,    37,    -1,    39,    40,
      41,    42,     5,     6,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    -1,    -1,    26,    27,    -1,    -1,    30,    31,    32,
      33,    -1,    35,    36,    37,    -1,    39,    40,    41,    42,
      -1,    82,    -1,    -1,    -1,    86,    87,    88,    -1,    -1,
      91,    54,    93,    -1,    -1,    96,    -1,    -1,    99,   100,
      -1,   102,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    86,    87,     5,     6,    -1,    91,    -1,
      93,    94,    -1,    96,    -1,    -1,    99,   100,    -1,   102,
      -1,    -1,   105,    23,    -1,    -1,    26,    27,    -1,    -1,
      30,    31,    32,    33,    -1,    35,    36,    37,    -1,    39,
      40,    41,    42,     5,     6,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    19,    -1,    -1,
      -1,    23,    -1,    -1,    26,    27,    -1,    -1,    30,    31,
      32,    33,    -1,    35,    36,    37,    -1,    39,    40,    41,
      42,    -1,    82,    83,    -1,    -1,    86,    87,    -1,    -1,
      -1,    91,    54,    93,    -1,    -1,    96,    -1,    -1,    99,
     100,    -1,   102,    -1,    -1,   105,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    86,    87,    -1,     5,     6,    91,
      -1,    93,    -1,    -1,    96,    -1,    -1,    99,   100,    -1,
     102,    19,    -1,   105,    -1,    23,    -1,    -1,    26,    27,
      -1,    -1,    30,    31,    32,    33,    -1,    35,    36,    37,
      -1,    39,    40,    41,    42,     5,     6,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    -1,    -1,    26,    27,    -1,    -1,
      30,    31,    32,    33,    -1,    35,    36,    37,    -1,    39,
      40,    41,    42,    -1,    82,    -1,    -1,    -1,    86,    87,
      -1,    -1,    -1,    91,    54,    93,    -1,    -1,    96,    -1,
      -1,    99,   100,    -1,   102,    -1,    -1,   105,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    86,    87,     5,     6,
      -1,    91,    92,    93,    -1,    -1,    96,    -1,    -1,    99,
     100,    -1,   102,    -1,    -1,   105,    23,    -1,    -1,    26,
      27,    -1,    -1,    30,    31,    32,    33,    -1,    35,    36,
      37,    -1,    39,    40,    41,    42,    -1,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    54,    82,    83,
      84,    -1,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    97,    98,    99,   100,   101,   102,   103,
     104,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      87,     5,     6,    -1,    91,    92,    93,    -1,    -1,    96,
      -1,    -1,    99,   100,    -1,   102,    -1,    -1,   105,    23,
      -1,    -1,    26,    27,    -1,    -1,    30,    31,    32,    33,
      -1,    35,    36,    37,    -1,    39,    40,    41,    42,     5,
       6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,
      26,    27,    -1,    -1,    30,    31,    32,    33,    -1,    35,
      36,    37,    -1,    39,    40,    41,    42,    -1,    82,    -1,
      -1,    -1,    86,    87,    -1,    -1,    -1,    91,    54,    93,
      94,    -1,    96,    -1,    -1,    99,   100,    -1,   102,    -1,
      -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      86,    87,     5,     6,    -1,    91,    92,    93,    -1,    -1,
      96,    -1,    -1,    99,   100,    -1,   102,    -1,    -1,   105,
      23,    -1,    -1,    26,    27,    -1,    -1,    30,    31,    32,
      33,    -1,    35,    36,    37,    -1,    39,    40,    41,    42,
       5,     6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,
      -1,    26,    27,    -1,    -1,    30,    31,    32,    33,    -1,
      35,    36,    37,    -1,    39,    40,    41,    42,    -1,    82,
      -1,    -1,    -1,    86,    87,    -1,    -1,    -1,    91,    54,
      93,    -1,    -1,    96,    -1,    -1,    99,   100,    -1,   102,
      -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    86,    87,     5,     6,    -1,    91,    -1,    93,    -1,
      -1,    96,    -1,    -1,    99,   100,    -1,   102,    -1,    -1,
     105,    23,    -1,    -1,    26,    27,    -1,    -1,    30,    31,
      32,    33,    -1,    35,    36,    37,    -1,    39,    40,    41,
      42,     5,     6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    -1,    26,    27,    -1,    -1,    30,    31,    32,    33,
      -1,    35,    36,    37,    -1,    39,    40,    41,    42,    -1,
      82,    -1,    -1,    -1,    86,    87,    -1,    -1,    -1,    91,
      54,    93,    -1,    -1,    96,    -1,    -1,    99,   100,    -1,
     102,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    86,    87,     5,     6,    -1,    91,    -1,    93,
      -1,    -1,    96,    -1,    -1,    99,   100,    -1,   102,    -1,
      -1,   105,    23,    -1,    -1,    26,    27,    -1,    -1,    30,
      31,    32,    33,    -1,    35,    36,    37,    -1,    39,    40,
      41,    42,    -1,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    82,    54,    84,    -1,    -1,    -1,    -1,    89,
      -1,    -1,    -1,    -1,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    86,    87,    -1,    -1,    -1,
      91,    -1,    93,    -1,    -1,    96,    -1,    -1,    99,   100,
      -1,   102,    -1,    -1,   105,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    82,    -1,
      84,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      -1,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    -1,    82,    -1,    84,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,    73,    74,    75,
      76,    77,    78,    79,    80,    -1,    82,    -1,    84,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    94,    -1,
      96,    97,    98,    99,   100,   101,   102,   103,   104,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    82,    -1,
      84,    -1,    86,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    97,    98,    99,   100,   101,   102,   103,
     104,    73,    74,    75,    76,    77,    78,    79,    80,    -1,
      82,    -1,    84,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      -1,    -1,    94,    -1,    96,    97,    98,    99,   100,   101,
     102,   103,   104,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    82,    -1,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    94,    -1,    96,    97,    98,    99,
     100,   101,   102,   103,   104,    73,    74,    75,    76,    77,
      78,    79,    80,    -1,    82,    -1,    84,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,
      98,    99,   100,   101,   102,   103,   104,    73,    74,    75,
      76,    77,    78,    79,    80,    -1,    82,    83,    84,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    97,    98,    99,   100,   101,   102,   103,   104,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    82,    -1,
      84,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    97,    98,    99,   100,   101,   102,   103,
     104,    73,    74,    75,    76,    77,    78,    79,    80,    -1,
      82,    -1,    84,    -1,    -1,    87,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    97,    98,    99,   100,   101,
     102,   103,   104,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,
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
     110,   111,   118,   137,   141,   150,     6,    91,   112,   204,
       6,    91,   152,   207,    91,   139,   207,     6,    91,   143,
     144,   145,    93,   146,   203,   204,    85,    92,   205,   206,
     207,     6,   168,    95,    92,   151,   152,     5,     6,    23,
      26,    27,    54,    70,    86,    91,    93,    96,   192,   195,
     196,   197,   201,   202,   208,   213,   214,   215,    92,   138,
     139,    70,   140,   192,    70,   146,    92,   142,   143,   147,
     148,   207,   203,    87,   184,    91,   192,   204,   192,    92,
      95,    95,    85,   192,   203,   207,    92,   151,   203,    90,
      93,    87,    86,   192,    87,     5,     6,    30,    31,    32,
      33,    35,    36,    37,    39,    40,    41,    42,    82,    86,
      87,    91,    93,    96,    99,   100,   102,   105,   159,   164,
     165,   166,   167,   169,   170,   171,   172,   173,   174,   179,
     180,   181,   182,   183,   191,   192,   196,   197,   213,   214,
      27,   192,    94,   159,   192,    70,    93,   193,    92,   138,
     191,    70,   192,   192,    92,   142,    94,    95,    95,     6,
     106,   149,   211,   212,   184,     6,    11,    13,    15,    17,
      18,    21,    22,    24,    25,    28,    29,    87,   113,   114,
     117,   118,   119,   120,   121,   122,   123,   125,   131,   132,
     133,   153,   154,   155,   156,   157,   158,   159,   184,   185,
     191,   207,     6,    92,   205,   192,   184,   195,   192,     6,
      88,   209,   210,   211,     6,    88,    96,   195,   198,   199,
     200,   207,   203,    90,   164,    27,   164,     6,    88,   159,
     174,   175,   176,   177,   178,   191,   192,    85,   164,   192,
     164,   164,   164,   164,    73,    74,    75,    76,    77,    78,
      79,    80,    82,    84,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   160,   161,   162,   163,    90,    91,    93,
     186,   187,   188,   189,   190,   174,    95,    90,    91,   192,
      92,   192,    94,   191,   192,   194,   191,    94,   147,   192,
     101,   153,   159,    87,   153,   159,    19,    83,   115,   116,
     153,   159,   184,   191,   207,     6,   124,    87,   191,   159,
     124,   124,   159,     6,   159,    86,    71,    72,    88,   113,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    70,    81,    94,   203,    88,   209,   195,   193,
      88,   198,    32,   192,   184,     6,   179,   192,    88,    95,
      89,    92,    94,   159,     6,    91,    92,   191,   192,    89,
     159,   159,   168,   191,   192,    95,    94,    95,   211,    83,
     184,    14,    16,   134,   135,   136,    83,    87,   159,    83,
     159,   184,   184,    83,   184,    70,    81,    14,    16,    88,
     126,   127,   128,   159,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   192,   193,
      32,    88,   176,   159,   174,   178,   192,   192,    85,    92,
      95,    85,    92,    95,    94,   159,    89,    94,    95,    92,
      95,   194,    94,   159,    12,   191,    88,   134,    89,    87,
     159,   134,   153,    83,    83,   159,    19,    19,   129,   130,
     155,   159,   191,   207,    88,   127,    89,    92,    92,    92,
      92,    92,   191,    89,    94,    94,   159,    94,    92,   184,
     131,   184,   185,   134,    87,    88,   153,   153,    83,   159,
     159,    70,    81,   185,    92,   159,    89,    94,    12,    88,
     134,   153,   130,   159,   130,    94,   159,   131,   184,    88,
      94
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   107,   108,   108,   109,   109,   109,   110,   110,   110,
     110,   111,   112,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   114,   114,   114,
     114,   115,   115,   115,   115,   115,   115,   115,   116,   116,
     116,   117,   118,   118,   118,   119,   120,   120,   121,   121,
     122,   122,   123,   123,   124,   125,   125,   126,   126,   127,
     128,   128,   128,   129,   129,   129,   130,   131,   131,   131,
     131,   131,   131,   132,   133,   133,   133,   133,   134,   134,
     135,   136,   136,   137,   137,   137,   138,   138,   139,   139,
     140,   140,   141,   141,   141,   142,   142,   143,   143,   144,
     145,   146,   146,   146,   147,   147,   148,   149,   150,   150,
     150,   151,   151,   152,   152,   152,   153,   153,   153,   153,
     153,   154,   155,   156,   157,   157,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     159,   159,   160,   160,   160,   160,   160,   161,   161,   161,
     161,   161,   161,   161,   162,   162,   162,   162,   163,   163,
     163,   163,   163,   163,   164,   164,   164,   164,   164,   164,
     164,   164,   165,   165,   165,   165,   165,   165,   165,   165,
     166,   166,   167,   168,   169,   169,   169,   170,   170,   170,
     171,   171,   171,   171,   171,   171,   171,   172,   172,   173,
     173,   173,   173,   173,   173,   174,   174,   174,   175,   175,
     176,   176,   177,   177,   177,   178,   178,   179,   179,   180,
     180,   180,   180,   181,   182,   182,   183,   184,   185,   185,
     186,   187,   187,   188,   188,   188,   188,   188,   188,   189,
     190,   190,   190,   190,   190,   190,   190,   190,   191,   191,
     192,   192,   192,   192,   192,   192,   192,   192,   192,   192,
     192,   193,   193,   194,   194,   195,   195,   196,   197,   197,
     198,   198,   199,   199,   199,   199,   200,   200,   200,   200,
     201,   202,   203,   203,   203,   204,   204,   204,   205,   205,
     206,   206,   206,   206,   207,   207,   208,   208,   209,   209,
     210,   210,   211,   211,   212,   212,   213,   214,   215,   215,
     215
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     1,     1,     1,     5,     4,     3,
       4,     5,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       2,     5,     3,     4,     4,     3,     4,     3,     4,     4,
       2,     2,     1,     1,     1,     2,     2,     1,     2,     1,
       2,     1,     2,     1,     1,     4,     3,     2,     1,     3,
       2,     2,     1,     3,     3,     1,     1,     7,     7,     5,
       5,     5,     3,     1,     7,     6,     5,     4,     2,     1,
       3,     2,     1,     2,     4,     3,     2,     1,     2,     1,
       3,     2,     2,     4,     3,     2,     1,     1,     1,     3,
       3,     3,     4,     0,     3,     1,     2,     1,     2,     4,
       3,     2,     1,     2,     4,     3,     1,     1,     1,     1,
       1,     0,     3,     1,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     2,     2,
       2,     2,     1,     2,     1,     1,     2,     2,     2,     2,
       4,     5,     3,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     4,     1,     1,     1,     3,     4,     2,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     2,     1,
       2,     3,     4,     5,     4,     4,     3,     7,     6,     4,
       3,     4,     4,     4,     4,     3,     5,     2,     3,     1,
       1,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     4,     3,     1,     1,     3,     4,     4,     3,
       2,     1,     3,     2,     2,     1,     3,     2,     2,     1,
       2,     2,     2,     1,     2,     3,     2,     4,     3,     1,
       3,     2,     1,     2,     1,     3,     4,     3,     2,     1,
       2,     1,     3,     1,     1,     2,     3,     5,     2,     3,
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
#line 2376 "y.tab.c"
    break;

  case 75: /* ExprSwitchStmt: SWITCH SimpleStmt SEMICOLON '{' ExprCaseClauseList '}'  */
#line 137 "lab2.yacc"
                                                                                 {printf("simplestmt\n");}
#line 2382 "y.tab.c"
    break;


#line 2386 "y.tab.c"

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

#line 495 "lab2.yacc"


int main(int argc, char *argv[])
{
    yyin = fopen(argv[1], "r");
	yyparse();
        fclose(yyin);
	if(error_ == 0)
		printf("OK\n");
        
}
