#include <bits/stdc++.h>
using namespace std;

int main()
{
    int key[] = {19, 25, 8, 11};
    // int key[] = {7, 3, 2, 5};
    int a, b;
    for (int i = 7; i < 23; i++)
    {
        cin >> a >> b;

        int ans1 = (key[0] * a) + (key[1] * b);
        int ans2 = key[2] * a + key[3] * b;

        int mod1 = ans1 % 26;
        int mod2 = ans2 % 26;

        // cout << ans1 % 26 << endl;
        // cout << ans2 % 26 << endl;

        cout << ans1 << "\t" << mod1 << "\t" << char(mod1 + 65) << endl;
        cout << ans2 << "\t" << mod2 << "\t" << char(mod2 + 65) << endl
             << endl;
    }
}