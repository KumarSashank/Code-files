#include <iostream>
using namespace std;

int main()
{
    int t, n, m, q, sum = 0, f;
    cin >> t;
    int ans[t];
    for (int i = 0; i < t; i++)
    {
        cin >> n >> m >> q;
        char g;
        int num[q];
        sum = 0;
        f = 1;
        for (int j = 0; j < q; j++)
        {
            cin >> g;
            cin >> num[j];
            if (g == '+')
            {
                num[j] = -num[j];
                sum = sum + 1;
            }
            else
            {
                for (int i = 0; i <= j; i++)
                {
                    if (num[j] == -num[i])
                        sum = sum - 1;
                }
                if (sum != sum - 1 || sum > m)
                {
                    f = 0;
                    break;
                }
            }
        }
        if (f == 0)
        {
            cout << "Inconsistent" << endl;
        }
        else
        {
            cout << "Consistent" << endl;
        }
    }
}