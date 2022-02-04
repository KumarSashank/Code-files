#include <stdio.h>

int day(int, int, int);

int main()
{
    int test_cases, i;
    scanf("%d", &test_cases);
    int n[test_cases], p[test_cases], k[test_cases], x[test_cases];
    for (i = 0; i < test_cases; i++)
        scanf("%d%d%d", &n[i], &p[i], &k[i]);
    for (i = 0; i < test_cases; i++)
    {
        x[i] = day(n[i], p[i], k[i]);
    }
    for (i = 0; i < test_cases; i++)
        printf("%d\n", x[i]);
}

int day(int n, int p, int k)
{
    int a, b, count = 0;
    a = p % k;
    b = (n - 1) - (((n - 1) / k) * k);

    if (a > b)
        count += (((n - 1) / k) * a) + b + 1;
    else
        count += (((n - 1) / k) * a) + a;

    for (int i = a; i < n; i += k)
    {
        count++;
        if (i == p)
            break;
    }
    return count;
}