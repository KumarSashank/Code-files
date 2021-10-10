#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long int n;
    int j, a[100];
    cin >> n;
    j = 0;
    if (n != 0)
    {
        while (n != 0)
        {
            a[j] = n % 2;
            n = n / 2;
            j++;
        }
        for (j = j - 1; j >= 0; j--)
            cout << a[j];
    }
    else
        cout << "0";
    return 0;
}