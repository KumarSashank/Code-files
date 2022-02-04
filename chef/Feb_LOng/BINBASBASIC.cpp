#include <iostream>
using namespace std;

void getcount(string s, int k)
{
    int len = s.length();
    int a = len / 2;
    int count = 0;
    for (int i = 0; i < a; i++)
    {
        if (s[i] != s[--len])
        {
            count++;
        }
    }
    if (count > k)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        int k, n;
        cin >> n >> k;
        cin >> str;
        getcount(str, k);
    }
}