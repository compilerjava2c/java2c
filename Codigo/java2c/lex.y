%{
#include "global.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
%}

%token INTTOK
%token STRINGTOK
%token CHARTOK
%token BOOLEANTOK
%token CONSTANTTOK
%token FLOATTOK
%token DOUBLETOK
%token LONGTOK
%token SHORTTOK
%token VOIDTOK

%token IFTOK
%token ELSETOK
%token SWITCHTOK
%token CASETOK
%token BREAKTOK

%token DOTOK
%token FORTOK
%token WHILETOK
%token RETURNTOK

%token SYSTEMTOK
%token OUTTOK
%token PRINTLNTOK
%token PRINTTOK

%token NAME
%token FILENAME

%token QUOTE

%token OBRACE
%token EBRACE

%token OBRACKET
%token EBRACKET

%token OPARENTHESES
%token EPARENTHESES

%token COMMA
%token DOT
%token SEMICOLON

%start Input

%%

Input:
   /* Empty */
   | Input Line
   ;
Line:
   END
   | Expression END { printf("Saída: %c\n",$1); }
   ;
Expression:
   NUMBER { $$=$1; }
   | Expression PLUS Expression { $$=$1+$3; }
   | Expression MINUS Expression { $$=$1-$3; }
   | Expression TIMES Expression { $$=$1*$3; }
   | Expression DIVIDE Expression { $$=$1/$3; }
   | MINUS Expression %prec NEG { $$=-$2; }
   | Expression POWER Expression { $$=pow($1,$3); }
   | LEFT_PARENTHESIS Expression RIGHT_PARENTHESIS { $$=$2; }
   ;

%%
