%{
	#include<stdio.h>
	int count=0;
%}

%%
[1-9][0-9]{9} { printf("Valid number");}
.+	{printf("Invalid number");}
%%
int yywrap() {}
int main()
{
	yylex();
	return 0;
}