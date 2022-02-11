#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1, n;
    cin >> t;
    while (t--)
    {
        cin >> n;

        map<int, int> m;

        for (int i = 0; i < 2 * n; i++)
        {
            int x;
            cin >> x;
            m[x]++;
        }

        int f = 1;

        for (int i = 0; i < 2 * n; i++)
        {
            if (m[i] == 1)
            {
                f = 0;
                break;
            }
            else if (m[i] == 0)
                break;
        }

        if (f)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
