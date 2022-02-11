#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test, total, count, n, num;
    vector<int> a;
    vector<int>::iterator i;
    cin >> test;
    while (test--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            a.push_back(num);
        }
        count = 0;
        for (i = a.begin(), total = 1; i != a.end(); i++, total++)
        {
            if (*i == total)
            {
                count++;
                i = a.insert(a.begin() + total - 1, 0);
            }
        }
        cout << count << endl;
        a.clear();
    }
}
