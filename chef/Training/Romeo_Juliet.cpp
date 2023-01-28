#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    // scan the whole sentence using gets
    getline(cin, s);
    // remove teh spaces from the sentence
    // s.erase(remove(s.begin(), s.end(), ' '), s.end());
    // // lower the case of the s
    // transform(s.begin(), s.end(), s.begin(), ::tolower);
    // cout << s;
    // make a character set using set in stl
    set<char> s1;
    // insert the characters of the sentence into the set
    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        if (s[i] != ' ')
        {
            s1.insert(tolower(s[i]));
        }
    }
    if (s1.size() == 26)
    {
        cout << "France";
    }
    else
    {
        cout << "Italy";
    }
}