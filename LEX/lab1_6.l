%{
int n = 0 ;
%}

%%

"while"|"if"|"else" {n++;printf("keywords : %s\t", yytext);}

"int"|"float" {n++;printf("keywords : %s\t", yytext);}

[a-zA-Z_][a-zA-Z0-9_]* {n++;printf("identifier : %s\t", yytext);}

"<="|"=="|"="|"++"|"-"|"*"|"+" {n++;printf("operator : %s\t", yytext);}

[(){}|, ;] {n++;printf("separator : %s\t", yytext);}

[0-9]*"."[0-9]+ {n++;printf(" float : %s\t", yytext);}

[0-9]+ {n++;printf("integer : %s\t", yytext);}						

. ;
%%

int yywrap(){}

int main()

{
	
	yylex();
	
	printf("\ntotal no. of token = %d\n", n);
	
}