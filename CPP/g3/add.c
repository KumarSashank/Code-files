#include <stdio.h>
#include <stdlib.h>

int add_ints(int count, ...)
{
}

int main()
{
    int sum = add_ints(3, 1, 2, 3);
    printf("%d", sum);
}