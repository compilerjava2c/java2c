%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lex.yy.c"
#include "cleanBuffer.c"
FILE *arqc;
FILE *arqh;

%}
%union {
	char *strval;
}

%token <strval>COMPARATOR
%token <strval>SYSTEMTOK 				
%token <strval>OUTTOK 						
%token <strval>PRINTLNTOK 					
%token <strval>QUOTE 	
%token <strval>INT
%token <strval>DOUBLE
%token <strval>CHAR
%token <strval>FLOAT
%token <strval>CLASS
%token <strval>IF
%token <strval>ELSE
%token <strval>ELSEIF
%token <strval>NEW
%token <strval>EQUALS
%token <strval>NUMBER
%token <strval>NAME
%token <strval>NAMECLASS
%token <strval>QUOTEDTEXT
%token <strval>DOT
%token <strval>DOTCOMMA
%token <strval>COMMA
%token <strval>OPARENTHESES
%token <strval>EPARENTHESES
%token <strval>OBRACKET
%token <strval>EBRACKET

%{
char str1 [1000];
char buffer [1000];
%}

%%

start:
	
	|start list_object
	|start object	
	|start print
	|start class
	|start class_content
	|start parameters_method_call
	|start method_call
	|start method
	|start if_rule
	//|start else_rule
	|start ready_parameters_list
	|start typevariable
	|start typeparameter
	|start name_recursive
	|start atributes_value_list
	|start typeparameter //tem que ser tirado
	|start parameters //tem que ser tirado
	|start	parameters_list //tem que ser tirado
	|start	string //tem que ser tirado
;

list_object:
	object
	{
	char *objects = (char *) malloc(1 + strlen($<strval>1));
	strcat(objects,$<strval>1);
	$<strval>$ = objects;
	}
	| list_object object
	{
	char *objects = (char *) malloc(1 + strlen($<strval>1) + strlen($<strval>2));
	strcat(objects,$<strval>1);
	strcat(objects,$<strval>2);
	$<strval>$ = objects;
	}
;

object:
	NAMECLASS NAME NEW NAMECLASS OPARENTHESES class_parameter EPARENTHESES DOTCOMMA	
	{
	char *objects = (char *) malloc(1 + strlen($1)+ strlen($2)+ strlen($3)+ strlen($4)+ strlen($<strval>5)+ strlen($<strval>6) + strlen($7) + strlen($8));
	strcpy(objects,$1);
	strcat(objects," ");
	strcat(objects,$2);
	strcat(objects,$8);
	$<strval>$ = objects;	
	}
	|NAMECLASS NAME NEW NAMECLASS OPARENTHESES EPARENTHESES DOTCOMMA	
	{
	char *objects = (char *) malloc(1 + strlen($1)+ strlen($2)+ strlen($3)+ strlen($4)+ strlen($<strval>5)+ strlen($6) + strlen($7));
	strcpy(objects,$1);
	strcat(objects," ");
	strcat(objects,$2);
	strcat(objects,$7);
	$<strval>$ = objects;
	}
;

print:
	| SYSTEMTOK DOT OUTTOK DOT PRINTLNTOK OPARENTHESES string EPARENTHESES DOTCOMMA//ver com o professor pra pegar o que tiver entre os parenteses

	{
	char *javaprint = (char *) malloc(1 + strlen("printf") + strlen($<strval>6)+ strlen($<strval>7)+ strlen($<strval>8)+ strlen($<strval>9));

	strcpy(javaprint,"printf");
	strcat(javaprint,$<strval>6);
	strcat(javaprint,$<strval>7);
	strcat(javaprint,$<strval>8);
	strcat(javaprint,$<strval>9);	
	printf("javaprint reconhecido reconhecido %s\n", javaprint);
	//fprintf(arqh,"%s\n", javaprint);
	$<strval>$ = javaprint;
	}
;

class:
	CLASS NAMECLASS OBRACKET variables class_content EBRACKET
	{
		
		char *nameclass = (char *) malloc(1 + strlen($2));
		strcpy(nameclass,$2);
		nameclass = toupper(nameclass);
		fprintf(arqh, "#ifndef %s_H\n", nameclass);
		fprintf(arqh, "#define %s_H\n\n", nameclass);
				
		fprintf(arqh,"typedef struct %s%s\n%s\n%s_%s;\n%s;\n\n",$2,$3,$<strval>4,$<strval>6,$2,$<strval>5);

		fprintf(arqh,"#endif");

		fprintf(arqc,"%s", $<strval>5);
	}
