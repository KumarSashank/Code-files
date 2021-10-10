#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, i, j;
    scanf("%d", &t);
    int a[t][3];
    for (i = 0; i < t; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < t; i++)
    {
        if ((a[i][0] == 0 && a[i][1] == 1) || (a[i][0] == 1 && a[i][1] == 0))
        {
            printf("1\n");
        }
        else if ((a[i][1] == 0 && a[i][2] == 1) || (a[i][1] == 1 && a[i][2] == 0))
        {
            printf("1\n");
        }
        else if ((a[i][0] == 0 && a[i][2] == 1) || (a[i][0] == 1 && a[i][2] == 0))
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
    }
}