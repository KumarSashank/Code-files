#include<stdio.h>

int main()
{
     int T,K,N,A[100000],i,j,k,t;

    scanf("%d",&T);
    for ( j = 0; ((j < T)&&(T<=20))&&(T>=1); j++)
    {
        /* code */
        scanf("%d %d",&N,&K);
        
         for ( i = 0; i < N; i++)
         { 
            scanf("%d",&A[i]);
         }
         
            for ( i = 0; i < K; i++)
            {
               for ( k = 1; k <=N; k++)
                {
                 if (k==1)
                 {
                    t=A[N-1];
                    A[N-k]=A[N-k-1];
                 }
                 else if (k==N)
                 {
                     A[0]=t;
                 }
                 else
                 A[N-k]=A[N-k-1];
                
                
                }
            }
         

         for ( i = 0; i < N; i++)
         {
            printf("%d ",A[i]);
         }
         printf("\n");
        
    }
}