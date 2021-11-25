#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string m1[n], m2[n];
        int d[n];
        for (int i = 0; i < n; i++)
        {
            cin >> m1[i] >> m2[i];
            d[i] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            int c = 0;
            for (int j = i + 1; j < n; j++)
            {
                if (m1[i] == m1[j])
                {
                    c = 1;
                    d[j] = 1;
                }
            }
            if (c == 1)
            {
                d[i] = 1;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (d[i] == 1)
            {
                cout << m1[i] << " " << m2[i] << endl;
            }
            else
            {
                cout << m1[i] << endl;
            }
        }
    }
    return 0;
}