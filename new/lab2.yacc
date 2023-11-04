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
%token ADDEQ DECEQ OREQ XOREQ MULEQ DIVEQ MODEQ LSHIFTEQ RSHIFTEQ ANDEQ ANDXOREQ
%token EQ INC DEC EQUAL NOTEQUAL GREATEROREQUAL LESSOREQUAL AND OR LSHIFT RSHIFT PEQ XOR SEMICOLON AMP_EXP POINT POINTER


%%
prog: PACKAGE IMPORTS {printf("Find package and import\n");} 
	| prog TopLevelDecl
;

TopLevelDecl: Declaration 
		| FunctionDecl 
		| MethodDecl
		
FunctionDecl: FUNCTION id TypeParameters Signature Block
			| FUNCTION id Signature Block
			| FUNCTION id Signature 
			| FUNCTION id TypeParameters Signature 

MethodDecl: FUNCTION Receiver MethodName Signature Block
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

// ForStmt = "for" [ Condition | ForClause | RangeClause ] Block

ForStmt: FOR Expression Block
		| FOR ForClause Block
		| FOR RangeClause Block
		| FOR Block

//ForClause = [ InitStmt ] ";" [ Condition ] ";" [ PostStmt ] .
ForClause: SimpleStmt SEMICOLON Expression SEMICOLON SimpleStmt
		| SimpleStmt SEMICOLON SEMICOLON 
		| SimpleStmt SEMICOLON Expression SEMICOLON 
		| SimpleStmt SEMICOLON SEMICOLON SimpleStmt 
		| SEMICOLON Expression SEMICOLON
		| SEMICOLON Expression SEMICOLON SimpleStmt
		| SEMICOLON SEMICOLON SimpleStmt


// RangeClause = [ ExpressionList "=" | IdentifierList ":=" ] "range" Expression .
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

//IfStmt = "if" [ SimpleStmt ";" ] Expression Block [ "else" ( IfStmt | Block ) ] .
IfStmt: IF SimpleStmt SEMICOLON Expression Block ELSE IfStmt
	| IF SimpleStmt SEMICOLON Expression Block ELSE Block
	| IF SimpleStmt SEMICOLON Expression Block
	| IF Expression Block ELSE IfStmt
	| IF Expression Block ELSE Block
	| IF Expression Block
	


/* ! SWITCH STATEMENT ! */
SwitchStmt: ExprSwitchStmt 
		//| TypeSwitchStmt
	
// ExprSwitchStmt = "switch" [ SimpleStmt ";" ] [ Expression ] "{" { ExprCaseClause } "}" .
ExprSwitchStmt: SWITCH SimpleStmt SEMICOLON Expression '{' ExprCaseClauseList '}'
			| SWITCH SimpleStmt SEMICOLON '{' ExprCaseClauseList '}' {printf("simplestmt\n");}
			| SWITCH Expression '{' ExprCaseClauseList '}'
			| SWITCH '{' ExprCaseClauseList '}'

ExprCaseClauseList: ExprCaseClause ExprCaseClauseList
				| ExprCaseClause
				
ExprCaseClause: ExprSwitchCase ':' Statements
ExprSwitchCase: CASE ExpressionList | DEFAULT

TypeSwitchStmt: SWITCH TypeSwitchGuard '{'TypeCaseClauseList'}'
			| SWITCH SimpleStmt SEMICOLON TypeSwitchGuard '{'TypeCaseClauseList'}'

TypeSwitchGuard: id PEQ PrimaryExpr '.' '(' TYPE ')'
				| PrimaryExpr '.' '(' TYPE ')' 
TypeCaseClauseList: TypeCaseClause TypeCaseClauseList
				| TypeCaseClause
TypeCaseClause: TypeSwitchCase ':' Statements
TypeSwitchCase: CASE TypeList | DEFAULT

/* ! SWITCH STATEMENT ! */

/* CONST DECL */
ConstDecl: CONST ConstSpec
		| CONST '(' ConstSpecList')'
		| CONST '(' ')'

ConstSpecList: ConstSpec ConstSpecList
			| ConstSpec
