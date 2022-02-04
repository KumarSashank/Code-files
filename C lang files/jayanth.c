#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int c = 0, p = -1;
        char s[10000];
        scanf("%s", s);
        int n = strlen(s);
        if (n == 1)
        {
            printf("NO\n");
            continue;
        }

        for (int i = 0; i <= n; i++)
        {
            if (s[i] == '1')
            {
                c++;
                p = i + 1;
            }
        }

        if (c == 0 || (c == 1 && p == n))
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}