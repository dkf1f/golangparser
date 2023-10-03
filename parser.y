%{
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
extern int line_counter;

%}


%token PACKAGE IMPORTS FUNCTION id VAR EOL CONST CONST_ID METHOD IF ELSE SWITCH CASE FALLTHROUGH DEFAULT FOR BREAK RANGE
%token CONST_INT CONST_FLOAT CONST_CHAR CONST_STRING BOOL 
%token INT STRING COMPLEX BYTE FLOAT RUNE UINT BOOL_TYPE
%token EQ INC DEC SUBEQ PLUSEQ MULEQ DIVEQ MODEQ EQUAL NOTEQUAL GREATEROREQUAL LESSOREQUAL AND OR LSHIFT RSHIFT PEQ XOR SEMICOLON

%left '+' '-'
%left '*' '/'
%%

// MAIN PROGRAMM 
prog: PACKAGE IMPORTS {printf("Find package and import\n");} 
	| prog var_block 
	| prog variables
	| prog const_block
	| prog const_def
	| prog body
;

var_block: VAR '(' var_definition ')' {printf("varblock\n");}

variables: VAR id_list definitions
		| id_list definitions

definitions: other_definitions 
		| simple_definition 
		| typeless_def
	
var_definition: var_def_list 
			|
	
var_def_list: var_def_list var_def
			| var_def

var_def: id EQ data
		| id type
		
data_list: data_list ',' data
		| data 

simple_definition: type EQ data_list 
				| type {printf("type def\n");}
				
				
typeless_def: PEQ data_list {printf("typeless definition\n");}
				

other_definitions: EQ other 

other: id_list 
	| expression
	| data_list 
				

const_block: CONST '(' const_block_definition ')' {printf("constblock\n");}

const_block_definition: const_block_def_list
					|
					
const_block_def_list: const_block_def_list const_block_def
					| const_block_def

const_block_def: CONST_ID EQ data

const_def: CONST CONST_ID type EQ data {printf("const type definition\n");}
		| CONST CONST_ID EQ data {printf("const typeless definition\n");}
		
		
expression:  expression operator expression_args
			| expression_args operator expression_args {printf("expression\n");}
;

expression_args: id
				| data


single_expression: id INC
				| id DEC

				
logical_expression: logical_expression logical_operator log_arguments
				| log_arguments logical_operator log_arguments
				| '!' '(' logical_expression ')'
				
log_arguments: id logical_condition
			
logical_condition: eq_op id
				|

logical_operator: AND
				| OR

id_list: id_list ',' id 
		| id


// FUNCTION BODY
body: FUNCTION id '(' parameters ')' '{' statements '}' {printf("Find function defenition\n");}
;

parameters: parameter_list 
			| 

parameter_list: parameter_list ',' type id
				| type id
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
		|


// sr 
condition: cond_args eq_op cond_args 
		| id PEQ data

cond_args: //methods
		| data
		| id
;

// SWITCH CASE 

switch_case: SWITCH switch_arg '{' cases default_case '}'

switch_arg: switch_arg_list
			|
;			
switch_arg_list: switch_arg_list SEMICOLON switch_arg
				| switch_arg
;
switch_arg: id
			| id PEQ methods SEMICOLON
			| methods
;

cases: case_list
	| 
;	
case_list: case_list CASE case_args ':' case_block
		| CASE case_args ':' case_block

;	
default_case: DEFAULT ':' statements
			| 

;
case_args: data_list
		| id_list
		| condition
		| type
;		
case_block: statements
		| statements FALLTHROUGH
;

eq_op: EQUAL 
	| NOTEQUAL
	| GREATEROREQUAL 
	| LESSOREQUAL
	| '>'
	| '<'

// FOR LOOPS
// BREAD INSIDE IF 
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
		| switch_case
		| function_call
		| logical_expression
		| for_loop
;

function_call: id '(' method_arguments ')'
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
	| COMPLEX
	| BYTE
	| FLOAT
	| RUNE
	| UINT 
	| BOOL_TYPE
;
data: CONST_INT
	| CONST_FLOAT
	| CONST_CHAR
	| CONST_STRING
	| BOOL
	| methods
;	
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
		| methods
		| expression
		| CONST_ID
		| '&' id
		| condition
		| logical_expression
;


%%

int main(int argc, char **argv)
{
#ifdef __linux__ 
    yyparse();

#elif _WIN32
    FILE* inputStream = fopen(argv[1], "r");
    if (inputStream == NULL)
    {
        printf("Can't found input file yyin.txt\n");
        exit(-1);
	}
    yyset_in(inputStream);
	yyparse();
    fclose(inputStream);
#endif
	return 0;

}

int yyerror(const char *msg)
{
	printf("Syntax error\n");

}

yywrap() {}