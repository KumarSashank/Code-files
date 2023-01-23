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
        int a[n];
        int prev1, prev2;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        prev2 = a[0];
        prev1 = a[1];
        int count = 0;
        if (prev1 != prev2)
        {
            count += 2;
        }
        for (int i = 2; i < n; i++)
        {
            if (a[i] != prev1)
            {
                if (prev1 != prev2)
                {
                    count++;
                }
                else
                {
                    count += 2;
                }
            }
            prev2 = prev1;
            prev1 = a[i];
        }
        cout << count << endl;
    }
}