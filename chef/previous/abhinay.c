#include <stdio.h>

int fact(int);
int product(int);

int main()
{
    int i, k = 0, f, a, t;
    scanf("%d", &t);
    int ans[t], n;
    for (int j = 0; j < t; j++)
    {
        scanf("\n%d", &n);
        k = 0;
        for (i = 1; i <= n; i++)
        {
            f = fact(i);
            a = product(i);
            if (a >= f)
            {
                k++;
            }
        }
        ans[j] = k;
    }
    for (int i = 0; i < t; i++)
    {
        printf("%d\n", ans[i]);
    }
}

int fact(int n)
{
    int r, x = 1, count = 0;

    while (n != 0)
    {
        r = n % 10;
        count++;
        n = n / 10;
    }

    for (int j = 1; j <= count; j++)
        x = x * j;

    return x;
}

int product(int n)
{
    int r, a = 1;

    while (n != 0)
    {
        r = n % 10;
        a = a * r;
        n = n / 10;
    }

    return a;
}