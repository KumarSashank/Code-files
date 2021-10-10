#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;
    int x[n];
    FILE *f;
    f = fopen("sort.txt", "w");
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
    clock_t end = clock();
    for (int i = 0; i < n; i++)
    {
        fprintf(f, "%d\n", x[i]);
    }
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    cout << time_spent << endl;
    printf("Done");
}