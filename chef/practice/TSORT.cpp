#include <iostream>
//#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    sort(b, b + n);

    for (int i = 0; i < n; i++)
    {
        cout << b[i] << "\n";
    }
    return 0;
}