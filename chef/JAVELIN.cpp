#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t, n, m, x, arr[1000], count1, b[1000], count2, k, c;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        count1 = 0, count2 = 0;
        cin >> n >> m >> x;
        int num[n + 1];
        for (int j = 1; j <= n; j++)
        {
            cin >> num[j];
            if (num[j] >= m)
            {
                arr[j] = j;
                count1++;
            }
            if (num[j] < m)
            {
                b[j] = j;
                count2++;
            }
            if (count1 < x)
            {
                int diff = x - count1;
                sort(b, b + count2);
                for (k = count1 + diff, c = count2; k > count1, c > (count2 - x); k--, c--)
                {
                    arr[k] = b[c];
                }
            }
            sort(arr, arr + k);
            cout << k;
            for (int i = 0; i < k; i++)
            {
                cout << arr[i];
            }
            cout << "\n";
        }
    }
}