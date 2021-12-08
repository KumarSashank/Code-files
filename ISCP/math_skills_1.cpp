#include <iostream>
using namespace std;
int main()
{
    string s1, s2;
    int count = 0, count2 = 0;
    cin >> s1;
    cin >> s2;
    for (int i = 0; i < s1.length(); i++)
    {
        count = 0;
        for (int j = 0, k = i; j < s2.length(); j++, k++)
        {
            if (s2[j] == s1[k])
            {
                count++;
            }
        }
        if (count == s2.length())
        {
            count2++;
        }
    }
    cout << count2;
}