#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int t, n, d, h, sum = 0, k = 0;
    scanf("%lld", &t);
    long long int b[t], c[t];
    for (long long int i = 0; i < t; i++)
    {
        sum = 0, k = 0;
        scanf("%lld %lld %lld", &n, &d, &h);
        long long int a[n];
        for (long long int j = 0; j < n; j++)
        {
            scanf("%lld", &a[j]);
            sum = sum + a[j];
            if (a[j] == 0)
            {
                k++;
            }
        }
        sum = sum - (k * d);
        b[i] = sum;
        c[i] = h;
    }
    for (long long int i = 0; i < t; i++)
    {
        if (b[i] > c[i])
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}