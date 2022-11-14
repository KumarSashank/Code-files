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

    long double p;
    long double q;
    cout << "Enter the value of p and q (Prime Numbers) " << endl;
    cin >> p >> q;
    long double n = p * q;
    long double track;
    long double phi = (p - 1) * (q - 1);
    long double e = 7;
    while (e < phi)
    {
        track = gcd(e, phi);
        if (track == 1)
            break;
        else
            e++;
    }
    long double d1 = 1 / e;
    long double d = fmod(d1, phi);
    long double message;
    cout << "Enter the message to be encrypted: ";
    cin >> message;
    long double c = pow(message, e);
    long double m = pow(c, d);
    c = fmod(c, n);
    m = fmod(m, n);
    cout << "Original Message = " << message << endl;
    cout << "Encrypted message = " << c << endl;
    cout << "Decrypted message = " << m << endl;
    return 0;
}