#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int *p, *q;
    cin >> a >> b;
    p = &a;
    q = &b;
    int temp = *p;
    *p = *p + *q;
    *q = temp - *q;
    if (*q < 0)
    {
        *q = -(*q);
    }
    cout << a << "\n"
         << b << endl;
}