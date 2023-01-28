// https://www.codechef.com/problems/LUCKYSTR
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, n;
    cin >> k >> n;
    vector<string> lucky;
    vector<string> pillow;
    for (int i = 0; i < k; i++)
    {
        string s;
        cin >> s;
        lucky.push_back(s);
    }
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        pillow.push_back(s);
    }
}