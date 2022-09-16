
of lines other for number of characters */
%{
	#include<stdio.h>
	int no_of_spaces = 0;
int no_of_lines = 0;
int no_of_chars = 0;
int no_of_tabs = 0;
%}


%%
([ ])+ no_of_spaces++;
\n ++no_of_lines;
\t no_of_tabs++;
.	 ++no_of_chars;
end	 {return 0;}
%%


int yywrap(){}
int main()
{

yylex();
printf("number of lines = %d, number of chars = %d\n,number of tabs = %d\n,number of spaces= %d\n",
	no_of_lines, no_of_chars, no_of_tabs,no_of_spaces);

return 0;
}

