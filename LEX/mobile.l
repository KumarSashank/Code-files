%{
    #include<stdio.h>
    #include<stdlib.h>
    int count = 0;
    char str[100];
%}
%%
[0-9] { count++;
         str[count-1] = yytext[0];
       }
\n {return 0;}
%%
int yywrap(){};
int main(){
    yylex();

    if(str[0] != '0' && count==10){
        printf("Valid Mobile Number\n");
        exit(0);
    }
    else{
        printf("Invalid Mobile Number\n");
    }
    return 0;
}