%{
#include <cstdio>
#include <iostream>
#include <fstream>
using namespace std;

#include "cpp2php.tab.h"  // to get the token types that we return

// stuff from flex that bison needs to know about:
extern "C" int yylex();
extern "C++" int yyparse(void);
extern "C" FILE *yyin;
extern "C" FILE *yyout;
extern int line_num;

void yyerror(const char *s);

#define write(...) fprintf (yyout, __VA_ARGS__)
%}

// Bison fundamentally works by asking flex to get the next token, which it
// returns as an object of type "yystype".  But tokens could be of any
// arbitrary data type!  So we deal with that in Bison by defining a C union
// holding each of the types of tokens that Flex could return, and have Bison
// use that union instead of "int" for the definition of "yystype":
%union {
	int ival;
	float fval;
	char *sval;
}

// define the constant-string tokens:
%token INCLUDE_TOK DEFINE_TOK ABSTRACT_TOK AUTO_TOK BOOL_TOK BREAK_TOK CASE_TOK CATCH_TOK CHAR_TOK CLASS_TOK CONST_TOK CONTINUE_TOK DEFAULT_TOK DELETE_TOK DIV_ASSIGN_TOK DO_TOK DOUBLE_TOK ELSE_TOK ENUM_TOK EXTERN_TOK FALSE_TOK FINALLY_TOK FLOAT_TOK EACH_TOK FOR_TOK IN_TOK FRIEND_TOK IF_TOK INLINE_TOK INT_TOK INTERFACE_TOK LITERAL_TOK LONG_TOK MUTABLE_TOK NAMESPACE_TOK NEW_TOK PRIVATE_TOK PROTECTED_TOK PUBLIC_TOK REGISTER_TOK RETURN_TOK SHORT_TOK SIGNED_TOK SIZEOF_TOK STATIC_TOK STRUCT_TOK SWITCH_TOK TEMPLATE_TOK THIS_TOK THREAD_TOK THROW_TOK TRUE_TOK TRY_TOK TYPEDEF_TOK UNION_TOK UNSIGNED_TOK USING_TOK VIRTUAL_TOK VOID_TOK VOLATILE_TOK WHILE_TOK

%token ENDL NOT_EQUAL_TOK MOD_ASSIGN_TOK AND_TOK BIN_AND_ASSIGN_TOK MULTIPLY_ASSIGN_TOK INC_TOK ADD_ASSIGN_TOK DEC_TOK SUB_ASSIGN_TOK DIV_ASSGN_TOK LEFT_SHIFT_TOK LEFT_SHIFT_ASSIGN_TOK LESS_OR_EQUAL_TOK EQUAL_TOK GREATER_OR_EQUAL_TOK RIGHT_SHIFT_TOK RIGHT_SHIFT_ASSIGN_TOK EXCLUSIVE_OR_ASSIGN_TOK BITWISE_INCLUSIVE_OR_ASSIGN_TOK OR_TOK SCOPE_TOK

// define the "terminal symbol" token types I'm going to use (in CAPS
// by convention), and associate each with a field of the union:
%token <ival> INT_NUM_TOK
%token <fval> FLOAT_NUM_TOK
%token <sval> STRING_TOK
%token <sval> IDENT_TOK
%token <sval> OPERATOR_FUN_TOK

%%

parse:
    { write("<?php\n"); } cpp { cout << "Parsing was complited successfully" << endl; };

cpp:
    including defining definitions
    | including definitions
    | defining definitions
    | definitions;

including:
    including { write("include '"); } including1 { write("';\n"); }
    | { write("include '"); } including1 { write("';\n"); };

including1:
    | INCLUDE_TOK '<' include_arg '>'
    | INCLUDE_TOK '"' include_arg '"';

include_arg:
    include_arg '.' IDENT_TOK { write(".%s",$3);};
    | IDENT_TOK { write($1);};

// not present in php
defining: defining1 { cout << "Defining" << endl; };

// not present in php
defining1: defining DEFINE_TOK IDENT_TOK value | DEFINE_TOK IDENT_TOK value;

// not present in php
definitions: definitions1 { cout << "Definitions" << endl; };

// not present in php
definitions1: var_declaration | var_definition | template | class | struct | union | function_definition | function_declaration | definitions var_declaration | definitions var_definition | definitions template | definitions class | definitions struct | definitions union | definitions function_declaration | definitions function_definition;

// not present in php
template: template1 { cout << "template" << endl; };

// not present in php
template1: TEMPLATE_TOK '<' template_arguments '>' CLASS_TOK '{' class_body '}' | TEMPLATE_TOK '<' template_arguments '>' CLASS_TOK ':' extensions '{' class_body '}';

