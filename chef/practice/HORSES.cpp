#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        ll arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + a);
        int min;
        min = arr[1] - arr[0];
        for (int i = 1; i < a - 1; i++)
        {
            if (min > (arr[i + 1] - arr[i]))
            {
                min = arr[i + 1] - arr[i];
            }
        }
        cout << min << endl;
    }
}