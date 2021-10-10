#include <iostream>
using namespace std;

int sum(string);

int main()
{
    string str1, str2;
    cout << "Enter the string 1 : ";
    getline(cin, str1);
    cout << "Enter the string 2 : ";
    getline(cin, str2);
    int len1 = str1.length();
    int len2 = str2.length();
    int ascii_sum1 = sum(str1);
    int ascii_sum2 = sum(str2);
    if (len1 == len2 && ascii_sum1 == ascii_sum2)
    {
        cout << "It's an Anagram\n";
    }
    else
    {
        cout << " It's not an Anagram\n";
    }
}

int sum(string str)
{
    int len = str.length();
    int ascii_sum = 0;
    for (int i = 0; i < len; i++)
    {
        ascii_sum += str[i];
    }
    cout << ascii_sum << "\n";
    return ascii_sum;
}