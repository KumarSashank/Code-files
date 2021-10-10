//WAP to accept values for array & find the sum of values using pointers
#include<stdio.h>
int main()
{
    int A[10],i,n,sum=0;
    int *p;
    printf("Enter the value for n: ");
    scanf("%d",&n);
    printf("Enter %d values for the array: ",n);
    for ( i = 0; i < n; i++)
    {
        /* code */scanf("%d",&A[i]);
    }
    p=A;
    for(i=0;i<n;i++)
    {
        sum=sum + *(p+i);
    }
    printf("sum of numbers is %d",sum);
}