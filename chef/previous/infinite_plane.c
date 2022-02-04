#include <stdio.h>
#include <stdlib.h>

typedef struct node_
{
    int data;
};

int main()
{
    int t, i, j, k;
    scanf("%d", &t);
    int n[t][1000][1000];
    for (i = 0; i < t; i++)
    {
        scanf("%d", &n[t]);
        for (j = 0; j < n[t]; j++)
        {
            scanf("%d", &n[t][j]);
        }
    }
}