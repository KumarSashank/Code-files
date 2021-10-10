#include <iostream>
using namespace std;

int main()
{
    int t, n, k;
    cin >> t;
    int ans[t];
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        if (n == 1)
            ans[i] = 1;
        for (int j = 2; j <= n / 2; j++)
        {
            if (n % j == 0)
            {
                ans[i] = 1;
                break;
            }
        }
    }
    for (int i = 0; i < t; i++)
    {
        if (ans[i] != 1)
            cout << "\nyes";
        else
            cout << "\nno";
    }
}