#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;

long int sum(int, int);

int main()
{
    long int x, n;

    cout << "Enter the x and n:";
    cin >> x >> n;
    clock_t start = clock();
    long int answer = sum(x, n);
    clock_t end = clock();
    cout << "The sum is :" << answer << endl;
    double time = (double)(end - start) / CLOCKS_PER_SEC;
    cout << "The time to compute the sum is :" << time << endl;
}

long int sum(int x, int n)
{
    long int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum = sum + pow(x, i);
    }
    return sum;
}