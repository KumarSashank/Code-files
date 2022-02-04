#include <iostream>
using namespace std;

int main()
{
    int t, n, p, k, a, count, i, j;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> n >> p >> k;
        int b = n / k;
        int c = n % k;
        count = ((p % k) + 1) * b + c;
        cout << count << endl;
    }
}