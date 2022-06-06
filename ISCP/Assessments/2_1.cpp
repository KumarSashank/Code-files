// You are using GCC
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 1; i <= 6; i++)
    {
        v.push_back(i * 10);
    }
    int a = n % 6;
    vector<int>::iterator it;
    for (int i = 0; i < a; i++)
    {
        it = v.begin();
        v.push_back(*it);
        v.erase(v.begin());
    }
    cout << "10 20 30 40 50 60\n";
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
}