//From Kumar Sashank😂
#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    long long int a[num], sum = 0;
    for (int i = 0; i < num; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    cout << sum << endl;
}