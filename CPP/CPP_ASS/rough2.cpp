#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char k = (char)49;
    cout << k << endl;
    int j = '0';
    j = j + 0;
    char l = (char)j;
    cout << l << endl;
    j = j + 1;
    char m = (char)j;
    cout << m << endl;
    int a[100], count, n = 77, s;
    int i = 0;
    string b;
    cout << endl;
    while (n > 0)
    {
        a[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = 0; j < i; j++)
    {
        /* code */
        cout << a[j];
    }
    cout << endl;
    for (int j = 0; j < i; j++)
    {
        /* code 
        int q = 48;
        q = q + a[i];
        b[j] = (char)q;*/
        b[j] = (char)(a[j] + 48);
    }
    for (int j = 0; j < i; j++)
    {
        /* code */
        cout << b[j];
    }
}