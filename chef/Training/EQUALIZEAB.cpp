#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t, a, b, x, flag = 0;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> x;
        // if (a > b)
        // {
        //     while (a > b)
        //     {
        //         a = a - x;
        //         b = b + x;
        //         if (a == b)
        //         {
        //             flag = 1;
        //             break;
        //         }
        //     }
        // }
        // else if (a < b)
        // {
        //     while (a < b)
        //     {
        //         a = a + x;
        //         b = b - x;
        //         if (a == b)
        //         {
        //             flag = 1;
        //             break;
        //         }
        //     }
        // }
        // else
        // {
        //     flag = 1;
        // }
        // if (flag == 1)
        // {
        //     cout << "YES" << endl;
        //     flag = 0;
        // }
        // else
        // {
        //     cout << "NO" << endl;
        // }
        if (a > b)
        {
            if ((a - b) % 2 * x == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else if (a < b)
        {
            if ((b - a) % 2 * x == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
