#include <iostream>
using namespace std;

int main()
{
    int t, n, m;
    int temp = 0;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        int arr[n];
        temp = 0;
        int count = 0;
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (temp < arr[i])
            {
                count++;
            }
            else
            {
                if (count == m)
                {
                    cout << "Yes\n";
                    flag = 1;
                    break;
                }
                else
                {
                    count = 0;
                }
            }
        }
        if (flag == 0)
        {
            cout << "No\n";
        }
    }
}