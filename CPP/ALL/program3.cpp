#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cout << "Enter test cases:";
    cin >> t;
    int ans[t], num[t], sum = 0, prev = 0;
    for (int i = 0; i < t; i++)
    {
        cout << "Enter the number:";
        cin >> num[i];
        for (int j = 1; j < num[i]; j++)
        {
            int power = pow(10, j);
            int prev = pow(10, j - 1);
            sum = sum + (num[j] % power - num[j] % prev);
        }
    }
}