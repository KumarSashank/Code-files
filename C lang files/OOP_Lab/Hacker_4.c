#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, i, j, k = 0, l = 0, m;
    char s1[999];
    char s2[999];
    scanf("%s", s1);
    scanf("\n%s", s2);
    m = strlen(s1);
    n = strlen(s2);
    for (i = 0; i < (m - n) + 1; i++)
    {
        k = 0;
        for (j = 0; j < n; j++)
        {
            if (s1[i + j] == s2[j])
            {
                k++;
            }
        }
        if (k == n)
        {
            l++;
        }
    }
    printf("%d\n", l);
}