#include <iostream>
using namespace std;

int main()
{
    int t, len, num1, num2;
    cin >> t;
    string n[t];
    int ans[t];
    for (int i = 0; i < t; i++)
    {
        cin >> n[i];
        len = n[i].length();
        num1 = n[i][0] - '0';
        num2 = n[i][len - 1] - '0';
        ans[i] = num1 + num2;
    }
    for (int i = 0; i < t; i++)
    {
        cout << ans[i] << endl;
    }
}