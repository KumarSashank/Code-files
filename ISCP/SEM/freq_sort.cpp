#include <bits/stdc++.h>
using namespace std;
bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second == p2.second)
        return p1.first < p2.first;
    return p1.second > p2.second;
}
vector<int> frequencySort(vector<int> &nums)
{
    unordered_map<int, int> m;
    for (auto x : nums)
        m[x]++;
    vector<pair<int, int> > v;
    for (auto p : m)
        v.push_back(p);
    sort(v.begin(), v.end(), comp);
    vector<int> res;
    for (auto p : v)
    {
        while (p.second--)
            res.push_back(p.first);
    }
    return res;
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    for (int x : frequencySort(nums))
        cout << x << " ";
    return 0;
}