%{
#include <iostream>
#include "cpp2php.tab.h"
using namespace std;
#define YY_DECL extern "C" int yylex()
int line_num = 1;
%}
%x COMMENTS
%%
[ \t]          ;
#include	{ return INCLUDE_TOK; }
#define		{ return DEFINE_TOK; }
abstract	{ return ABSTRACT_TOK; }
auto		{ return AUTO_TOK; }
bool		{ return BOOL_TOK; }
break		{ return BREAK_TOK; }
case		{ return CASE_TOK; }
catch		{ return CATCH_TOK; }
char		{ return CHAR_TOK; }
class		{ return CLASS_TOK; }
const		{ return CONST_TOK; }
continue	{ return CONTINUE_TOK; }
default		{ return DEFAULT_TOK; }
delete		{ return DELETE_TOK; }
do		{ return DO_TOK; }
double		{ return DOUBLE_TOK; }
else		{ return ELSE_TOK; }
enum		{ return ENUM_TOK; }
extern		{ return EXTERN_TOK; }
false		{ return FALSE_TOK; }
finally		{ return FINALLY_TOK; }
float		{ return FLOAT_TOK; }
each		{ return EACH_TOK; }
for 		{ return FOR_TOK; }
in		{ return IN_TOK; }
friend		{ return FRIEND_TOK; }
if		{ return IF_TOK; }
inline		{ return INLINE_TOK; }
int		{ return INT_TOK; }
interface	{ return INTERFACE_TOK; }
literal		{ return LITERAL_TOK; }
long		{ return LONG_TOK; }
mutable		{ return MUTABLE_TOK; }
namespace	{ return NAMESPACE_TOK; }
new		{ return NEW_TOK; }
operator[~!-\+=\|/\*\<\>\^\&\%]+\(	{ return OPERATOR_FUN_TOK; }
private		{ return PRIVATE_TOK; }
protected	{ return PROTECTED_TOK; }
public		{ return PUBLIC_TOK; }
return		{ return RETURN_TOK; }
register	{ return REGISTER_TOK; }
short		{ return SHORT_TOK; }
signed		{ return SIGNED_TOK; }
sizeof		{ return SIZEOF_TOK; }
static		{ return STATIC_TOK; }
struct		{ return STRUCT_TOK; }
switch		{ return SWITCH_TOK; }
template	{ return TEMPLATE_TOK; }
this		{ return THIS_TOK; }
thread		{ return THREAD_TOK; }
throw		{ return THROW_TOK; }
true		{ return TRUE_TOK; }
try		{ return TRY_TOK; }
typedef		{ return TYPEDEF_TOK; }
union		{ return UNION_TOK; }
unsigned	{ return UNSIGNED_TOK; }
using		{ return USING_TOK; }
virtual		{ return VIRTUAL_TOK; }
void		{ return VOID_TOK; }
volatile	{ return VOLATILE_TOK; }
while 		{ return WHILE_TOK; }
[0-9]+\.[0-9]+ { yylval.fval = atof(yytext); return FLOAT_NUM_TOK; }
[0-9]+         { yylval.ival = atoi(yytext); return INT_NUM_TOK; }
[a-zA-Z_][a-zA-Z0-9]*   {
	yylval.sval = strdup(yytext);
	return IDENT_TOK; }
".*"	{ return STRING_TOK; }
'.'	{ return STRING_TOK; }
\/\/.*\n	{ ++line_num; }
\/\*              { BEGIN(COMMENTS);}
<COMMENTS>\*\/    { BEGIN(INITIAL); }
<COMMENTS>\n      { ++line_num; }   // still have to increment line numbers inside of comments!
<COMMENTS>.       ;   // ignore every other character while we're in this state
\n             { ++line_num; }
,		{ return ','; }
!		{ return '!'; }
!=		{ return NOT_EQUAL_TOK; }
\%		{ return '%'; }
\%=		{ return MOD_ASSIGN_TOK; }
&		{ return '&'; }
&&		{ return AND_TOK; }
&=		{ return BIN_AND_ASSIGN_TOK; }
\(		{ return '('; }
\)		{ return ')'; }
\*		{ return '*'; }
\*=		{ return MULTIPLY_ASSIGN_TOK; }
\+		{ return '+'; }
\+\+		{ return INC_TOK; }
\+=		{ return ADD_ASSIGN_TOK; }
–		{ return '-'; }
––		{ return DEC_TOK; }
–=		{ return SUB_ASSIGN_TOK; }
\/		{ return '/'; }
\/=		{ return DIV_ASSGN_TOK; }
\<		{ return '<'; }
\<<		{ return LEFT_SHIFT_TOK; }
\<<=		{ return LEFT_SHIFT_ASSIGN_TOK; }
\<=		{ return LESS_OR_EQUAL_TOK; }
=		{ return '='; }
==		{ return EQUAL_TOK; }
\>		{ return '>'; }
\>=		{ return GREATER_OR_EQUAL_TOK; }
\>>		{ return RIGHT_SHIFT_TOK; }
\>>=		{ return RIGHT_SHIFT_ASSIGN_TOK; }
\[		{ return '['; }
\]		{ return ']'; }
\^		{ return '^'; }
\^=		{ return EXCLUSIVE_OR_ASSIGN_TOK; }
\|		{ return '|'; }
\|=		{ return BITWISE_INCLUSIVE_OR_ASSIGN_TOK; }
\|\|		{ return OR_TOK; }
~		{ return '~'; }
\'		{ return '\''; }
\"		{ return '\"'; }
;		{ return ';'; }
:		{ return ':'; }
::		{ return SCOPE_TOK; }
\{		{ return '{'; }
\}		{ return '}'; }
%%
