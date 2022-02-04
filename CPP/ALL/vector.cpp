#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cout << "Enter the size : ";
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        arr.push_back(k);
    }
    sort(arr.begin(), arr.end());
    cout << "The sorted :\n";
    vector<int>::iterator it;
    for (it = arr.begin(); it != arr.end(); it++)
    {
        cout << *it << " ";
    }
}