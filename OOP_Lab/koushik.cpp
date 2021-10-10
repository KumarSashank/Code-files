#include <iostream>
using namespace std;
#include <cmath>
#include <time.h>
long long int sum_series(int, int);
int main()
{
    int number, terms;
    cout << "Enter the number and terms respectively" << endl;
    cin >> number >> terms;
    double time;
    clock_t start = clock();
    long long int sum = sum_series(number, terms);
    clock_t end = clock();
    time = (double)(end - start) / CLOCKS_PER_SEC;
    cout << "The Sum of the Series: " << sum << endl;
    cout << "The Time Taken: " << time;
}
long long int sum_series(int number, int terms)
{
    long long int sum = 1;
    int i = 1;
    while (i <= terms)
    {
        sum = sum + pow(number, i);
        i++;
    }
    return sum;
}