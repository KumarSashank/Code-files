#include <stdio.h>

int triplets(int);

int main()
{
    int t, i;
    scanf("%d", &t);
    int n[t], a[t];
    for (i = 0; i < t; i++)
    {
        scanf("%d", &n[i]);
        if (n[i] > 1)
            a[i] = triplets(n[i]);
    }
    for (i = 0; i < t; i++)
        printf("%d\n", a[i]);
}

int triplets(int n)
{
    int i, j, k, count = 0;
    for (i = 1; i <= n; i++)
    {
        for (j = i; j <= n; j += i)
        {
            for (k = i; k <= n; k += j)
            {
                if (k % j == i)
                    count++;
            }
        }
    }
    return count;
}