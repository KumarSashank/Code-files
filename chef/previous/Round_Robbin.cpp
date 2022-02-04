#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n, k;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> k;
        int ans = 2 * (n - k);
        ans = ans + 2 * ((k - 1) / 2);
        cout << ans << endl;
    }
}