;

class_content:
	method 
	{
	$<strval>$ = $<strval>1;
	}
;


variables:
	typevariable
	{
	$<strval>$ = $<strval>1;
	}	
	|variables typevariable
	{
	char *variable = (char *) malloc(1 + strlen($<strval>1)+ strlen($<strval>2));
	char *n = strdup("\n");
	strcpy(variable,$<strval>1);
	strcat(variable,n);
	strcat(variable,$<strval>2);	
	$<strval>$ = variable;
	}
;

if_rule:
	IF OPARENTHESES id COMPARATOR id EPARENTHESES OBRACKET if_content EBRACKET
	{
	char *ifrule = (char *) malloc(1 + strlen($<strval>1)+ strlen($<strval>2)+ strlen($<strval>3)+
	strlen($<strval>4)+ strlen($<strval>5)+ strlen($<strval>6)+ strlen($<strval>7)+ strlen($<strval>8)+
	strlen($<strval>9));
	char *n = strdup("\n");
	char *t = strdup("\t");
	strcpy(ifrule,$<strval>1);
	strcat(ifrule,$<strval>2);
	strcat(ifrule,$<strval>3);
	strcat(ifrule,$<strval>4);
	strcat(ifrule,$<strval>5);
	strcat(ifrule,$<strval>6);
	strcat(ifrule,$<strval>7);
	strcat(ifrule,n);
	strcat(ifrule,t);
	strcat(ifrule,t);
	strcat(ifrule,$<strval>8);
	strcat(ifrule,n);
	strcat(ifrule,$<strval>9);
	printf("ifrule reconhecido reconhecido %s\n", ifrule);
	//fprintf(arqh,"%s\n", ifrule);
	$<strval>$ = ifrule;
	}

;

if_content:
	print
	{
	$<strval>$ = $<strval>1;
	}
;

atributes_value:
	id COMPARATOR id DOTCOMMA
	{
	char *atributes = (char *) malloc(1 + strlen($<strval>1)+ strlen($2)+strlen($<strval>3) + strlen($4));
	strcpy(atributes,$<strval>1);
	strcat(atributes,$2);
	strcat(atributes,$<strval>3);
	strcat(atributes,$4);
	$<strval>$ = atributes;
	}
;

atributes_value_list:
	atributes_value
	{
	$<strval>$ = $<strval>1;
	}
	| atributes_value_list atributes_value
	{
	char *n = strdup("\n");
	char *atributes = (char *) malloc(1 + strlen($<strval>1)+ strlen($<strval>2));
	strcpy(atributes,$<strval>1);
	strcat(atributes,n);
	strcat(atributes,$<strval>2);
	$<strval>$ = atributes;
	}
;

id:
	NAME
	{
	$<strval>$ = $1;
	}
	|NUMBER
	{
	$<strval>$ = $1;
	}
	|NAME DOT NAME 
	{
	char *object = (char *) malloc(1 + strlen($1)+ strlen($2)+ strlen($3));
	strcpy(object,$1);
	strcat(object,$2);
	strcat(object,$3);	
	$<strval>$ = object;
	}
	|QUOTEDTEXT
	{
	$<strval>$ = $1;
	}
;

parameters_method_call:
	method_call ready_parameters_list
	{
		printf("reconheceu a chamada de metodos com parametros\n");			
	}
;

method_call:
	NAME DOT NAME 
	{
		printf("reconheceu a chamada de metodos\n");			
	}
	|NAME DOT method_call
	{
		printf("reconheceu a chamada de metodos\n");			
	}
;

string:
	QUOTEDTEXT 

	{ 
	$<strval>$ = $1;
	printf("string reconhecida %s\n",$1);
	}
;


