#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int k, n, count = 1, i, j = 0;
    cin >> k >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] >= k)
        {
            j = 9;
        }
    }
    if (j != 9)
    {
        int q = k;
        int i = 0;
        while (q >= 1 && i < n)
        {
            if (q > a[i])
                q = q - a[i++];
            else
            {
                q = k;
                count++;
            }
        }
        cout << count;
    }
    else
        cout << "-1";
    return 0;
}