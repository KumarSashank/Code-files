%{
    #include<stdio.h>
    int key=0;    
%}

%%
"int"|"float"|"char"|"while"|"if"|"else"|"do"|"signed"|"unsigned"|"break" {printf("%s is a keyword", yytext);}
[0-9]+ {printf("Integers with regular expression digt+ ");}
([a-z]([a-z]|[0-9]))* {printf("indetifier recognized\n");}
[<|>|<=|>=|==|!=]+ {printf("relational operators");}
"/"[^/]"/" {printf("text under coments recognized");} 
"//".* {printf("");}
%%
int yywrap(){}

int main(){
    printf("Enter the code\n");
    return yylex();}