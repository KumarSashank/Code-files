#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int len;
        string s;
        cin >> len >> s;
        int count = 0;
        int flag = 0;
        int ans = 0;
        for (int i = 0; i < len; i++)
        {
            if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
            {
                // flag = 1;
                count++;
                if (count == 4)
                {
                    flag = 1;
                }
            }
            else
            {
                if (count >= 4)
                {
                    // ans++;
                    // count = 0;
                    // cout << "NO" << endl;
                    flag = 1;
                }
                else
                {
                    count = 0;
                }
            }
        }
        if (flag == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}