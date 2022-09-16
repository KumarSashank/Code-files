%{
    #include<stdio.h>
    int i=0;
%}

%%
([a-zA-Z])* {i++;}
\n return 0;
%%
int yywrap(){};
int main(){
    yylex();
    printf("%d",i);
    return 0;
}