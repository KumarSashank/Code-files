#include<stdio.h>
#include<stdlib.h>

typedef struct value
{
    int x,m,d;
}Value;
int main()
{
    int i,t;
    scanf("%d",&t);
    Value V[t];
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d",&V[i].x,&V[i].m,&V[i].d);  
    }
    for(i=0;i<t;i++)
    {
        if(((V[i].x)*(V[i].m))<=((V[i].x)+(V[i].d)))
        {
             printf("%d ",((V[i].x)*(V[i].m)));
        }
        else
        {
            printf("%d ",((V[i].x)+(V[i].d)));
        }
        printf("\n");
    }

}