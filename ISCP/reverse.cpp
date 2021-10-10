#include <iostream>
#include <cmath>
using namespace std;

int count(int num)
{
    int t = 0;
    while (num > 0)
    {
        num = num / 10;
        t++;
    }
    return t;
}

int main()
{
    int n;
    cin >> n;
    int power = pow(10, count(n) - 1);
    int first = n / power;
    first = first * power;
    int last = n % 10;
    n = n - first - last;
    first = first / power;
    last = last * power;
    n = n + first + last;
    cout << n << endl;
}