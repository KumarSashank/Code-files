#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.length();
    int count = 0;
    for (int i = 0; i < n; i = i + 3)
    {
        if (s1[i] != 'S')
            count++;
        if (s1[i + 1] != 'O')
            count++;
        if (s1[i + 2] != 'S')
            count++;
    }
    cout << count << endl;
}