method:
	typeparameter ready_parameters_list OBRACKET object atributes_value_list if_rule EBRACKET
	{
	char *methodc = (char *) malloc(1 + strlen($<strval>1)+ strlen($<strval>2)+ strlen($<strval>3)+	strlen($<strval>4)+ strlen($<strval>5)+ strlen($<strval>6) + strlen($7));
	char *n = strdup("\n");
	char *t = strdup("\t");
	
	strcpy(methodc,$<strval>1);
	strcat(methodc,$<strval>2);
	strcat(methodc,n);
	strcat(methodc,$<strval>3);
	strcat(methodc,n);
	strcat(methodc,t);
	strcat(methodc,$<strval>4);
	strcat(methodc,n);
	strcat(methodc,t);
	strcat(methodc,$<strval>5);
	strcat(methodc,n);
	strcat(methodc,$<strval>6);
	printf("method reconhecido reconhecido %s\n", methodc);
	fprintf(arqc,"%s\n", methodc);
	
	char *methodh = (char *) malloc(1 + strlen($<strval>1)+ strlen($<strval>2));
	strcpy(methodh,$<strval>1);
	strcat(methodh,$<strval>2);
	$<strval>$ = methodh;
	}
	|NAME ready_parameters_list
	{
	char *method = (char *) malloc(1 + strlen($<strval>1)+ strlen($<strval>2) );
	strcpy(method,$<strval>1);
	strcat(method,$<strval>2);
	printf("%s do method\n",method);
	//fprintf(arqh,"%s ",parameterstr);
	$<strval>$ = method; 		
	printf("metodo reconhecido\n");
	}
;

statement:
	if_rule
	{
	}
	//|else_rule
	//{
	//}
	|list_object
	{
	}
	|typevariable
	{
	}
	|print
	{
	}
;

list_statement:
	statement
	{
	}
	|statement list_statement
	{
	}
;

ready_parameters_list:
	OPARENTHESES parameters_list EPARENTHESES
	{
	char *readyparameters = (char *) malloc(1 + strlen($<strval>1)+ strlen($<strval>2)+ strlen($<strval>3));
	strcpy(readyparameters,$<strval>1);
	strcat(readyparameters,$<strval>2);
	strcat(readyparameters,$<strval>3);	
	printf("multiple ready parameter list reconhecido %s\n", readyparameters);
	//fprintf(arqh,"%s\n",readyparameters);
	$<strval>$ = readyparameters;
	}
;

class_parameter:
	parameters
	{	
	$<strval>$ = $<strval>1;
	printf("parameter list reconhecido %s\n",$<strval>1);
	}	
	|parameters_list COMMA parameters
	{
	char *recursiveparameters = (char *) malloc(1 + strlen($<strval>1)+ strlen($<strval>2)+ strlen($<strval>3));
	strcpy(recursiveparameters,$<strval>1);
	strcat(recursiveparameters,$<strval>2);
	strcat(recursiveparameters,$<strval>3);	
	printf("multiple parameter list reconhecido %s\n", $<strval>1);
	//fprintf(arqh,"%s\n",recursiveparameters);
	$<strval>$ = recursiveparameters;
	}

;

parameters_list:
	parameters
	{	
	$<strval>$ = $<strval>1;
	printf("parameter list reconhecido %s\n",$<strval>1);
	}	
	|parameters_list COMMA parameters
	{
	char *recursiveparameters = (char *) malloc(1 + strlen($<strval>1)+ strlen($<strval>2)+ strlen($<strval>3));
	strcpy(recursiveparameters,$<strval>1);
	strcat(recursiveparameters,$<strval>2);
	strcat(recursiveparameters,$<strval>3);	
	printf("multiple parameter list reconhecido %s\n", $<strval>1);
	//fprintf(arqh,"%s\n",recursiveparameters);
	$<strval>$ = recursiveparameters;
	}
;

parameters:

	typeparameter
	{
	$<strval>$ = $<strval>1;
	printf("type parameter reconhecido %s\n", $<strval>1);
	}
	|NAME
	{
	$<strval>$ = $<strval>1;
	printf("NAME reconhecido\n");
	}
;

typevariable:
	inttypevariable
	{
	$<strval>$ = $<strval>1;
	}
	|doubletypevariable
	{
	$<strval>$ = $<strval>1;
	}	
	|chartypevariable
	{
	$<strval>$ = $<strval>1;
	}
	|floattypevariable
	{
	$<strval>$ = $<strval>1;
	}
;

inttypevariable:
	INT NAME DOTCOMMA
	{
	 fprintf(arqc,"%s %s%s\n",$1,$2,$3);
	char *variablestr = (char *) malloc(1 + strlen($1)+ strlen($2)+ strlen($3));
	strcpy(variablestr,$1);
	strcat(variablestr,$2);
	strcat(variablestr,$3);
	printf("%s do inttyvariables\n",variablestr);
	//fprintf(arqh,"%s ",parameterstr);
	$<strval>$ = variablestr; 
	}
;

