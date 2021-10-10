#include <iostream>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1;
    cin >> s2;
    int len1 = s1.length();
    int len2 = s2.length();
    int count = 0;
    int check = 0;
    for (int i = 0; i < len1 - len2 + 1; i++)
    {
        for (int j = 0, k = i; j < len2; j++, k++)
        {
            if (s2[j] == s1[k])
            {
                check++;
            }
        }
        if (check == len2)
        {
            count++;
        }
    }
    cout << count << endl;
}