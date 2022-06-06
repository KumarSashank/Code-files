// You are using GCC
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void decimal2binary(int num)
{
    int binaryNum[32];
    int i = 0;
    while (num > 0)
    {
        binaryNum[i] = num % 2;
        num = num / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout << binaryNum[j];
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        decimal2binary(i);
    }
}