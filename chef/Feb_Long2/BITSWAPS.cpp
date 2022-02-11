#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, i;
    cin >> t;
    while (t--)
    {
        int n, j, k, z = 0;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (i = 0; i < n - 1; i++)
        {
            k = i;
            for (int j = i; j < n; j++)
            {
                if (a[j] < a[k])
                    k = j;
            }

            if (a[i] & a[k])
            {
                swap(a[i], a[k]);
            }
            else
            {
                z = 2;
                break;
            }
        }
        if (z == 2)
        {
            cout << "NO" << endl;
            cout << i << " " << k << endl;
            cout << a[i] << " " << a[k] << endl;
            cout << 34 & 4;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}