%{
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
%}

%token PACKAGE IMPORTS FUNCTION id VAR EOL CONST METHOD IF ELSE SWITCH CASE FALLTHROUGH DEFAULT FOR BREAK RANGE NEW SELECT RETURN MAP GO GOTO INTERFACE CHAN CONTINUE
%token DEFER

%token CONST_INT CONST_CHAR CONST_STRING BOOL IOTA CONST_OCTAL CONST_HEX CONST_BIN  FLOAT_HEX DECIMAL_FLOAT_LIT HEX_FLOAT_LIT RUNE_LIT IMAGINARY_LIT
%token CONST_INT_ERR CONST_BIN_ERR
%token INT STRING COMPLEXTYPE BYTE FLOAT RUNE UINT BOOL_TYPE TYPE STRUCT UINTPTR ERRORTYPE ANYTYPE COMPARABLE

%token EQ INC DEC SUBEQ PLUSEQ MULEQ DIVEQ MODEQ EQUAL NOTEQUAL GREATEROREQUAL LESSOREQUAL AND OR LSHIFT RSHIFT PEQ XOR SEMICOLON AMP_EXP POINT POINTER

%left '+' '-'
%left '*' '/'

%%
prog: PACKAGE IMPORTS {printf("Find package and import\n");} 
	| prog TopLevelDecl
;

TopLevelDecl: Declaration 
		| FunctionDecl 
		| MethodDecl
		
FunctionDecl: FUNCTION FunctionName TypeParameters Signature FunctionBody
			| FUNCTION FunctionName Signature FunctionBody
			| FUNCTION FunctionName Signature 
			| FUNCTION FunctionName TypeParameters Signature 
FunctionName: id
FunctionBody: Block

MethodDecl: FUNCTION Receiver MethodName Signature FunctionBody
Receiver: Parameters

Statement: Declaration 
	//| LabeledStmt 
	| SimpleStmt 
	| GoStmt 
	| ReturnStmt 
	| BreakStmt 
	| ContinueStmt 
	| GotoStmt 
	| FALLTHROUGH 
	| Block 
	| IfStmt 
	| SwitchStmt 
	| SelectStmt 
	| ForStmt 
	| DeferStmt 
;

ForStmt: FOR Condition Block
		| FOR ForClause Block
		| FOR RangeClause Block

Condition: Expression
		| /*empty*/

ForClause: SimpleStmt SEMICOLON Condition SEMICOLON SimpleStmt

RangeClause: ExpressionList EQ RANGE Expression
			| IdentifierList PEQ RANGE Expression
			| RANGE Expression
			
DeferStmt: DEFER Expression

Declaration: ConstDecl 
		| TypeDecl 
		| VarDecl

GoStmt: GO Expression

ReturnStmt: RETURN ExpressionList
		| RETURN
		
BreakStmt: BREAK Label
		| BREAK
		
ContinueStmt: CONTINUE Label
		| CONTINUE
		
GotoStmt: GOTO Label
		| GOTO
		
Label: id

SelectStmt: SELECT '{' CommClauseList '}'
		| SELECT '{' '}'

CommClauseList: CommClauseList CommClause
			| CommClause
CommClause: CommCase ':' Statements
CommCase: CASE SendStmt 
		| CASE RecvStmt 
		| DEFAULT
		
RecvStmt: ExpressionList EQ RecvExpr
		| IdentifierList PEQ RecvExpr
		| RecvExpr
		
RecvExpr: Expression
// [SimpleStmt] !!!
IfStmt: IF SimpleStmt SEMICOLON Expression Block ElseStmt
	| IF Expression Block ElseStmt

ElseStmt: ELSE IfStmt
		| ELSE Block
		| /*empty*/


/* ! SWITCH STATEMENT ! */
SwitchStmt: ExprSwitchStmt 
		| TypeSwitchStmt
		
ExprSwitchStmt: SWITCH SimpleStmt SEMICOLON Expression '{' ExprCaseClauseList '}'
			| SWITCH SimpleStmt SEMICOLON '{' ExprCaseClauseList '}'
			| SWITCH Expression '{' ExprCaseClauseList '}'
			| SWITCH '{' ExprCaseClauseList '}'

