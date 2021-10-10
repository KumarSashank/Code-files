#include <iostream>
#include <cmath>
//#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sum = 0;
    string number;
    cout << "Enter number: ";
    cin >> number;
    int len = number.length();
    int num[len];
    for (int i = 0; i < len; i++)
    {
        num[i] = number[i] - '0';
        sum += num[i];
    }
    cout << "The sum of digits is " << sum;
}