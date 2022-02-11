#include <iostream>
using namespace std;

int main()
{
    int t, Carlsen, Chef;
    long long int x;
    string str;
    cin >> t;
    while (t--)
    {
        Carlsen = 0, Chef = 0;
        cin >> x >> str;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == 'C')
                Carlsen = Carlsen + 2;
            else if (str[i] == 'N')
                Chef = Chef + 2;
            else
                Carlsen++, Chef++;
        }
        if (Carlsen > Chef)
        {
            cout << 60 * x << endl;
        }
        else if (Carlsen < Chef)
        {
            cout << 40 * x << endl;
        }
        else
        {
            cout << 55 * x << endl;
        }
    }
}