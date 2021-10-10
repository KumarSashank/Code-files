#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main()
{
    char ch[100], sum = 0, check = 0;
    scanf("%s", ch);
    for (int i = 0; i < 100; i++)
    {

        sum += (ch[i] - '0');
    }
    printf("%d\n", sum);
}