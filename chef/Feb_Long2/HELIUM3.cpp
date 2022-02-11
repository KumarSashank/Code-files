#include <iostream>
using namespace std;

int main()
{
    int t, a, b, x, y;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> x >> y;
        if (x * y >= a * b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}