// You are using GCC
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    float f = (float)n / 2;
    int x = round(f);
    int j = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            arr[i] = arr[i - 1] + x;
        }
        else
        {
            arr[i] = j;
            j++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}