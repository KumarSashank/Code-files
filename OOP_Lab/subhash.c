#include <stdio.h>
#include <math.h>
#include <time.h>

long int sum_series(int, int);

int n, terms, i;
long int sum = 1;
clock_t starttime, endtime;
double totaltime;
int main()
{
    printf("Enter the number and terms respectively");
    scanf("%d", &n);
    scanf("%d", &terms);
    starttime = clock();
    sum = sum_series(n, terms);
    endtime = clock();
    printf("The sum of series: %ld", sum);
    totaltime = ((double)(endtime - starttime)) / CLOCKS_PER_SEC;
    printf("\n\ntotal time of execution = %f", totaltime);
}

long int sum_series(int n, int terms)
{
    i = 1;
    while (i <= terms)
    {
        sum = sum + pow(n, i);
        i++;
    }
    return sum;
}