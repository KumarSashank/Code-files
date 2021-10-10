#include <iostream>
#include <cmath>
//#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int a[t][3];
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
        sort(a[i], a[i] + 3);
    }
    for (int i = 0; i < t; i++)
    {
        cout << a[i][1] << endl;
    }
}