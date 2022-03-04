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
        int a[n], b[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b + n);
        int index = 0;
        for (i = 0; i < n; i++)
        {
            for (j = i; j < n; j++)
            {
                for (k = 0; k < n; k++)
                {
                    if (b[j] == a[k])
                    {
                        index = k;
                        break;
                    }
                }
                if (a[i] & a[index])
                {
                    swap(a[i], a[index]);
                    break;
                }
            }
        }
        for (i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                z = 1;
                break;
            }
        }
        // for (i = 0; i < n - 1; i++)
        // {
        //     k = i;
        //     for (int j = i; j < n; j++)
        //     {
        //         if (a[j] < a[k])
        //             k = j;
        //     }

        //     if (a[i] & a[k])
        //     {
        //         swap(a[i], a[k]);
        //     }
        //     else
        //     {
        //         z = 2;
        //         break;
        //     }
        // }
        if (z == 1)
        {
            cout << "NO" << endl;
            // cout << i << " " << k << endl;
            // cout << a[i] << " " << a[k] << endl;
            // cout << 34 & 4;
        }
        else
        {
            cout << "YES" << endl;
        }
        // }
    }
}