// You are using GCC
#include <bits/stdc++.h>
using namespace std;

#define MIN -1

int main()
{
    int dm = 0, cp, n;
    int req[100], is_completed[100];
    memset(is_completed, 0, sizeof(is_completed));
    cin >> cp;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> req[i];

    int completed = 0, temp, idx = -1, seek;
    while (completed != n)
    {
        temp = MIN;
        for (int i = 0; i < n; i++)
        {
            seek = abs(cp - req[i]);
            if (seek > temp)
            {
                if (is_completed[i] == 0)
                {
                    temp = seek;
                    idx = i;
                }
            }
        }
        // cout << temp << "\n";
        dm += temp;
        cp = req[idx];
        is_completed[idx] = 1;
        req[idx] = MIN;
        completed++;
    }
    cout << dm;
}