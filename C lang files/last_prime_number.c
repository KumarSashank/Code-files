#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, k;
    printf("Enter the number :");
    scanf("%d", &n);
    for (i = n - 1; i > 1; i--)
    {
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                j = (i / 2) + 3;
                break;
            }
        }
        if (j != ((i / 2) + 3))
        {
            printf("%d is last prime number before the given number.\n", i);
            i = 0;
        }
    }
}