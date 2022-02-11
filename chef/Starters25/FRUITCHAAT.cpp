#include <iostream>
using namespace std;

int main()
{
    int t, x, y, a;
    cin >> t;
    while (t--)
    {

        cin >> x >> y;
        a = x / 2;
        if (a <= y)
        {
            cout << a << endl;
        }
        else
        {
            cout << y << endl;
        }
    }
}