%{
    #include <stdio.h>
    int count = 0;
%}

%%
. {
        printf("%s", yytext);
        count++;
        }
        
end return 0;
%%
int yywrap(){};
int main(){
    yylex();
    printf("Number of characters: %d\n", count);
    return 0;
}