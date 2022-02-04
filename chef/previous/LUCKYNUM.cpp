#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int a[t][3];
    bool ans[t];
    for (int i = 0; i < t; i++)
    {
        cin >> a[i][0] >> a[i][1] >> a[i][2];
        if (a[i][0] == 7 || a[i][1] == 7 || a[i][2] == 7)
        {
            ans[i] = true;
        }
        else
            ans[i] = false;
    }
    for (int i = 0; i < t; i++)
    {
        if (ans[i] == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}