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

%token CONST_INT CONST_CHAR CONST_STRING BOOL IOTA CONST_OCTAL CONST_HEX CONST_BIN  FLOAT_HEX DECIMAL_FLOAT_LIT HEX_FLOAT_LIT RUNE_LIT
%token CONST_INT_ERR CONST_BIN_ERR
%token INT STRING COMPLEXTYPE BYTE FLOAT RUNE UINT BOOL_TYPE TYPE STRUCT UINTPTR ERRORTYPE ANYTYPE COMPARABLE

%token EQ INC DEC SUBEQ PLUSEQ MULEQ DIVEQ MODEQ EQUAL NOTEQUAL GREATEROREQUAL LESSOREQUAL AND OR LSHIFT RSHIFT PEQ XOR SEMICOLON AMP_EXP POINT

%left '+' '-'
%left '*' '/'

%%
prog: PACKAGE IMPORTS {printf("Find package and import\n");} 
	| prog variables
	| prog body
	| prog struct_def
;


variables: VAR id_list definitions
        | CONST id_list definitions
		| id_list definitions
		| VAR '(' var_definition ')' {printf("varblock\n");}
		| CONST '(' id_list ')'
		| CONST '(' const_definition ')'

		
//func_for_var: id '(' data_list')'

definitions: other_definitions 
		| simple_definition 
		| typeless_def
	
var_definition: var_def_list 
			|
			
	
/* CONSTANTS DEFINITION begin */
const_definition:begin_const_definition
			| id_list id_list
            | const_definition begin_const_definition
			| const_definition id_list

begin_const_definition:id_list EQ expression
			|id_list EQ expression_args
			|id_list type EQ expression
			|id_list type EQ expression_args
			|begin_const_definition ','expression
			|begin_const_definition ',' expression_args

/* CONSTANTS DEFINITION final*/

/*MASS_start*/
mass:'{'id_list'}'
    |'{'data_list'}'
	|'{'data_list',''}'
	|'{'mass_len_list'}'
	|'{''}'


mass_len: '['expression_args']'
	|'['expression']'
	|'['']'
	|'['POINT']'
	| mass_len'*'
	
mass_index:	'['data']'
          | mass_index '['data']'
	
mass_len_list: data ':' /*[3]string{2: "blue", 0: "red", 1: "green"}*/
			|mass_len_list other
			|mass_len_list ','
			|mass_len_list data ':'
	
/*MASS_final*/	

		
var_def_list: var_def_list var_def
			| var_def

var_def: id_list EQ data_list  
		| id_list type
		| id_list type EQ data_list

		
data_list: data_list ',' data
		| data 

simple_definition: type EQ data_list
                | type EQ expression 
				| type EQ condition
				| type EQ type mass
				| type {printf("type def\n");}
				
				
typeless_def: PEQ data_list {printf("typeless definition\n");}
			| PEQ id '{' list '}'
			| PEQ type mass
				

other_definitions: EQ other
            |EQ condition 
			|EQ type mass


other: id_list 
	| expression
	| data_list 
	| METHOD
	| id '{' list '}'
	
list: data_list
	| struct_list
				
/* STRUCTURES */
struct_def: TYPE id STRUCT '{' struct_body '}'


struct_body: 
			| struct_list

struct_list: struct_list struct_contain
			| struct_contain

struct_contain: id type
			| id STRUCT '{' struct_body '}'

struct_init: id '{'data_list'}'

/* STRUCTURES */

		
		
expression:  expression operator expression_args
			| expression_args operator expression_args {printf("expression\n");}
;

expression_args: id
				| data
				|id mass_index
				| METHOD
				| '(' expression ')'


single_expression: id INC
				| id DEC
				| id mass_index INC
				| id mass_index DEC

				
logical_expression: logical_expression logical_operator log_arguments
				| log_arguments logical_operator log_arguments
				| '!' '(' logical_expression ')'
				
log_arguments: id logical_condition
            |id mass_index logical_condition
			
logical_condition: eq_op id
				|eq_op id mass_index
				|

logical_operator: AND
				| OR

id_list: id_list ',' id 
		| id
		| id mass_index
		|id_list ',' id mass_index
;

