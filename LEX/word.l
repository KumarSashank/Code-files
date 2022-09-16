%{
int max = 0; 
%}

%% 
[a-zA-Z]+ {if(}
\n {return 0;}
%%
int yywrap(){};
int main() {
yylex();
printf("largest: %d", max);
printf("\n");
}

