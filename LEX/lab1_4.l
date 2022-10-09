%{
	#include<stdio.h>
	int flag=0,ln=1;
%}
%%
"(" {flag++;}
")" {flag--;}

[\n] {	if(flag==0)
	{	
		printf("\nNo missing at line : %d ",ln);
	}
	else
	{
		printf("\nMissing at line no. : %d",ln);
	}
	if(flag>0 || flag<0)
	{	printf("\n missing");
	}

	flag=0;
	ln++;
}
%%
int yywrap(){}
int main()
{
	char fname[100];
	printf("\nEnter the name of file\n");
	scanf("%s",fname);
	yyin=fopen(fname,"r+");
	yylex();
	return 0;
}