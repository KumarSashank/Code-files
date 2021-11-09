#include <stdio.h>

int CCC(int n)
{
    if (n == 0)
        return 1;
    else
    {
        int sum = 0;
        for (int i = CCC(n - 1); i < n; i++)
        {
            sum += CCC(i);
        }
        return sum;
    }
}
int main()
{
    printf("%d", CCC(5));
}