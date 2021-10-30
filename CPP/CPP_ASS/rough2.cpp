#include <bits/stdc++.h>
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        long long gcd = __gcd(a, b);
        long long lcm = (a * b) / gcd;
        cout << gcd << " " << lcm << endl;
    }
}