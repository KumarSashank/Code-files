#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, zero, one, i;
    string a;
    cin >> t;
    while (t--)
    {
        cin >> n;
        zero = 0, one = 0;
        cin >> a;
        for (i = 0; i < n; i++)
        {
            if (a[i] == '0')
                zero++;
            else
                one++;
        }
        if (n == 1)
        {
            cout << "YES" << endl;
        }
        else if (zero == one)
        {
            cout << "YES" << endl;
        }
        else if (zero % 2 == 0 && one % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else if ((zero % 2 == 0 && one % 2 != 0) || (zero % 2 != 0 && one % 2 == 0))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}