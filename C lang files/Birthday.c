#include <stdio.h>
#include <stdlib.h>

typedef struct Gifting
{
    int n,k,A[10000];
}gift;

int main()
{
    int t,big,i,j,c1=0,c2=0,swap=0,l;
    scanf("%d",&t);
    gift g[t];
    for( i=0;i<t;i++)
    {
        scanf("%d %d",&g[i].n,&g[i].k);
        for( j=0;j<g[i].n;j++)
        {
            scanf("%d",&g[i].A[j]);
        }
    }
   for(i=0;i<t;i++)
   {
       big=0;
       for( j=0;j<g[i].n;j++)
       {
             for(l = j+1 ; l < g[i].n; l++)
                {
                    if(g[i].A[j] > g[i].A[j+1]) 
                    {
                        swap=g[i].A[j];
                        g[i].A[j]=g[i].A[j+1];
                        g[i].A[j+1]=swap;
                    }
                    if (j%2==0)
                    {
                        c1=c1+g[i].A[j+1];
                    }
                    else if ((j%2==0)&&(g[i].n-i-1))
                    {
                        c1=c1+g[i].A[g[i].n-1];
                    }
                    else if ((j%2!=0)&&(g[i].n-i-1))
                    {
                        c2=c2+g[i].A[g[i].n-1];
                    }
                    else
                    {
                        c2=c2+g[i].A[j+1];
                    }

                }  
            
       }
       if (c1>c2)
                {
                    printf("%d\n",c1);
                }  
                else
                printf("%d\n",c2);  
   }


}