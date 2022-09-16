#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    // find parity of a number
    int n;
    cin >> n;
    int parity = 0;
    for (parity = 0;; parity++)
    {
        if (pow(2, parity) >= parity + n + 1)
        {
            break;
        }
    }
    cout << parity << endl;
}