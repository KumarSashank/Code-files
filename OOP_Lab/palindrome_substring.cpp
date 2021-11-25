#include <iostream>
using namespace std;

bool is_palindrome(string str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
    {
        if (str[i] != str[n - i - 1])
        {
            return false;
        }
    }
    return true;
}

class tell
{
public:
    int count_palindrome(string str)
    {
        int n = str.length();
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                if (is_palindrome(str.substr(i, j - i)))
                {
                    count++;
                }
            }
        }
        return count;
    }
};

int main()
{
    tell obj;
    string str;
    cin >> str;
    int n = str.length();
    cout << obj.count_palindrome(str);
}