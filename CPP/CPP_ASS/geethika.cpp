#include <iostream>
#include <string.h>
using namespace std;

string convert(int);

int main()
{
    int n, count = 0;
    string b;
    cin >> n;
    b = convert(n);
    for (int i = 0; i < b.length(); i += 2)
    {
        if (b[i] == '1')
            count++;
    }
    cout << count << endl;
}

string convert(int n)
{
    int a[100], count, l;
    int i = 0;
    while (n > 0)
    {
        a[i++] = n % 2;
        n = n / 2;
    }
    l = i;
    string b;
    for (int j = 0; j < l; j++)
    {
        for (i = l - 1; i >= 0; i--)
            b[j] = a[i];
    }
    return b;
}