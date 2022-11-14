#include <iostream>
#include <math.h>
using namespace std;

long long gcd(long long a, long long b)
{
    long long t;
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

    long long p;
    long long q;
    cout << "Enter the value of p and q (Prime Numbers) " << endl;
    cin >> p >> q;
    long long n = p * q;
    long long track;
    long long phi = (p - 1) * (q - 1);
    long long e = 7;
    while (e < phi)
    {
        track = gcd(e, phi);
        if (track == 1)
            break;
        else
            e++;
    }
    double d1 = 1 / e;
    long long d = fmod(d1, phi);
    long double message;
    cout << "Enter the message to be encrypted: ";
    cin >> message;
    long long c = pow(message, e);
    long long m = pow(c, d);
    c = fmod(c, n);
    m = fmod(m, n);
    cout << "Original Message = " << message << endl;
    cout << "Encrypted message = " << c << endl;
    cout << "Decrypted message = " << m << endl;
    return 0;
}