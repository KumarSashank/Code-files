#include <stdio.h>
#include <math.h>

int main()
{
    int n, sum = 0, power, prev = 0, prevpow, k, i, l = 1;
    scanf("%d", &n);
    for (i = 1; (n / l) != 0; i++)
    {
        power = l = pow(10, i);
        prevpow = pow(10, i - 1);
        k = (n % power);
        k = k / prevpow;
        sum = sum + k;
    }
    printf("%d\n", sum);
}