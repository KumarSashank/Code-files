#include <iostream>
using namespace std;

int main()
{
    int n, t, temp, i;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    cin >> t;
    if (t / n > 1)
        t = t % n;
    for (int j = t; j >= 1; j--)
    {
        temp = a[n - 1];
        for (i = n - 1; i >= 1; i--)
        {
            a[i] = a[i - 1];
        }
        a[0] = temp;
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}