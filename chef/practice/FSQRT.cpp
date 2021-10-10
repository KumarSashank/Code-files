#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int a[t];
    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
        a[i] = sqrt(a[i]);
        a[i] = round(a[i]);
    }
    for (int i = 0; i < t; i++)
    {
        cout << a[i] << endl;
    }
}