ExprCaseClauseList: ExprCaseClause ExprCaseClauseList
				| ExprCaseClause
ExprCaseClause: ExprSwitchCase ':' Statements
ExprSwitchCase: CASE ExpressionList | DEFAULT

TypeSwitchStmt: SWITCH TypeSwitchCondition TypeSwitchGuard '{'TypeCaseClauseList'}'
TypeSwitchCondition: /**/
				| SimpleStmt SEMICOLON
TypeSwitchGuard: id PEQ PrimaryExpr '.' '(' TYPE ')' 
				| PrimaryExpr '.' '(' TYPE ')' 
TypeCaseClauseList: TypeCaseClause TypeCaseClauseList
				| TypeCaseClause
TypeCaseClause: TypeSwitchCase ':' Statements
TypeSwitchCase: CASE TypeList | DEFAULT

/* ! SWITCH STATEMENT ! */

/* CONST DECL */
ConstDecl: CONST ConstStmt
ConstStmt: ConstSpec
		| '(' ConstSpecList')'
		| '(' ')'

ConstSpecList: ConstSpec ConstSpecList
			| ConstSpec
ConstSpec: IdentifierList ConstExpr
ConstExpr: Type EQ ExpressionList
		| EQ ExpressionList
		| /*empty*/

/* TYPE DECL */
TypeDecl: TYPE TypeStmt 
TypeStmt: TypeSpec 
		| '(' TypeSpecList ')'
		| '(' ')'
		
TypeSpecList: TypeSpec TypeSpecList
			| TypeSpec
TypeSpec: AliasDecl | TypeDef

AliasDecl: id EQ Type

TypeDef: id Type
		| id TypeParameters Type

TypeParameters: '[' TypeParamList ']'
TypeParamList: TypeParamDecl ',' TypeParamList
			| TypeParamDecl
TypeParamDecl: IdentifierList TypeConstraint
TypeConstraint: TypeElem

/*VAR DECL*/
VarDecl: VAR VarStmt
VarStmt: VarSpec 
		| '(' VarSpecList ')'
		| '(' ')'
VarSpecList: VarSpec VarSpecList
			| VarSpec
VarSpec: IdentifierList Type 
		| IdentifierList Type EQ ExpressionList
		| IdentifierList EQ ExpressionList

SimpleStmt: EmptyStatement
		| ExpressionStmt 
		| SendStmt 
		| IncDecStmt 
		| Assignment 
		| ShortVarDecl
;
EmptyStatement: /*empty*/

SendStmt: Channel POINTER Expression
Channel: Expression

IncDecStmt: Expression INC 
		| Expression DEC
		
Assignment: ExpressionList assign_op ExpressionList
		| Expression assign_op ExpressionList

assign_op: EQ
		| add_op EQ
		| mul_op EQ

ShortVarDecl: IdentifierList PEQ ExpressionList

ExpressionStmt: Expression

Expression: UnaryExpr 
		| Expression binary_op Expression
		
UnaryExpr: PrimaryExpr 
		| unary_op UnaryExpr

PrimaryExpr: Operand
	| MethodExpr
	| Conversion
	| PrimaryExpr Selector 
	| PrimaryExpr Index 
	| PrimaryExpr Slice 
	| PrimaryExpr TypeAssertion 
	| PrimaryExpr Arguments 

Conversion: Type '(' ExpressionList ')'
		| Type '(' ')'

MethodExpr: ReceiverType '.' MethodName
ReceiverType: Type
MethodName: id

Operand: OperandName
		| OperandName TypeArgs
		| Literal
		| '(' Expression ')'

Literal: BasicLit 
	//| CompositeLit 
	  | FunctionLit
BasicLit: int_lit 
		| float_lit 
		| imaginary_lit 
		| RUNE_LIT 
		| CONST_STRING
		| BOOL

		
OperandName: id
		| QualifiedIdent
		
QualifiedIdent: id '.' id

int_lit: CONST_BIN
		| CONST_HEX
		| CONST_OCTAL
		| CONST_INT
;

imaginary_lit: IMAGINARY_LIT
float_lit: DECIMAL_FLOAT_LIT 
		| HEX_FLOAT_LIT
