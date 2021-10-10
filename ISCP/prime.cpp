#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long int n, k = 0;
    cin >> n;
    for (long int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0 || n == 1)
        {
            cout << "no" << endl;
            k = 1;
            break;
        }
    }
    if (k != 1 && n != 1)
    {
        cout << "yes" << endl;
    }
    if (n == 1)
    {
        cout << "no" << endl;
    }

    return 0;
}
