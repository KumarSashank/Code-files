#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    scanf("%d", &size);
    int array[size];
    for (int i = 0; i < size; i++)
    {
        /* code */
        scanf("%d", &array[i]);
    }
    for (int i = size - 1; i >= 0; i--)
    {
        /* code */
        printf("%d ", array[i]);
    }
}