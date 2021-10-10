#include <iostream>
using namespace std;

int gcd(int, int);

int main()
{
    int a, b;
    cout << "Enter 2 numbers to get GCD: ";
    cin >> a >> b;
    cout << "The GCD is " << gcd(a, b) << endl;
}

int gcd(int a, int b)
{
    int R;
    while ((a % b) > 0)
    {
        R = a % b;
        a = b;
        b = R;
    }
    return b;
}