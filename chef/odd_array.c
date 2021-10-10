#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        /* code */
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i < 10; i = i + 2)
    {
        /* code */
        printf("%d ", arr[i]);
    }
}