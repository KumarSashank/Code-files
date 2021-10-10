#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num, m, p, z;
    cin >> num;
    int k = num - 2;
    p = k;
    z = (num / 2);
    z = z + 1;
    for (int i = 1; i <= z; i++, num--)
    {
        /* code */
        m = k;
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        cout << i;
        while (m > 0)
        {
            cout << " ";
            m--;
        }
        if (i != z)
        {
            cout << num << endl;
        }
        k = k - 2;
    }

    return 0;
}