class: class1 { cout << "Class" << endl; };

class1:
	CLASS_TOK IDENT_TOK '{' {write("class %s {\n",$2);} class_body '}' {write("}\n");}
	| CLASS_TOK IDENT_TOK ':' extensions '{' class_body '}';

// not present in php
struct: struct1 { cout << "Struct" << endl; };

// not present in php
struct1: STRUCT_TOK '{' struct_body '}' | STRUCT_TOK ':' extensions '{' struct_body '}';

// not present in php
union: union1 { cout << "Union" << endl; };

// not present in php
union1: UNION_TOK '{' union_body '}';

// not present in php
union_body: union_body var_declaration | var_declaration;

extensions: extensions ',' access_specifier IDENT_TOK |  access_specifier IDENT_TOK;

access_specifier:
	PUBLIC_TOK { write("public "); }
	| PROTECTED_TOK { write("protected "); }
	| PRIVATE_TOK { write("private "); };

class_body:
	| class_body access_specifier ':'
	| access_specifier var_declaration
	| access_specifier var_definition
	| access_specifier function_declaration
	| access_specifier function_definition
	| class_body access_specifier var_declaration
	| class_body access_specifier var_definition
	| class_body access_specifier function_declaration
	| class_body access_specifier function_definition;

// not present in php
struct_body: | struct_body var_declaration | struct_body var_definition | struct_body function_declaration | struct_body function_definition | var_declaration | var_definition | function_declaration | function_definition;

var_declaration:
    var_declaration1 { cout << "var_declaration" << endl; };

var_declaration1:
    type IDENT_TOK ';' { write("$%s;\n", $2); };

var_definition:
    var_definition1 { cout << "var_definition" << endl; };

var_definition1:
    type IDENT_TOK '=' { write("$%s = ", $2); } var_definition2 ';' { write(";\n"); };

var_definition2:
    ident
    | function_call
    | operation
    | value
    | NEW_TOK { write("new "); } var_definition3;

var_definition3:
    function_call
    | type;

// not present in php
function_declaration: function_declaration1 { cout << "Function declaration" << endl; };

// not present in php
function_declaration1: type IDENT_TOK '(' arguments ')' ';';

function_definition:
    function_definition1 { cout << "Function definition" << endl; };

function_definition1:
    type IDENT_TOK '(' { write("function %s(", $2); } arguments ')' { write(") {\n"); } '{' function_body '}' { write("}\n"); };

function_body:
    function_body var_declaration
    | function_body  var_definition
    | function_body  function_call ';' { write(";\n"); }
    | function_body  assignment
    | function_body  operation ';' { write(";\n"); }
    | function_body  condition_if
    | function_body  condition_switch
    | function_body  loop_for
    | function_body loop_while
    | function_body  loop_do
    | function_body  BREAK_TOK ';' { write("break;\n"); }
    | function_body returning
    | var_declaration
    | var_definition
    | function_call ';' { write(";\n"); }
    | assignment
    | operation ';' { write(";\n"); }
    | condition_if
    | condition_switch
    | loop_for
    | loop_while
    | loop_do
    | BREAK_TOK ';' { write("break;\n"); }
    | returning
    | function_body ';' { write(";\n"); }
    | ';' { write(";\n"); };

one_line_function_body:
    var_declaration
    | var_definition
    | function_call ';'
    | assignment
    | operation ';'
    | condition_if
    | condition_switch
    | loop_for
    | loop_while
    | loop_do
    | BREAK_TOK ';'
    | returning;

returning:
    RETURN_TOK { write("return "); } returning1 ';' {write(";\n"); };
    | RETURN_TOK ';' { write("return;\n"); }

returning1:
    ident
    | function_call
    | operation
    | value
    | NEW_TOK { write("new "); } returning2;

returning2:
    function_call
    | type

function_call:
    function_call1 { cout << "function_call" << endl; };

function_call1:
    IDENT_TOK '(' { write("%s(", $1); } call_arguments ')' { write(")"); }
    | IDENT_TOK '.' IDENT_TOK '(' { write("%s.%s(", $1, $3); } call_arguments ')' { write(")"); };

assignment:
    assignment1 { cout << "Assignment" << endl; };

assignment1:
    ident assign_operator assignment2 ';' { write(";\n"); };

assignment2:
    ident
    | function_call
    | operation
    | value
    | NEW_TOK { write("new "); } assignment3;

assignment3:
    function_call
    | type;

operation:
    operation1 { cout << "Operation" << endl; };

