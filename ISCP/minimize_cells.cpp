#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string motto;
    getline(cin, motto);
    float len = motto.length();
    int len2 = motto.length();
    len = sqrt(len);
    len = ceil(len);
    for (int i = 1; i <= len * len; i++)
    {
        if (i <= len2)
        {
            cout << motto[i - 1];
            if (i % (int)len == 0)
            {
                cout << endl;
            }
        }
        else
        {
            cout << "?";
            if (i % (int)len == 0)
            {
                cout << endl;
            }
        }
    }
}