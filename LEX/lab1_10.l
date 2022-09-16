%{
    #include<stdio.h>
    int n;
%}

%%

([a-zA-z0-9])+ {n=yyleng;
if(yytext[n-1]=='0' && yytext[n-2]=='0')
{
    printf("This string has ended with 00\n");
}
else
{
    printf("This string has not ended with 00\n");
}}

%%

int yywrap(){};

int main()
{
    yylex();
    return 0;
}