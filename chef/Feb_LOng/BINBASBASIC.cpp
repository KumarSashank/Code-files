#include <iostream>
using namespace std;

void getcount(string s, int k, int N)
{
    int len = N;
    int a = N / 2;
    int count = 0;
    for (int i = 0; i < a; i++)
    {
        if (s[i] != s[--len])
        {
            count++;
        }
    }
    int diff = k - count;
    if (count <= k)
    {
        if (N % 2 == 1)
        {
            cout << "YES" << endl;
        }
        else if (diff % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
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
        getcount(str, k, n);
    }
}