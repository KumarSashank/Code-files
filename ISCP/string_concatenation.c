#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    char s[1010];
    scanf("%s", s);
    int h[26] = {0}, i;
    for (i = 0; s[i] != '\0'; i++)
        h[s[i] - 'a']++;
    for (i = 0; i < 26; i++)
    {
        if (h[i] != 0)
        {
            if (h[i] % n != 0)
            {
                printf("NO\n");
                return 0;
            }
        }
    }

    printf("YES");
    return 0;
}
