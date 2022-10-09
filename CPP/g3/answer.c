#include <stdio.h>
#include <stdlib.h>

int answer(int a, int b)
{
    if (a == 1 || b == 1)
    {
        return 1;
    }
    else if (a + b == 1)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int ans = answer(1, 3);
    printf("%d", ans);
}