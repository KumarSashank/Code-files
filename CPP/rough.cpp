#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, c;
    cin >> t;
    while (t--)
    {
        cin >> n >> c;
        int a[n + 1];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        a[n] = c;
        sort(a, a + n + 1);
        int index = 0;
        for (int i = 0; i < n + 1; i++)
        {
            if (a[i] == c)
            {
                index = i;
                break;
            }
        }
        int x = n - index;
        int y = index - x;
        if (y < 0)
        {
            cout << endl
                 << -y << endl;
        }
        else
        {
            cout << y << endl;
        }
    }
}