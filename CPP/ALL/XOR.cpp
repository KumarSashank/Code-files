#include <cmath>
#include <stdlib.h>
#include <string.h>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string a, b, ans = "";
    cin >> a;
    cin >> b;
    int big = (a.length() > b.length()) ? a.length() : b.length();
    int low = (a.length() < b.length()) ? a.length() : b.length();
    int max = (a.length() > b.length()) ? 1 : 2;
    if (big == low)
    {
        for (int i = 0; i < big; i++)
        {
            if (a[i] == b[i])
                ans.append("0");
            else
                ans.append("1");
        }
        cout << ans << endl;
    }
    else
    {
        int i = 0;
        int temp;
        if (max == 1)
        {
            while (i < (big - low))
            {
                temp = a[i] - '0';
                if (temp == 1)
                {
                    ans.append("1");
                }
                else
                    ans.append("0");
                i++;
            }
            int j = 0;
            while (i < big && j < low)
            {
                if (a[i] == b[j])
                    ans.append("0");
                else
                    ans.append("1");
                i++;
                j++;
            }
            cout << ans;
        }
        else
        {
            while (i < (big - low))
            {
                temp = b[i] - '0';
                if (temp == 1)
                {
                    ans.append("1");
                }
                else
                    ans.append("0");
                i++;
            }
            int j = 0;
            while (i < big && j < low)
            {
                if (b[i] == a[j])
                    ans.append("0");
                else
                    ans.append("1");
                i++;
                j++;
            }
            cout << ans;
        }
    }
    return 0;
}