;

FunctionLit: FUNCTION Signature FunctionBody

FunctionBody: Block

Block: '{' Statements '}'
			
Statements: Statements Statement  
		| Statement


Selector: '.' id

Index: '[' Expression ']'
	| '[' Expression ',' ']'

Slice: '[' Expression ':' Expression ']' 
	| '[' ':' Expression ']' 
	| '[' Expression ':' ']' 
	| '['  ':'  ']' 
	| '[' Expression ':' Expression ':' Expression ']'
	| '['  ':' Expression ':' Expression ']'
;

TypeAssertion: '.' '(' Type ')'

Arguments: '(' ExpressionList ')'
		| '(' Type ')'
		| '(' Type ',' ExpressionList ')'
		| '(' ')'
		
ExpressionList: Expression
			| ExpressionList ',' Expression
		
Type: TypeName TypeArgs 
	| TypeLit 
	| '(' Type ')'

TypeArgs: /*empty*/
		| '[' TypeList ']'
		| '[' TypeList ',' ']'
		
TypeList: Type ',' TypeList
		| Type

TypeName: id 
		| id '.' id

TypeLit: ArrayType 
	| StructType 
	| PointerType 
	| FunctionType 
	| InterfaceType 
	| SliceType 
	| MapType 
	| ChannelType

/*ARRAY TYPE*/
ArrayType: '[' ArrayLength ']' ElementType
ArrayLength: Expression
ElementType: Type

/*STRUCT TYPE*/
StructType: STRUCT '{' FieldDeclList '}'
FieldDeclList: /*empty*/
		| DeclList 
DeclList: FieldDecl DeclList 
		| FieldDecl 
FieldDecl: IdentifierList Type Tag
		| EmbeddedField Tag 
Tag: 
	| CONST_STRING
EmbeddedField: '*' TypeName TypeArgs
			 | TypeName TypeArgs

/*POINTER TYPE*/
PointerType: '*' Type	 
			 
/*FUNCTION TYPE*/
FunctionType: FUNCTION Signature
Signature: Parameters
		| Parameters Result
Result: Parameters 
		| Type
		
Parameters: '(' ParameterList ')' 
		| '(' ')'
		|  '(' ParameterList ',' ')' 


ParameterList: ParameterList ',' ParameterDecl
		| ParameterDecl
			
ParameterDecl: IdentifierList POINT Type
			| IdentifierList Type
			| POINT Type
			| Type
			// !!!!!!!!!!
			| id Type
			
			
IdentifierList: id ',' IdentifierList
			| id
			
/*INTERFACE TYPE*/
InterfaceType: INTERFACE '{' InterfaceElemList '}'
			| INTERFACE '{' '}'
;
InterfaceElemList: InterfaceElemList InterfaceElem
		| InterfaceElem
;
InterfaceElem: MethodElem 
			| TypeElem
;
MethodElem: id Signature
;
TypeElem: TypeTerm '|' TypeElem
		| TypeTerm
;		
TypeTerm: Type 
		| '~' Type
;

/*SLICE TYPE*/
SliceType: '[' ']' ElementType

/*MAP TYPE*/
MapType: MAP '[' Type ']' ElementType

/*CHANNEL TYPE*/
ChannelType: ChanMix ElementType
ChanMix: ChanMix ChanValues
		| ChanValues
ChanValues:  CHAN
		| CHAN POINTER
		| POINTER CHAN

unary_op: '+'
		| '-'
		| '!'
		| XOR
		| '*'
		| '&'
		| POINTER
	
binary_op: OR | AND | rel_op | add_op | mul_op

mul_op: '*'
	| '/'
	| '%'
	| LSHIFT
	| RSHIFT
	| '&'
	| AMP_EXP

add_op: XOR
	| '|'
	| '+'
	| '-'

rel_op: EQUAL
	| NOTEQUAL
	| '<'
	| '>'
	| LESSOREQUAL
	| GREATEROREQUAL
	

%%

int main(int argc, char *argv[])
{
    yyin = fopen(argv[1], "r");
	yyparse();
        fclose(yyin);
	if(error_ == 0)
		printf("OK\n");
        
}
