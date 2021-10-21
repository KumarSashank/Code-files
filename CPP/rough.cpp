#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int pos[t] = {0};
    int j;
    for (j = 0; j < t; j++)
    {
        int x, y;
        cin >> x >> y;
        if (x < y)
        {
            while (x < y)
            {
                pos[j] = pos[j] + 1;
                x = x + 2;
            }
            if (x != y)
            {
                while (x > y)
                {
                    pos[j] = pos[j] + 1;
                    x = x - 1;
                }
            }
        }
        else if (x > y)
        {
            while (x > y)
            {
                pos[j] = pos[j] + 1;
                x = x - 1;
            }
        }
    }
    for (j = 0; j < t; j++)
    {
        cout << pos[j] << endl;
    }
}