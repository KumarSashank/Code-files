#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int a[100], count, l, n = 77;
    int i = 0;
    string b;
    while (n > 0)
    {
        a[i] = n % 2;
        n = n / 2;
        i++;
    }
    l = i;
    for (int i = 0; i < l; i++)
    {
        int k = '0';
        k = k + a[i];
        b[i] = (char)k;
    }
    cout << b << endl;
}
