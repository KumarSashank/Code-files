#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, count = 0;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        /* code */
        if (n % i == 0)
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}
