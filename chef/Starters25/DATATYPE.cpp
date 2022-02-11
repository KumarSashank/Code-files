#include <iostream>
using namespace std;

int main()
{
    int t, n, x;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        if (x > n)
        {
            while (n < x)
            {
                x = x - n - 1;
            }
            cout << x << endl;
        }
        else
        {
            cout << x << endl;
        }
    }
}