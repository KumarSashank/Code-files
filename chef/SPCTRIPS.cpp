#include <iostream>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    int ans[t];
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        n = n - 2;
        n = n * 3;
        if (n == 0)
            n = 3;
        ans[i] = n;
    }
    for (int i = 0; i < t; i++)
    {
        cout << ans[i] << endl;
    }
}