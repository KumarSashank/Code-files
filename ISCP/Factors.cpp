#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int j = 1; j <= n / 2; j++)
        {
            if (n % j == 0)
            {
                cout << j << " ";
            }
        }
        cout << n << endl;
    }
}