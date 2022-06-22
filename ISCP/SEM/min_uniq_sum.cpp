#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int sum = arr[0];
    int prev = arr[0];
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        if (prev >= curr)
        {
            curr = prev + 1;
        }
        sum += curr;
        prev = curr;
    }
    cout << sum;
}