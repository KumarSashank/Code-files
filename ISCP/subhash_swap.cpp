#include <iostream>
#include <string>
using namespace std;
int anagram(string str1, string str2)
{
    int n1 = str1.length();
    int n2 = str2.length();
    int i, j, n;
    if (n1 != n2)
        return 0;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (str1[j] > str1[j + 1])
            {
                char temp = str1[j + 1];
                str1[j + 1] = str1[j];
                str1[j] = temp;
            }
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (str2[j] > str2[j + 1])
            {
                char temp = str2[j + 1];
                str2[j + 1] = str2[j];
                str2[j] = temp;
            }
    for (int i = 0; i < n1; i++)
    {
        if (str1[i] != str2[i])
            return 0;
        else
            return 1;
    }
}
int main()
{
    string str1;
    string str2;
    cout << "Enter the string 1: ";
    cin >> str1;
    cout << "Enter the string 2: ";
    cin >> str2;
    if (anagram(str1, str2))
        cout << str1 << "&" << str2 << "are anagrams";
    else
        cout << str1 << "&" << str2 << "are not anagrams";
}