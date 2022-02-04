#include <iostream>

using namespace std;

int diff(int, int);

int main()
{
    int n, i, j, x = 0, y = 0, z;
    cin >> n;
    int a[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
                x += a[i][j];

            if ((i + j) == (n - 1))
                y += a[i][j];
        }
    }
    z = diff(x, y);
    cout << z;
}

int diff(int x, int y)
{
    if (x > y)
        return (x - y);
    else
        return (y - x);
}