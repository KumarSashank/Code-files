#include <stdio.h>
#include <string.h>
char a[10005];
int judge(int pos)
{
    if (pos >= 1 && a[pos - 1] == a[pos])
        return 0;
    if (pos >= 2 && a[pos - 2] == a[pos])
        return 0;
    return 1;
}
int main()
{
    int n, m;
    while (~scanf("%d%d", &n, &m))
    {
        scanf("%s", a);
        int pos = n - 1;
        while (1)
        {
            if (pos == n)
            {
                printf("%s\n", a);
                break;
            }
            if (pos < 0)
            {
                printf("NO\n");
                break;
            }
            if (a[pos] - 'a' + 1 == m)
            {
                a[pos] = 'a' - 1;
                pos--;
            }
            else
            {
                int tmp = (a[pos] - 'a' + 1) % m;
                a[pos] = 'a' + tmp;
                if (judge(pos) == 1)
                    pos++;
            }
        }
    }
}