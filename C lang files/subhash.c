#include <stdio.h>

void findRepeatingElements(int arr[], int size)
{
    int i, j;
    printf("The two repeating elements are: ");

    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("%d ", arr[i]);
                break;
            }
        }
    }
}

int main()
{
    int size, i;
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the values of elements in the array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    findRepeatingElements(arr, size);

    return 0;
}
