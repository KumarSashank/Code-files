#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, p, q, r, big = 0;
    scanf("%d", &t);
    int a[t][3];
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < t; i++)
    {
        p = a[i][0] + a[i][1];
        q = a[i][1] + a[i][2];
        r = a[i][0] + a[i][2];
        big = (p > q) ? p : q;
        big = (big > r) ? big : r;
        printf("%d\n", big);
    }
}