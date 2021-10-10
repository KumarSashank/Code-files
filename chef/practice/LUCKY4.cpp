#include <iostream>
using namespace std;

int main()
{
    int t, len;
    cin >> t;
    int ans[t];
    string num[t];
    for (int i = 0; i < t; i++)
    {
        cin >> num[i];
        len = num[i].length();
        ans[i] = 0;
        for (int j = 0; j < len; j++)
        {
            if (num[i][j] == '4')
                ans[i]++;
        }
    }
    for (int i = 0; i < t; i++)
    {
        cout << ans[i] << endl;
    }
}