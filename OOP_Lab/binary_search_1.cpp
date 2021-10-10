#include <iostream>
using namespace std;

void search(int[], int, int);

// void binary(int arr[], int low, int high)
// {
//     int mid = (low + high) / 2;
//     if (arr[mid] > arr[mid - 1])
//     {
//         cout << "The index is " << mid << endl;
//     }
//     else
//     {
//         binary(arr, mid, high);
//         cout << "Index not found" << endl;
//     }
// }

int main()
{
    int size = 0;
    int low, high;
    cout << "Enter the size of an array :";
    cin >> size;
    low = 0;
    high = size - 1;
    int arr[size];
    cout << "Enter the array in sorted order :";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    search(arr, low, high);
    // binary(arr, low, high);
    // cout << "The index is " << index << endl;
}

void search(int arr[], int low, int high)
{
    if (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > arr[mid - 1])
        {
            cout << "The index is " << mid << endl;
        }
        else
        {
            search(arr, mid, high);
            // return 0;
        }
    }
}
