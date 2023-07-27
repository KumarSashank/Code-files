#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int cur, prev = 0;
        char c;
        int ans = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> c;
            if (c == 'P')
            {
                int temp;
                cin >> temp;
                prev = cur;
                cur = temp;
            }
            else
            {
                int temp = cur;
                cur = prev;
                prev = temp;
            }
        }
        cout << "Player " << cur << endl;
    }
    return 0;
}
