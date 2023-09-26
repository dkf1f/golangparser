%{
#include <stdio.h>
#include <stdlib.h>
extern int line_counter;

%}


%token PACKAGE IMPORTS FUNCTION id VAR EOL CONST CONST_ID METHOD IF ELSE SWITCH CASE FALLTHROUGH DEFAULT FOR
%token CONST_INT CONST_FLOAT CONST_CHAR CONST_STRING BOOL 
%token INT STRING COMPLEX BYTE FLOAT RUNE UINT BOOL_TYPE

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

variables: VAR variables {printf("var\n");} 
	| simple_definition
	| other_definitions
	| typeless_def
	
var_definition: var_def_list 
			|
	
var_def_list: var_def_list var_def
			| var_def

var_def: id '=' data
		| id type
		
data_list: data_list ',' data
		| data

simple_definition: id_list type '=' data_list 
				| id_list type {printf("type def\n");}
				
typeless_def: id_list ':''=' data_list {printf("typeless definition\n");}
			| id_list '=' data_list {printf("typeless def\n");}
				

other_definitions: id_list '=' id_list
				| id_list '=' expression
				

const_block: CONST '(' const_block_definition ')' {printf("constblock\n");}

const_block_definition: const_block_def_list
					|
					
const_block_def_list: const_block_def_list const_block_def
					| const_block_def

const_block_def: CONST_ID '=' data

const_def: CONST CONST_ID type '=' data {printf("const type definition\n");}
		| CONST CONST_ID '=' data {printf("const typeless definition\n");}
		
		
expression:  expression operator expression_args
			| expression_args operator expression_args {printf("expression\n");}
;

expression_args: id
				| data


// !!!!!!!!!!!				
single_expression: id single_operator

				
single_operator: '+''+'
				| '-''-'
		

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

conditions: conditions ';' condition
		| condition


// sr 
condition: cond_args
		| cond_args eq_op cond_args 
		| id ':''=' data

cond_args: //methods
		| data
		| id
;

// SWITCH CASE 

switch_case: SWITCH switch_arg '{' cases default_case '}'

switch_arg: switch_arg_list
			|
;			
switch_arg_list: switch_arg_list ';' switch_arg
				| switch_arg
;
switch_arg: id
			| id ':''='methods ';'
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
//
eq_op: '=''='
	| '>''='
	| '<''='
	| '!''='
	| '>'
	| '<'

		
actions: variables
		| methods
		| if_block
		| expression
		//| single_expression
		| switch_case
		| function_call
		//| for_loop
;

function_call: id '(' method_arguments ')'
;

operator: '+'
		| '-'
		| '%'
		| '/'
		| '*'	
		| '-''='
		| '+''='
		| '*''='
		| '/''='
		| '%''='
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
		//| condition
;


%%

int main()
{
    yyparse();
    //printf("Parsing Successful\n");
    return 0;
}

int yyerror(const char *msg)
{
	printf("Parsing Failed\nLine Number: %d %s\n",line_counter,msg);
	//success = 0;
	return 0;
}

yywrap() {}