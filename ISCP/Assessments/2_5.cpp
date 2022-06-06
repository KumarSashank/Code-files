// You are using GCC
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, max = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i = i + 2)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    cout << "Reordered queue:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}