#include <iostream>
using namespace std;

void mergesort(int[], int, int);
void merging(int[], int, int, int);

int main()
{
    int a[10], i, n;
    cout << "Enter the numbers: ";
    for (i = 0; i < 10; i++)
        cin >> a[i];
    mergesort(a, 0, 10 - 1);
    for (i = 0; i < 10; i++)
        cout << a[i] << " ";
}

void mergesort(int a[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergesort(a, low, mid);
        mergesort(a, mid + 1, high);
        merging(a, low, mid, high);
    }
}

void merging(int a[], int low, int mid, int high)
{
    int i, j, k, temp[10];
    for (i = low, j = mid + 1, k = 0; i <= mid && j <= high; k++)
    {
        if (a[i] < a[j])
        {
            temp[k] = a[i];
            i++;
        }
        else
        {
            temp[k] = a[j];
            j++;
        }
    }
    if (i <= mid)
    {
        while (i <= mid)
        {
            temp[k] = a[i];
            i++;
            k++;
        }
    }
    else
    {
        while (j <= high)
        {
            temp[k] = a[j];
            j++;
            k++;
        }
    }
    for (i = low, k = 0; i <= high; i++, k++)
        a[i] = temp[k];
}