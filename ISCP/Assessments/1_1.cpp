#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    // create iterator for the vector
    vector<int>::iterator it;
    it = v.end();
    it--;
    cout << *it;
    v.pop_back();
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it;
    }
}