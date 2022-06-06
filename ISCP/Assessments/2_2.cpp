// You are using GCC
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int len = str.length();
    int a = len / 2;
    int flag = 0;
    for (int i = 0; i < a; i++)
    {
        if (str[i] != str[len - 1 - i])
        {
            flag = 1;
            cout << "No";
            break;
        }
    }
    if (flag != 1)
    {
        cout << "Yes";
    }
}