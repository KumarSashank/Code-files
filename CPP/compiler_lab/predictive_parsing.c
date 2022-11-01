#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int i = 0, top = 0;
char stack[200], ip[200];

void push(char c)
{
    if (top >= 200)
        printf("Stack Overflow");
    else
        stack[top++] = c;
}

void pop(void)
{
    if (top < 0)
        printf("Stack underflow");
    else
        top--;
}

void error(void)
{
    printf("\n\nSyntax Error!!!! String is invalid\n");

    exit(0);
}

int main()
{
    int n;
    // clrscr();
    /* write a C program to implement the predective parsing to parse
    the input input sting using the folowing grammer
    S-->AaAb  | BbBa
    A--> €
    B--> €


    */

    printf("The given grammar is\n\n");
    printf("S-->AaAb  | BbBa\n");
    printf("A-->  epsilon \n\n");
    printf("B-->  epsilon \n\n");
    printf("Enter the string to be parsed:\n");
    scanf("%s", ip);
    n = strlen(ip);
    ip[n] = '$';
    ip[n + 1] = '\0';
    push('$');
    push('S');
    while (ip[i] != '\0')
    {
        if (ip[i] == '$' && stack[top - 1] == '$')
        {
            printf("\n\n Successful parsing of string \n");

            return 0;
        }
        else if (ip[i] == stack[top - 1])
        {
            printf("\nmatch of %c occured ", ip[i]);
            i++;
            pop();
        }
        else
        {
            if (stack[top - 1] == 'S' && ip[i] == 'a')
            {
                printf(" \n S ->AaAb");
                pop();
                push('b');
                push('A');
                push('a');
                push('A');
            }
            else if (stack[top - 1] == 'S' && ip[i] == 'b')
            {
                printf(" \n S ->BbBa");
                pop();
                push('a');
                push('B');
                push('b');
                push('B');
            }
            else if (stack[top - 1] == 'A' && ip[i] == 'a')
            {
                printf("\n A ->^");
                pop();
            }
            else if (stack[top - 1] == 'A' && ip[i] == 'b')
            {
                printf("\n A ->^");
                pop();
            }
            else if (stack[top - 1] == 'B' && ip[i] == 'a')
            {
                printf("\n B ->^");
                pop();
            }
            else if (stack[top - 1] == 'B' && ip[i] == 'b')
            {
                printf("\n B ->^");
                pop();
            }

            else
                error();
        }
    }
} // end of main