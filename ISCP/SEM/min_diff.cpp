#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int min_diff = INT_MAX;
    sort(a, a + n);
    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum += abs(a[i] - a[i + 1]);
    }
    cout << sum;
    return 0;
}