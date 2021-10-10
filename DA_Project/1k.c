#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n = 10000;
    int x[n];
    FILE *f;
    f = fopen("1k.txt", "w");
    clock_t begin = clock();
    for (int i = 0; i < n; i++)
    {
        x[i] = rand();
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (x[i] > x[j])
            {
                int t = x[i];
                x[i] = x[j];
                x[j] = t;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        fprintf(f, "%d\n", x[i]);
    }
    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("%f\n", time_spent);
    printf("Done");
}