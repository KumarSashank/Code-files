#include<stdio.h>
#include<stdlib.h>

typedef struct coconuts
{
    int a,b,c,d;
}coconuts;

int main()
{
    int t,i;
    scanf("%d",&t);
    coconuts C[t];
    for(i=0;i<t;i++)
    {
         scanf("%d %d %d %d",&C[i].a,&C[i].b,&C[i].c,&C[i].d);
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",(C[i].c/C[i].a)+(C[i].d/C[i].b));
    }
}