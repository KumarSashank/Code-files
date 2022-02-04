#include <iostream>
using namespace std;

int main()
{
    long long int t;
    long long int n, k;
    cin >> t;
    for (long long int i = 0; i < t; i++)
    {
        cin >> n >> k;
        if (k == 1)
        {
            cout << (n - 1) * 2 << endl;
        }
        else
        {
            cout << (n - k + 1) * 2 << endl;
        }
    }
}