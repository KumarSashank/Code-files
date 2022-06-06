// You are using GCC
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
    int a, flag = 0;
    cin >> a;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == a)
        {
            cout << "Element found";
            flag = 1;
            break;
        }
    }
    if (flag != 1)
    {
        cout << "Element not found";
    }
}