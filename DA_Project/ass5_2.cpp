#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

struct MaxHeap
{
    int size;
    int *array;
};

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void maxHeapify(struct MaxHeap *maxHeap, int index)
{
    int largest = index;
    int left = (index << 1) + 1;
    int right = (index + 1) << 1;

    if (left < maxHeap->size &&
        maxHeap->array[left] > maxHeap->array[largest])
        largest = left;

    if (right < maxHeap->size &&
        maxHeap->array[right] > maxHeap->array[largest])
        largest = right;

    if (largest != index)
    {
        swap(&maxHeap->array[largest], &maxHeap->array[index]);
        maxHeapify(maxHeap, largest);
    }
}

struct MaxHeap *createAndBuildHeap(int *array, int size)
{
    int i;
    struct MaxHeap *maxHeap =
        (struct MaxHeap *)malloc(sizeof(struct MaxHeap));
    maxHeap->size = size;
    maxHeap->array = array;

    for (i = (maxHeap->size - 2) / 2; i >= 0; --i)
        maxHeapify(maxHeap, i);
    return maxHeap;
}

void heapSort(int *array, int size)
{
    struct MaxHeap *maxHeap = createAndBuildHeap(array, size);

    while (maxHeap->size > 1)
    {
        swap(&maxHeap->array[0], &maxHeap->array[maxHeap->size - 1]);
        --maxHeap->size;

        maxHeapify(maxHeap, 0);
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int a[n];
    FILE *f;
    f = fopen("heapsort.txt", "w");
    clock_t begin = clock();
    for (int i = 0; i < n; i++)
        a[i] = rand();
    int size = sizeof(a) / sizeof(a[0]);

    heapSort(a, size);
    clock_t end = clock();

    for (int i = 0; i < n; i++)
    {
        fprintf(f, "%d \n", a[i]);
    }
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    cout << "Time taken: " << time_spent << endl;
    return 0;
}