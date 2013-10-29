%{
#include <stdio.h>
#include "sintatico.h"
%}

%%

int                     return INTTOK;
{ STRING } { strcpy(buffer,yytext); return STRINGTOK;
char			return CHARTOK;
boolean			return BOOLEANTOK;
constant		return CONSTANTTOK;
float			return FLOATTOK;
double 			return DOUBLETOK;
long 			return LONGTOK;
short			return SHORTTOK;
void 			return VOIDTOK;

if			return IFTOK;
else			return ELSETOK;
switch			return SWITCHTOK;
case			return CASETOK;
break			return BREAKTOK;

do			return DOTOK;
for 			return FORTOK;
while			return WHILETOK;
return 			return RETURNTOK;		

System			return SYSTEMTOK;
out			return OUTTOK;
println			return PRINTLNTOK;
print			return PRINTTOK;

[a-z][a-zA-Z0-9]*    	yylval=strdup(yytext); return NAME;
[a-zA-Z0-9\/.-]+        yylval=strdup(yytext); return FILENAME;

\"                      return QUOTE;

\{                      return OBRACE;
\}                      return EBRACE;

\[                      return OBRACKET;
\]                      return EBRACKET;

\(			return OPARENTHESES;
\)			return EPARENTHESES;

,			return COMMA;
.			return DOT;
;                       return SEMICOLON;
\<			return LESS;
\>			return GREATER;
"<="		    	return LESSEQUAL;
">="		   	return GREATEREQUAL;
"=="		    	return EQUALS;
"!="		    	return NEGATION;
"&&"		    	return AND;
"||"		    	return OR;


CLASSPATH		return CLASSPATH;
PARAMETER		return PARAMETER;

\n                      /* ignore EOL */;

[ \t]+                  /* ignore whitespace */;

%%
int main()
{
	yyparse();

}

int yyerror(char* s)
{
	printf("%s\n", s);
}
%%