operation1:
    operation operator ident
    | operation operator function_call
    | operation operator value
    | operation operator NEW_TOK { write("new "); } function_call
    | NEW_TOK { write("new "); } operation2
    | ident
    | function_call
    | value
    | ident INC_TOK { write("++"); }
    | INC_TOK { write("++"); } ident
    | ident DEC_TOK { write("--"); }
    | DEC_TOK { write("--"); } ident
    | operation operator '(' { write("("); } operation ')' { write(")"); }
    | '(' { write("("); } operation ')' { write(")"); }
    | '!' { write("!"); } operation
    | operation operator '!' { write("!"); } operation;

operation2:
    type
    | function_call;

comparation:
    operation;

condition_if:
    condition_if1 { cout << "If" << endl; };

condition_if1:
    IF_TOK '(' { write("if ("); } comparation ')' { write(")"); } condition_if2 condition_else { write("\n"); };

condition_if2:
    '{' { write(" {\n"); } function_body '}' { write("}"); }
    | { write("\n"); } one_line_function_body;

condition_else:
    | ELSE_TOK { write(" else"); } condition_else2 { write("\n"); };

condition_else2:
    '{' { write(" {\n"); } function_body '}' { write("}"); }
    | { write("\n"); } one_line_function_body;

condition_switch:
    condition_switch1 { cout << "Switch" << endl; };

condition_switch1:
    SWITCH_TOK '(' IDENT_TOK ')' '{' { write("switch (%s) {\n", $3); } switch_body '}' { write("}\n"); };

switch_body:
    cases_section default_section;

cases_section:
    cases_section CASE_TOK { write("case "); } switch_value ':' { write(":\n"); } case_body
    | CASE_TOK { write("case "); } switch_value ':' { write(":\n"); } case_body;

default_section:
    | DEFAULT_TOK ':' { write("default:\n"); } case_body;

case_body:
    | function_body

switch_value:
    INT_NUM_TOK { write("%d", $1); }

loop_for:
    loop_for1 { cout << "For" << endl; };

loop_for1:
    FOR_TOK '(' { write("for ("); } initial_args ';' { write(", "); } comparation ';' { write(", "); } action_args ')' { write(")"); } loop_for2

loop_for2:
    '{' { write(" {\n"); } function_body '}' { write("}\n"); }
    | { write("\n"); } one_line_function_body { write("\n"); };

loop_do:
    DO_TOK '{' { write("do {\n"); } function_body '}' WHILE_TOK '(' { write("} while ("); } comparation ')' ';' { write(");\n"); }
    | DO_TOK { write("do\n"); } one_line_function_body WHILE_TOK '(' { write("while ("); } comparation ')' ';' { write(");\n"); };

initial_args:
    initial_args ',' type IDENT_TOK '=' { write(", $%s = ", $4); } value
    | initial_args ',' { write(", "); } ident '=' value
    | type IDENT_TOK '=' { write("$%s = ", $2); } value
    | ident '=' { write(" = "); } value;

action_args: action_args ',' operation | operation;

call_arguments:
    | operation
    | call_arguments ',' { write(", "); } operation;

loop_while:
    WHILE_TOK '(' { write("while ("); } comparation ')' { write(")"); } loop_while2;

loop_while2:
    '{' { write(" {\n"); } function_body '}' { write("}\n"); }
    | { write("\n"); } one_line_function_body { write("\n"); };

arguments:
    | arguments ',' type IDENT_TOK { write(", $%s", $4); }
    | type IDENT_TOK { write("$%s", $2); };

template_arguments: | template_arguments ',' type IDENT_TOK | type IDENT_TOK | template_arguments ',' IDENT_TOK IDENT_TOK | IDENT_TOK IDENT_TOK;

value:
    INT_NUM_TOK { write("%d", $1); }
    | FLOAT_NUM_TOK { write("%f", $1); }
    | STRING_TOK { write("%s", $1); }
    | TRUE_TOK { write("true"); }
    | FALSE_TOK { write("false"); };

operator:
    operation_operator
    | comparing_operator
    | logical_operator;

operation_operator:
    '+' { write("+"); }
    | '*' { write("*"); }
    | '-' { write("-"); }
    | '/' { write("/"); }
    | '%' { write("\%"); }
    | LEFT_SHIFT_TOK { write("<<"); }
    | RIGHT_SHIFT_TOK { write(">>"); }
    | '|' { write("|"); }
    | '&' { write("&"); };

comparing_operator:
    '<' { write(" < "); }
    | '>' { write(" > "); }
    | GREATER_OR_EQUAL_TOK { write(" >= "); }
    | LESS_OR_EQUAL_TOK { write(" <= "); }
    | EQUAL_TOK { write(" == "); }
    | NOT_EQUAL_TOK { write(" != "); };

