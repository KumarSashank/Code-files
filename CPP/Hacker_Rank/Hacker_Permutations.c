#include <stdio.h>

int main()
{
    int n;
    int a = n - 1;
    while (a > 0 && strcmp(s[a - 1], s[a]) >= 0)
        a--;
    if (a <= 0)
        return 0;
    int b = n - 1;
    while (strcmp(s[a - 1], s[b]) >= 0)
        b--;
    char *tmp = s[a - 1];
    s[a - 1] = s[b];
    s[b] = tmp;
    b = n - 1;
    while (a < b)
    {
        tmp = s[a];
        s[a] = s[b];
        s[b] = tmp;
        a++;
        b--;
    }
    return 1;
}