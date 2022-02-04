#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, count0 = 0, count1 = 0, count2 = 0;
    cin >> t;
    int a[t][5];
    int ans[t];
    for (int i = 0; i < t; i++)
    {
        cin >> a[i][0] >> a[i][1] >> a[i][2] >> a[i][3] >> a[i][4];
        for (int j = 0; j < 5; j++)
        {
            if (a[i][j] == 0)
                count0++;
            if (a[i][j] == 1)
                count1++;
            if (a[i][j] == 2)
                count2++;
        }
        if (count1 > count2)
        {
            ans[i] = 1;
        }
        else if (count2 > count1)
        {
            ans[i] = 2;
        }
        else
        {
            ans[i] = 0;
        }

        count0 = count1 = count2 = 0;
    }
    for (int i = 0; i < t; i++)
    {
        if (ans[i] == 0)
        {
            cout << "DRAW\n";
        }
        else if (ans[i] == 1)
        {
            cout << "INDIA\n";
        }
        else
        {
            cout << "ENGLAND\n";
        }
    }
}