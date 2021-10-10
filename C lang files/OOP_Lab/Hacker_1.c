#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void strc(char s1[999], char s2[999]);

int main()
{
    char s1[999];
    char s2[999];
    scanf("%s", s1);
    scanf("\n%s", s2);
    strc(s1, s2);
    return 0;
}

void strc(char s1[999], char s2[999])
{
    printf("%s", s1);
    printf("%s", s2);
}