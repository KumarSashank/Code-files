#include <iostream>
#include <math.h>
using namespace std;

int gcd(int a, int b)
{
    int t;
    while (1)
    {
        t = a % b;
        if (t == 0)
            return b;
        a = b;
        b = t;
    }
}
int main()
{
    double p;
    double q;
    cout << "Enter the value of p and q (Prime Numbers) " << endl;
    cin >> p >> q;
    double n = p * q;
    double track;
    double phi = (p - 1) * (q - 1);
    double e = 7;
    while (e < phi)
    {
        track = gcd(e, phi);
        if (track == 1)
            break;
        else
            e++;
    }
    double d1 = 1 / e;
    double d = fmod(d1, phi);

    cout << "Public Key : " << e << endl;
    cout << "Private Key " << d << endl;

    return 0;
}