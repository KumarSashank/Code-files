#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, a, x;
        cin >> n >> a;

        int i = 1;

        while (n >= pow(i, 2))
        {
            x = i;
            i++;
        }

        if ((n - (x * x)) > (n - pow(x + 1, 2)))
        {
            cout << (a * x) << endl;
        }

        else
        {
            cout << (a * (x + 1)) << endl;
        }
    }
}