#include <iostream>
using namespace std;
int main()
{
    string s1;
    string s2;
    int a[26] = {0};
    int i = 0;
    int j;
    j = s2.size();
    int count = 0;
    while (s1[i] != '\0')
    {
        a[s1[i] - 'a']++;
        i++;
    }
    i = 0;
    while (s2[i] != '\0')
    {
        if (a[s2[i] - 'a'] != 0)
        {
            a[s2[i] - 'a']--;
            i++;
        }
        else
        {
            break;
        }
    }
    if (s1[i] == s2[i])
        count++;
    cout << count;

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}