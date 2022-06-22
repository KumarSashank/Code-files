// Efficient C++ program to count number of elements
// with values in given range.
#include <bits/stdc++.h>
using namespace std;

// function to find first index >= x
int lowerIndex(int arr[], int n, int x)
{
    int l = 0, h = n - 1;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (arr[mid] >= x)
            h = mid - 1;
        else
            l = mid + 1;
    }
    return l;
}

// function to find last index <= y
int upperIndex(int arr[], int n, int y)
{
    int l = 0, h = n - 1;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (arr[mid] <= y)
            l = mid + 1;
        else
            h = mid - 1;
    }
    return h;
}

// function to count elements within given range
int countInRange(int arr[], int n, int x, int y)
{
    // initialize result
    int count = 0;
    count = upperIndex(arr, n, y) - lowerIndex(arr, n, x) + 1;
    return count;
}

// driver function
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Preprocess array
    sort(arr, arr + n);
    int num;
    cin >> num;
    int matrix[num][num];
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            cin >> matrix[i][j];
        }
    }
    // Answer queries
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            int x = matrix[0][j];
            int y = matrix[1][j];
            cout << countInRange(arr, n, x, y) << endl;
        }
    }
    // int i = 1, j = 4;
    // cout << countInRange(arr, n, i, j) << endl;

    // i = 9, j = 12;
    // cout << countInRange(arr, n, i, j) << endl;
    return 0;
    // 0,0 1,0 0,1 1,1
}
