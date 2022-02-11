#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, MEX1, MEX2;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<int> s1;
        set<int> s2;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s1.insert(x);
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s2.insert(x);
        }
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        set<int>::iterator it;
        int prev1, present1;
        for (it = s1.begin(); it != s1.end(); it++)
        {
            if (*it != 0)
            {
                MEX1 = 0;
                break;
            }
            if (it == s1.begin())
            {
                MEX1 = *it;
            }
            else
            {
                present1 = *it;
                prev1 = *(--it);
                if (present1 - prev1 > 1)
                {
                    MEX1 = prev1 + 1;
                    break;
                }
            }
        }
        int prev2, present2;
        for (it = s2.begin(); it != s2.end(); it++)
        {
            if (*it != 0)
            {
                MEX2 = 0;
                break;
            }
            if (it == s2.begin())
            {
                MEX2 = *it;
            }
            else
            {
                present2 = *it;
                prev2 = *(--it);
                if (present2 - prev2 > 1)
                {
                    MEX2 = prev2 + 1;
                    break;
                }
            }
        }
        if (MEX1 == MEX2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}