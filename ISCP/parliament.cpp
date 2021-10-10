#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long int n, m, a, x, y;
    cin >> n >> m >> a;
    x = ceil((float)n / a);
    y = ceil((float)m / a);
    cout << x * y << endl;
    return 0;
}
