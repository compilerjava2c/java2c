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

%token NAME
%token FILENAME

%token QUOTE

%token OBRACE
%token EBRACE

%token OBRACKET
%token EBRACKET

%token SEMICOLON

%start Input

%%
input:
	|Input line;
Line:
   END
   | Expression END { printf("Saida: %c\n",$1); }
   ;
%%
