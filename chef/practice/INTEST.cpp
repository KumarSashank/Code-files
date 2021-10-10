#include <iostream>
using namespace std;

int main()
{
    int n, k, sum = 0;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % k == 0)
        {
            sum++;
        }
    }
    cout << sum << endl;
}