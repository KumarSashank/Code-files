#include <bits/stdc++.h>
using namespace std;

#define fast_io                \
    ios_base::sync_with_stdio; \
    cin.tie(NULL)
#define endl "\n"
#define int long long int
const int mod = 1e9 + 7;

int powr(int a, int b)
{
    int res = 1;
    while (b)
    {
        if (b & 1)
            res = res * a;
        res %= mod;
        a *= a;
        a %= mod;
        b = b / 2;
    }
    return res;
}

int32_t main()
{
    fast_io;
    int t;
    cin >> t;
    while (t--)
    {
        // code goes here....
        int n, m;
        cin >> n >> m;
        cout << powr(n, m) << endl;
    }
}