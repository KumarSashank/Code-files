#include <bits/stdc++.h>
using namespace std;

int gun(int x, int y)
{
    if (y == 0)
        return 0;
    return x + gun(x, y - 1);
}

int fun(int x, int y)
{
    if (y == 0)
        return 1;
    return gun(x, fun(x, y - 1));
}

int main()
{
    cout << fun(3, 5) << endl;
    cout << 1458 / 243;
}