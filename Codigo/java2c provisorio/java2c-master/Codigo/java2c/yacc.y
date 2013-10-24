%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lex.yy.c"
FILE *arq;

%}

%token SYSTEMTOK 				
%token OUTTOK 						
%token PRINTLNTOK 					
%token QUOTE 	
%token INT
%token DOUBLE
%token CHAR
%token FLOAT	
%token NAME
%token QUOTEDTEXT
%token DOT
%token OPARENTHESES
%token EPARENTHESES

%{
char str1 [1000];
char buffer [1000];
%}

%%
inicio:
	print
	| teste
	| inttype
	| doubletype
	| chartype
	| floattype
;

print:
	| SYSTEMTOK DOT OUTTOK DOT PRINTLNTOK OPARENTHESES String EPARENTHESES //ver com o professor pra pegar o que tiver entre os parenteses

{
printf("printf reconhecido");
fprintf(arq,"printf(%s);",str1);
}
;


String:
	QUOTEDTEXT 

	{ strcpy(buffer, yytext);
	  strcat(str1, buffer);
	}
	
	String |
;


teste:
	QUOTEDTEXT
{
printf("reconheceu");			
}

	teste |
;

inttype:
	INT NAME
{
printf("INT NAME reconhecido");
}
	inttype |
;
doubletype:
	DOUBLE NAME
{
printf("DOUBLE NAME reconhecido");
}
;

chartype:
	CHAR NAME
{
printf("CHAR NAME reconhecido");
}
;

floattype:
	FLOAT NAME
{
printf("FLOAT NAME reconhecido");
}
;

%%

int yywrap(){
	return 0;
}

int yyerror(char *s){
	printf("%s\n", s);
}

int main(void){
	
	arq = fopen ("teste.c","w");//criar arquivo com permissão de escrita
	fflush (arq);//limpa o buffer 
	
	fprintf(arq, "#include <stdio.h> \n");
	fprintf(arq, "#include <stdio.h> \n");
	fprintf(arq, "int main (){ \n");

	yyparse();

	fprintf(arq, "\n}");

	fclose(arq);//nao pode mais escrever

}

