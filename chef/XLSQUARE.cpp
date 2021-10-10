#include <iostream>
#include <cmath>
//#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test_cases, N, length;
    cin >> test_cases;
    int ans[test_cases];
    for (int i = 0; i < test_cases; i++)
    {
        cin >> N >> length;
        for (int j = N; j > 0; j--)
        {
            float k = sqrt(j);
            float l = round(k);
            if (k == l)
            {
                ans[i] = l * length;
                break;
            }
        }
    }
    for (int i = 0; i < test_cases; i++)
    {
        cout << ans[i] << endl;
    }
}