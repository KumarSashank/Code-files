#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, t;
    float b;
    cin >> t;
    while (t--)
    {
        cin >> a;
        b = (0.143 * a);
        b = pow(b, a);
        cout << round(b) << endl;
    }
}