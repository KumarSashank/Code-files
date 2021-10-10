#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    float a, b, c, d, w, x, y, z;

    cin >> a >> b >> c >> d >> w >> x >> y >> z;

    float m1 = (d - b) / (c - a);
    float m2 = (z - x) / (y - w);
    if (m1 == m2)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}
