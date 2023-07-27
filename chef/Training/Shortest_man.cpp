#include <iostream>
#include <bits/stdc++.h>
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
    int min = arr[0];
    int index = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            index = i;
        }
    }
    int temp = arr[0];
    arr[0] = arr[index];
    arr[index] = temp;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}