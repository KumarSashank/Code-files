#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int max = 0;
    string ans;
    for (int i = 0; i < n; i++)
    {
        string s;
        int count = 0;
        cin >> s;
        int len = s.length();
        int half_len = len / 2;
        for (int i = 0; i < half_len; i++)
        {
            if (s[i] != s[len - i - 1])
            {
                count++;
            }
        }
        if (count > max)
        {
            max = count;
            ans = s;
        }
    }
    cout << ans;
}