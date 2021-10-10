#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;
    long int n;
    scanf("%ld", &n);
    do
    {
        n % i;
        i++;

    } while (n % i != 0);
    if (i == n)
    {
        printf("1");
    }
    else
    {
        printf("%d", i);
    }
}