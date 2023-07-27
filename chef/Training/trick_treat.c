#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long int isFind(long int arr[], long int k, long int n)
{
    long int low = 0;
    long int high = n;
    high -= 1;
    while (low <= high)
    {
        long int mid = (low + high) / 2;
        if (arr[mid] == k)
        {
            return 1;
        }
        else if (arr[mid] > k)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return 0;
}

int main()
{

    /* Enter your code here. Read input from STDIN. Prlong int output to STDOUT */
    long int n;
    scanf("%ld", &n);
    long int arr[n];
    for (long int i = 0; i < n; i++)
    {
        scanf("%ld", &arr[i]);
    }
    long int m;
    scanf("%ld", &m);
    long int arr1[m];
    for (long int i = 0; i < m; i++)
    {
        scanf("%ld", &arr1[i]);
        if (isFind(arr, arr1[i], n))
        {
            printf("Happy Halloween!\n");
        }
        else
        {
            printf("Tricky!\n");
        }
    }

    return 0;
}
