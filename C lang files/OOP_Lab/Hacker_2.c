#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, k = 0;
    char s[100];
    scanf("%s", s);
    n = strlen(s);

    for (int i = 0; i < n / 2; i++)
    {
        if (s[n - i - 1] == s[i])
        {
            k++;
        }
    }
    if (k == n / 2)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}