#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define MOD 1000000007
#define vi vector<int>

void func()
{
    int x, y;
    cin >> x >> y;
    int p = x % y;
    int i;
    vi v;
    v.pb(1);
    if (p == 0)
        p = y;
    for (i = 100; i >= 2; i--)
    {
        while (p % i == 0 and p > 0)
        {
            v.pb(i);
            v.pb(1);
            p = p / i;
        }
    }
    if (p != 1)
    {
        cout << -1 << endl;
        return;
    }
    cout << v.size() << endl;
    for (i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        func();
    }
}