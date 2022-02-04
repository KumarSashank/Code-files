#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int num, i = 0;
    printf("Enter the no.of soldiers:");
    scanf("%d", &num);
    while (pow(2, i) <= num)
    {
        i++;
    }
    i = i - 1;
    num = num - (pow(2, i));
    num = (num * 2) + 1;
    printf("%d", num);
}