// You are using GCC
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, m;
    cin >> n;
    int arr[n];
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        if (m != 0)
        {
            cin >> arr[--m];
        }
        else
        {
            cin >> arr[i];
        }
    }
    cout << "Reversed queue :\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}