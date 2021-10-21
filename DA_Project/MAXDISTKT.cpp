#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    return a.second < b.second;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<pair<int, int> > arr;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            arr.push_back({x, j});
        }
        sort(arr.begin(), arr.end());
        int k = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j].first > k)
            {
                arr[j].first = k;
                k++;
            }
        }
        sort(arr.begin(), arr.end(), cmp);
        for (int j = 0; j < n; j++)
        {
            cout << arr[j].first << " ";
        }
        cout << endl;
    }
    return 0;
}