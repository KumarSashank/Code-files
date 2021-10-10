#include<stdio.h>
#include<stdlib.h>

typedef struct Bank
{
    long long D,d,P,Q;
}bank;

int main()
{
    long long t,i,k,j,R=0,m;
    scanf("%lld",&t);
    bank B[t];
    for(i=0;i<t;i++)
    {
        scanf("%lld %lld %lld %lld",&B[i].D,&B[i].d,&B[i].P,&B[i].Q);
    }
    for(i=0;i<t;i++)
    {
        k=B[i].D/B[i].d;
        if (B[i].D%B[i].d==0)
        {
            R=R+B[i].d*(k*B[i].P+((k-1)*k*B[i].Q)/2);
        }
        else
        {
            m=B[i].D%B[i].d;
            B[i].D=B[i].D-m;
            k=B[i].D/B[i].d;
            R=R+B[i].d*(k*B[i].P+((k-1)*k*B[i].Q)/2);
            R=R+m*(B[i].P+k*B[i].Q);
        }
        printf("%lld\n",R);
        R=0;
    }
}