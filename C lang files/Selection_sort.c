//Selections Sort
//Incompleteed
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,j,min=0;
    printf("Enter the no.of elements: ");
    scanf("%d",&n);
    int ar[n];
    printf("Enter the %d elements: \n",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }
    for( i=0; i < n; i++)
    {
        for ( j = i; j < n; j++)
        {
            if(j==0)
               min=ar[j];
            if(min<ar[j+1])
               min=ar[j];
            else
               min=ar[j+1];     
        }
        ar[i]=min;
        
    }
    printf("The descending order is:\n");
    for( i=0; i < n; i++)
    {
        printf("%d ",ar[i]);
    }
    
}