/* FUNCTION BODY */
body: FUNCTION return_value id '(' parameters ')' type '{' statements '}' {printf("Find function defenition\n");}
|FUNCTION return_value id '(' parameters ')' '{' statements '}' {printf("Find function defenition\n");}
;

//type_def: 
//		| type

;
return_value:
			| '(' id type ')'
			| '(' id mass_index type ')'
			//| id structure
;
parameters: parameter_list 
			| 

parameter_list: parameter_list ',' type id
				| type id
				| type id mass_index
;
statements: statement
			| 
;

statement: statement actions
		| actions
;

// IF ELSE 

if_block: IF conditions '{' statements '}' {printf("ifblock!\n");}
		| if_block ELSE else_block 

// 1 sr 
else_block: '{' statements '}' 
		| if_block

conditions: conditions SEMICOLON condition
		| condition
		| id
		| id mass_index		


// sr 
condition: cond_args eq_op cond_args 
		| id PEQ data
		|id mass_index PEQ data
		| condition logical_operator condition

cond_args: //methods
		| data
		| id
		| id mass_index
;

// SWITCH CASE 

//switch_case: SWITCH switch_arg '{' cases default_case '}'
//
//switch_arg: switch_arg_list
//			|
//;			
//switch_arg_list: switch_arg_list SEMICOLON switch_arg
//				| switch_arg
//;
//switch_arg: id
//			| id PEQ methods SEMICOLON
//			| methods
//;
//
//cases: case_list
//	| 
//;	
//case_list: case_list CASE case_args ':' case_block
//		| CASE case_args ':' case_block
//
//;	
//default_case: DEFAULT ':' statements
//			| 
//
//;
//case_args: data_list
//		| id_list
//		| condition
//		| type
//;		
//case_block: statements
//		| statements FALLTHROUGH
//;

switch_case:SWITCH 


eq_op: EQUAL 
	| NOTEQUAL
	| GREATEROREQUAL 
	| LESSOREQUAL
	| AMP_EXP
	| '>'
	| '<'

// FOR LOOPS
// BREAK INSIDE IF 
for_loop: FOR for_def SEMICOLON for_cond SEMICOLON for_act '{' statement '}'
		| FOR for_cond '{' statements '}'

// PEQ ?
for_def:  id_list typeless_def
		| id_list other_definitions
		| PEQ 



for_cond: condition
		|

for_act: single_expression
		| expression

			
actions: variables
		| methods
		| if_block
		| expression
		| single_expression
		| function_call
		| logical_expression
		| for_loop
		//| var_block
		//| switch_case
;

function_call: id '(' method_arguments ')'
             |id mass_index '(' method_arguments ')'
;

operator: '+'
		| '-'
		| '%'
		| '/'
		| '*'	
		| SUBEQ 
		| PLUSEQ 
		| MULEQ 
		| DIVEQ 
		| MODEQ
		| '&'
		| '|'
		| XOR
		| LSHIFT
		| RSHIFT
;		
type: INT
	| STRING
	| COMPLEXTYPE
	| BYTE
	| FLOAT
	| RUNE
	| UINT 
	| BOOL_TYPE
	| mass_len type
	//| type mass
;
data: CONST_BIN
	| CONST_OCTAL
	| CONST_HEX
	| CONST_INT
	| CONST_CHAR
	| CONST_STRING
	| RUNE_LIT
	| BOOL
	| float_lit
	| IOTA
		//| methods
;

/* FLOAT LITERALS */
float_lit: DECIMAL_FLOAT_LIT 
		| HEX_FLOAT_LIT
;

/* FLOAT LITERALS */
	
methods: METHOD '(' method_arguments ')' {printf("Method match\n");}
;
method_arguments: arg_list
				|
;
arg_list: arg_list ',' arguments
		| arguments
;
// 2 rr
arguments: data
		| id
		| id mass_index
		| methods
		| expression
		| '&' id
		| '&' id mass_index
		| condition
		| logical_expression
		| struct_init
		| METHOD
;
	


%%

int main(int argc, char *argv[])
{
    yyin = fopen(argv[1], "r");
	yyparse();
        fclose(yyin);
	if(error_ == 0)
		printf("OK\n");
        
}