doubletypevariable:
	DOUBLE NAME DOTCOMMA
	{
	fprintf(arqc,"%s %s%s\n",$1,$2,$3);
	char *variablestr = (char *) malloc(1 + strlen($1)+ strlen($2)+ strlen($3));
	strcpy(variablestr,$1);
	strcat(variablestr,$2);
	strcat(variablestr,$3);
	printf("%s do doubletyvariables\n",variablestr);
	//fprintf(arqh,"%s ",parameterstr);
	$<strval>$ = variablestr; 
	}
;

chartypevariable:
	CHAR NAME DOTCOMMA
	{
	fprintf(arqc,"%s %s%s\n",$1,$2,$3);
	char *variablestr = (char *) malloc(1 + strlen($1)+ strlen($2)+ strlen($3));
	strcpy(variablestr,$1);
	strcat(variablestr,$2);
	strcat(variablestr,$3);
	printf("%s do chartyvariables\n",variablestr);
	//fprintf(arqh,"%s ",parameterstr);
	$<strval>$ = variablestr;
	}
;
	
floattypevariable:
	FLOAT NAME DOTCOMMA
	{
	fprintf(arqc,"%s %s%s\n",$1,$2,$3);
	char *variablestr = (char *) malloc(1 + strlen($1)+ strlen($2)+ strlen($3));
	strcpy(variablestr,$1);
	strcat(variablestr,$2);
	strcat(variablestr,$3);
	printf("%s do floattyvariables\n",variablestr);
	//fprintf(arqh,"%s ",parameterstr);
	$<strval>$ = variablestr;
	}
;

typeparameter:
	inttypeparameter
	{
	$<strval>$ = $<strval>1;
	printf("%s do typeparameter\n",$<strval>1);
	}	
	|doubletypeparameter
	|chartypeparameter
	|floattypeparameter
;

inttypeparameter:
	INT NAME
	{
	//printf("%s %s ", $1,$2);
	char *parameterstr = (char *) malloc(1 + strlen($1)+ strlen($2) );
	strcpy(parameterstr,$1);
	strcat(parameterstr,$2);
	printf("%s do inttypeparameter\n",parameterstr);
	//fprintf(arqh,"%s ",parameterstr);
	$<strval>$ = parameterstr; 
	}
;

doubletypeparameter:
	DOUBLE NAME
	{
	printf("DOUBLE NAME reconhecido\n");
	char *parameterstr = (char *) malloc(1 + strlen($1)+ strlen($2) );
	strcpy(parameterstr,$1);
	strcat(parameterstr,$2);
	printf("%s\n",parameterstr);
	//fprintf(arqh,"%s ",parameterstr);
	$<strval>$ = parameterstr; 	
	}
;

chartypeparameter:
	CHAR NAME
	{
	printf("CHAR NAME reconhecido\n");
	char *parameterstr = (char *) malloc(1 + strlen($1)+ strlen($2) );
	strcpy(parameterstr,$1);
	strcat(parameterstr,$2);
	printf("%s\n",parameterstr);
	//fprintf(arqh,"%s ",parameterstr);
	$<strval>$ = parameterstr; 
	}
	
;

floattypeparameter:
	FLOAT NAME
	{
	printf("FLOAT NAME reconhecido\n");
	char *parameterstr = (char *) malloc(1 + strlen($1)+ strlen($2) );
	strcpy(parameterstr,$1);
	strcat(parameterstr,$2);
	printf("%s\n",parameterstr);
	//fprintf(arqh,"%s ",parameterstr);
	$<strval>$ = parameterstr; 
	}
;

name_recursive:
	NAME
	|name_recursive COMMA NAME
;

%%

int yywrap(void){
	return 1;
}

int yyerror(char *s){
	printf("%s\n", s);
}

int main(int argc, char** argv){
	
	FILE *input = fopen("Aluno.java", "r");
	if(!input){
		fprintf(stderr,"arquivo nao encontrado");
		return -1;
	}
	yyin = input;
	do{
		arqc = fopen ("teste.c","w");//criar arquivo com permissÃ£o de escrita
		arqh = fopen ("teste.h","w");//criar arquivo com permissÃ£o de escrita
		fflush (arqc);//limpa o buffer 
		fflush (arqh);//limpa o buffer 
	
		fprintf(arqc, "#include <stdio.h> \n");
		fprintf(arqc, "#include <stdlib.h> \n");
		fprintf(arqc, "#include \"teste.h\"\n\n");
		fprintf(arqc, "int main (){ \n");

		yyparse();

		fprintf(arqc, "\n}");

		fclose(arqc);//nao pode mais escrever
		fclose(arqh);//nao pode mais escreve	

	}while(!feof(yyin));

	return 0;

}