assign_operator:
    '=' { write(" = "); }
    | ADD_ASSIGN_TOK { write(" += "); }
    | MULTIPLY_ASSIGN_TOK { write(" *= "); }
    | SUB_ASSIGN_TOK { write(" -= "); }
    | DIV_ASSIGN_TOK { write(" /= "); }
    | MOD_ASSIGN_TOK { write(" \%= "); }
    | BIN_AND_ASSIGN_TOK { write(" &= "); }
    | LEFT_SHIFT_ASSIGN_TOK { write(" <<= "); }
    | RIGHT_SHIFT_ASSIGN_TOK { write(" >>= "); }
    | EXCLUSIVE_OR_ASSIGN_TOK { write(" ^= "); }
    | BITWISE_INCLUSIVE_OR_ASSIGN_TOK { write(" |= "); };

logical_operator:
    AND_TOK { write(" && "); }
    | OR_TOK { write(" || "); }
    | '!' { write("!"); };

type: type_spec | type_spec '*' | type_spec '['']' | type_spec '[' INT_TOK ']';

type_spec: typevar | VOLATILE_TOK typevar | REGISTER_TOK typevar | STATIC_TOK typevar | EXTERN_TOK typevar | AUTO_TOK typevar | CONST_TOK typevar;

ident:
    IDENT_TOK { write("$%s", $1); }
    | IDENT_TOK '*' { write("$%s", $1); }
    | IDENT_TOK '[' INT_NUM_TOK ']' { write("$%s[%d]", $1, $3); }
    | '&' IDENT_TOK { write("&$%s", $2); }
    | IDENT_TOK '.' { write("$%s->", $1); } ident
    | IDENT_TOK '*' '-' '>' { write("$%s->", $1); } ident
    | IDENT_TOK '[' INT_NUM_TOK ']' '.' { write("$%s[%d]->", $1, $3); } ident
    | IDENT_TOK SCOPE_TOK { write("$%s::", $1); } ident;

typevar:
    IDENT_TOK { write("%s", $1); }
    | CHAR_TOK
    | SHORT_TOK INT_TOK
    | INT_TOK
    | LONG_TOK
    | DOUBLE_TOK
    | FLOAT_TOK
    | BOOL_TOK
    | SHORT_TOK
    | VOID_TOK
    | SIGNED_TOK CHAR_TOK
    | SIGNED_TOK INT_TOK
    | UNSIGNED_TOK INT_TOK
    | SIGNED_TOK SHORT_TOK INT_TOK
    | SIGNED_TOK LONG_TOK INT_TOK
    | SIGNED_TOK DOUBLE_TOK
    | SIGNED_TOK FLOAT_TOK
    | SIGNED_TOK LONG_TOK
    | SIGNED_TOK SHORT_TOK
    | UNSIGNED_TOK CHAR_TOK
    | UNSIGNED_TOK SHORT_TOK INT_TOK
    | UNSIGNED_TOK LONG_TOK INT_TOK
    | UNSIGNED_TOK DOUBLE_TOK
    | UNSIGNED_TOK FLOAT_TOK
    | UNSIGNED_TOK LONG_TOK
    | UNSIGNED_TOK SHORT_TOK
    | CLASS_TOK IDENT_TOK
    | STRUCT_TOK IDENT_TOK
    | UNION_TOK IDENT_TOK ;
%%

main(int argc, char ** argv) {
    // check if there's at least 1 argument specified
    if (argc < 2) {
        cout << "This program requires at least 1 argument. Please provide the file name to compile." << endl;
        return -1;
    }

	// open a file handle to a particular file:
    yyin = fopen(argv[1], "r");

    // make sure it's valid:
	if (!yyin) {
		cout << "Can't open a file: '" << argv[1] << "'" << endl;
		return -1;
	}

    // get output file name
    string outputname = "output.php";
    if (argc > 2) {
        outputname = argv[2];
    }

    cout << outputname << endl;

    // create output file
    yyout = fopen(outputname.c_str(), "w");

    if (!yyout) {
        cout << "Can't open a file: '" << outputname << "'" << endl;
        return -1;
    }

    cout << "Writing output to " << outputname << endl;

	// parse through the input until there is no more:
	do {
		yyparse();
	} while (!feof(yyin));

    fclose(yyout);
}

void yyerror(const char *s) {
	cout << "EEK, parse error on line " << line_num << "!  Message: " << s << endl;
    fclose(yyout);

	// might as well halt now:
	exit(-1);
}
