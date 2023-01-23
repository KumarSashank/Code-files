#include <iostream>
using namespace std;

int main()
{
    int n, t;

    int add = 0;
    cin >> n >> t;
    int capacity = n;
    int a[t];
    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < t - 1; i++)
    {
        n = n - a[i];
        if (n < 5)
        {
            add += (capacity - n);
            n = capacity;
        }
    }
    cout << add;
}