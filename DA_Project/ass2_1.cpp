#include <iostream>
#include <time.h>
using namespace std;

void Quicksort(int *, int, int);

int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;
    int x[n], y[n];
    FILE *f;

    clock_t begin_bs = clock();
    for (int i = 0; i < n; i++)
    {
        x[i] = y[i] = rand();
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
    clock_t end_bs = clock();
    clock_t begin_qs = clock();
    Quicksort(y, 0, n - 1);
    clock_t end_qs = clock();
    f = fopen("bubblesort.txt", "w");
    for (int i = 0; i < n; i++)
    {
        fprintf(f, "%d\n", x[i]);
    }
    fclose(f);
    f = fopen("quicksort.txt", "w");
    for (int i = 0; i < n; i++)
    {
        fprintf(f, "%d\n", y[i]);
    }
    fclose(f);
    double bs_time = (double)(end_bs - begin_bs) / CLOCKS_PER_SEC;
    double qs_time = (double)(end_qs - begin_qs) / CLOCKS_PER_SEC;
    cout << "Time spent for Bubblesort: " << bs_time << endl;
    cout << "Time spent for Quicksort: " << qs_time << endl;
    cout << "Done\n";
}

void Quicksort(int *arr, int low, int high)
{
    int pivot, i, j, temp;
    if (low < high)
    {
        pivot = low;
        i = low;
        j = high;
        while (i < j)
        {
            while (arr[i] <= arr[pivot] && i <= high)
                i++;
            while (arr[j] > arr[pivot] && j >= low)
                j--;
            if (i < j)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    temp = arr[j];
    arr[j] = arr[pivot];
    arr[pivot] = temp;

    Quicksort(arr, low, j - 1);
    Quicksort(arr, j + 1, high);
}