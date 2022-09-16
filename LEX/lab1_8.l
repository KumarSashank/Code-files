%{
    #include<stdio.h>
    int n;
%}

%%
[0-9]+ {n=atoi(yytext);
        for(int i=2; i<=n/2;i++)
        {
            if(n%i==0)
            {
                printf("%d is not a prime number",n);
                return 0;
            }
        }
        printf("%d is a prime number",n);
        return 0;}

%%
int yywrap(){};

int main()
{
    yylex();
    return 0;
}