%{
#include<stdio.h>
int lc=0, sc=0, tc=0, ch=0;
%}

%%
\n lc++; //line counter
([ ])+ sc++; //space counter
\t tc++; //tab counter
[a-zA-Z] ch++;     //characters counter
end {return 0;}
%%
int yywrap(){}
int main()
{
    // The function that starts the analysis
    yylex();
     
    printf("\nNo. of lines=%d", lc); 
    printf("\nNo. of spaces=%d", sc);
    printf("\nNo. of tabs=%d", tc);
    printf("\nNo. of other characters=%d", ch);
     
}