#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;
long int sumseries(int, int);
int main()
{
    int x, n;
    long int sum;
    cout << "1+x+x^2....+x^n" << endl;
    cout << "Enter the value of x ,n:" << endl;
    cin >> x >> n;
    time_t begin = clock();
    sum = sumseries(x, n);
    cout << "The sum of series is:" << sum << endl;
    time_t end = clock();
    cout << "The time taken is:" << (double)(end - begin) / CLOCKS_PER_SEC << endl;
}
long int sumseries(int a, int b)
{
    long int sum = 1;
    for (int i = 1; i <= b; ++i)
    {
        sum += pow(a, i);
    }
    return sum;
}