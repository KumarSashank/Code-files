#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
using namespace std;

long long gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to return LCM of two numbers
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

int main()
{
    int t;
    cin >> t;
    int x, k;
    for (int i = 0; i < t; i++)
    {
        cin >> x >> k;
        cout << lcm(x, 2 * x) << " " << lcm(x * k - 1, x * k) << endl;
    }
}