ConstSpec: IdentifierList ConstExpr
		| IdentifierList
ConstExpr: Type EQ ExpressionList
		| EQ ExpressionList

/* TYPE DECL */
TypeDecl: TYPE TypeSpec 
		| TYPE '(' TypeSpecList ')'
		| TYPE '(' ')'
		
TypeSpecList: TypeSpec TypeSpecList
			| TypeSpec
TypeSpec: AliasDecl | TypeDef

AliasDecl: id EQ Type

/// !!!!!!!!!!!!!

TypeDef: id TypeParameters Type

TypeParameters: '[' TypeParamList ']'
			| '[' TypeParamList ','']'
			|
			
TypeParamList: TypeParamDecl ',' TypeParamList
			| TypeParamDecl
			
TypeParamDecl: IdentifierList TypeConstraint

TypeConstraint: TypeElem

/*VAR DECL*/
VarDecl: VAR VarSpec 
		| VAR '(' VarSpecList ')'
		| VAR '(' ')'
		
VarSpecList: VarSpec VarSpecList
		| VarSpec
VarSpec: IdentifierList Type 
		| IdentifierList Type EQ ExpressionList
		| IdentifierList EQ ExpressionList

SimpleStmt: Assignment  
		| Expression 
		| SendStmt 
		| IncDecStmt 
		| EmptyStatement
;


EmptyStatement: /*empty*/

SendStmt: Channel POINTER Expression
Channel: Expression

IncDecStmt: Expression INC 
		| Expression DEC

Assignment: IdentifierList PEQ ExpressionList
		| IdentifierList EQ ExpressionList
		| ExpressionList EQ ExpressionList
		| ExpressionList ADDEQ ExpressionList
		| ExpressionList DIVEQ ExpressionList
		| ExpressionList DECEQ ExpressionList
		| ExpressionList MULEQ ExpressionList
		| ExpressionList MODEQ ExpressionList
		| ExpressionList LSHIFTEQ ExpressionList
		| ExpressionList RSHIFTEQ ExpressionList
		| ExpressionList XOREQ ExpressionList
		| ExpressionList ANDXOREQ ExpressionList
		| ExpressionList ANDEQ ExpressionList
		| ExpressionList OREQ ExpressionList
		
Expression: UnaryExpr 
		| Expression binary_op Expression 

binary_op: OR 
	| AND 
	| rel_op 
	| add_op 
	| mul_op

mul_op: '*'
	| '/'
	| '%'
	| LSHIFT
	| RSHIFT
	| '&'
	| AMP_EXP

add_op: '-'
	|XOR
	| '|'
	| '+'

rel_op: EQUAL
	| NOTEQUAL
	| '<'
	| '>'
	| LESSOREQUAL
	| GREATEROREQUAL
	
		
UnaryExpr: PrimaryExpr 
		| '+' UnaryExpr
		| '-' UnaryExpr
		| '!' UnaryExpr
		| XOR UnaryExpr
		| '*' UnaryExpr
		| '&' UnaryExpr
		| POINTER UnaryExpr
		

PrimaryExpr: Operand
	| PrimaryExpr Arguments 
	| MethodExpr
	| Conversion
	| PrimaryExpr Selector 
	| PrimaryExpr Index 
	| PrimaryExpr Slice 
	| PrimaryExpr TypeAssertion 

Conversion: Type '(' ExpressionList ')'
		| Type '(' ExpressionList ',' ')'
		

MethodExpr: Type '.' MethodName
MethodName: id

Operand: OperandName
		| Literal
		//| OperandName TypeArgs
		| '(' ExpressionList ')'

Literal: BasicLit 
	  | CompositeLit 
	  | FunctionLit
	  
BasicLit: int_lit 
		| float_lit 
		| imaginary_lit 
		| RUNE_LIT 
		| CONST_CHAR
		| CONST_STRING
		| BOOL

CompositeLit: LiteralType LiteralValue
		| LiteralValue
