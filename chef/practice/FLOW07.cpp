#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t, len, sum = 0;
    cin >> t;
    string num[t];
    int ans[t];
    for (int i = 0; i < t; i++)
    {
        sum = 0;
        cin >> num[i];
        len = num[i].length();
        int digit[len];
        for (int j = 0; j < len; j++)
        {

            digit[j] = num[i][j] - '0';
            if (digit[j] != 0)
            {
                digit[j] = digit[j] * pow(10, j);
            }
            sum = sum + digit[j];
        }
        ans[i] = sum;
    }
    for (int i = 0; i < t; i++)
    {
        cout << ans[i] << endl;
    }
}