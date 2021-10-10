#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    int N[t];

    for (int i=0; i<t; i++)
    {
        scanf("%d", &N[i]);
    }
    for (int i=0; i<t; i++)
    {
        printf("%d\n", (N[i]/2)+1);
    }
}