LiteralType: StructType 
		| ArrayType 
		| '[' POINT ']' Type 
		| SliceType 
		| MapType 
		//| TypeName
		//| TypeName TypeArgs
		| id

LiteralValue: '{' ElementList '}'
			| '{' ElementList ',' '}'
			| '{' '}'
		
ElementList: ElementList ',' KeyedElement
			| KeyedElement

KeyedElement: Key ':' Element
			| Element
			
Key: id 
	| Expression 
	| LiteralValue


Element: Expression 
	| LiteralValue	
			
OperandName: id
		| id '.' OperandName
		
int_lit: CONST_BIN
		| CONST_HEX
		| CONST_OCTAL
		| CONST_INT
;

imaginary_lit: IMAGINARY_LIT
float_lit: DECIMAL_FLOAT_LIT 
		| HEX_FLOAT_LIT
;

FunctionLit: FUNCTION Signature Block

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

// Arguments      = "(" [ ( ExpressionList | Type [ "," ExpressionList ] ) [ "..." ] [ "," ] ] ")" .
Arguments: '(' ExpressionList ')'
		| '(' ExpressionList ',' ')'
		| '(' ExpressionList POINT ')'
		| '(' Type ','')'
		| '(' Type POINT ')'
		| '(' Type ')'
		| '(' Type ',' ExpressionList ')'
		| '(' ')'
	
// 	из-за ситуаций '(' ExpressionList ',' ')' вынуждено работать так  
ExpressionList: ExpressionList ',' Expression
			| Expression 
		
Type: TypeName
	| TypeName TypeArgs 
	| '(' Type ')'
	| ArrayType 
	| PointerType 
	| StructType 
	| FunctionType 
	| InterfaceType 
	| SliceType 
	| MapType 
	| ChannelType

TypeArgs: '[' TypeList ']'
		| '[' TypeList ',' ']'
		
TypeList: Type ',' TypeList
		| Type

TypeName: id 
		| id '.' TypeName


/*ARRAY TYPE*/
ArrayType: '[' Expression ']' Type

/*STRUCT TYPE*/
StructType: STRUCT '{' DeclList '}'
		| STRUCT '{' '}'

DeclList: FieldDecl DeclList 
		| FieldDecl 
	
FieldDecl: IdentifierList Type CONST_STRING
		| IdentifierList Type
		| EmbeddedField CONST_STRING 
		| EmbeddedField 

EmbeddedField: '*' TypeName TypeArgs
			 | TypeName TypeArgs
			 | '*' TypeName
			 | TypeName

/*POINTER TYPE*/
PointerType: '*' Type	 
			 
/*FUNCTION TYPE*/

FunctionType: FUNCTION Signature

Signature: Parameters Parameters
		| Parameters
		| Parameters Type
		
Parameters: '(' ParameterList ')' 
		| '(' ')'
		|  '(' ParameterList ',' ')' 


ParameterList: ParameterDecl ',' ParameterList
		| ParameterDecl
			
ParameterDecl: IdentifierList POINT Type
			| IdentifierList Type
			| IdentifierList // | Type
			| POINT Type
			
			
IdentifierList: id 
			| id ',' IdentifierList
			
/*INTERFACE TYPE*/
InterfaceType: INTERFACE '{' InterfaceElemList '}'
			| INTERFACE '{' '}'
;
InterfaceElemList: InterfaceElem InterfaceElemList
		| InterfaceElem
;
InterfaceElem: id Signature 
			| TypeElem
;
TypeElem: TypeTerm '|' TypeElem
		| TypeTerm
;

// Type --> id		
TypeTerm: id 
		| '~' Type
;

/*SLICE TYPE*/
SliceType: '[' ']' Type

/*MAP TYPE*/
MapType: MAP '[' Type ']' Type

/*CHANNEL TYPE*/

// Type --> id
ChannelType: CHAN Type
		| CHAN POINTER id
		| POINTER CHAN Type
	
	
%%

int main(int argc, char *argv[])
{
    yyin = fopen(argv[1], "r");
	yyparse();
        fclose(yyin);
	if(error_ == 0)
		printf("OK\n");
        
}
