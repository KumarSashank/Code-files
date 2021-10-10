#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    int l1 = a.length();
    int l2 = b.length();
    int i, j;
    if (l1 == l2)
    {
        for (i = 0; i < l1; i++)
        {
            if (a[i] == b[i])
                cout << "0";
            else
                cout << "1";
        }
    }
    else if (l1 > l2)
    {
        for (i = 0; i < l1 - l2; i++)
            cout << a[i];
        //Here a starts from l1-l2 and b starts from 0.
        for (i = l1 - l2; i < l1; i++)
        {
            if (a[i] == b[i - (l1 - l2)])
                cout << "0";
            else
                cout << "1";
        }
    }
    else if (l2 > l1)
    {
        for (i = 0; i < l2 - l1; i++)
            cout << b[i];
        //Here also b starts from l2-l1 and a starts from 0.
        for (i = l2 - l1; i < l2; i++)
        {
            if (b[i] == a[i - (l2 - l1)])
                cout << "0";
            else
                cout << "1";
        }
    }
    return 0;
}