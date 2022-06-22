#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int m;
    cin >> m;
    int a[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    int n;
    cin >> n;
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int ans[n];
    sort(a, a + m);
    for (int i = 0; i < n; i++)
    {
        int low = 0;
        int high = 0;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (a[mid] > b[i])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        ans[i] = low;
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << endl;
    }
}