#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int key;
    cin >> key;
    // lower the case of the string
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            int temp = s[i] + (key % 26);
            if (temp > 122)
            {
                temp = (temp % 122) + 96;
                s[i] = temp;
            }
            else

                s[i] = temp;
        }
        else
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                int temp = s[i] + (key % 26);
                if (temp > 90)
                {
                    temp = (temp % 90) + 64;
                    s[i] = temp;
                }
                else
                {
                    s[i] = temp;
                }
            }
        }
        }
    cout << s << endl;
}
