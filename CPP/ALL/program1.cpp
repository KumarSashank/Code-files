#include <iostream>
#include <cmath>
//#include<bits/stdc++.h>
using namespace std;

int main()
{
    string number;
    cout << "Enter number: ";
    cin >> number;
    int len = number.length();
    int num[len];
    for (int i = 0; i < len; i++)
    {
        num[i] = number[i] - '0';
    }
    sort(num, num + len);
    cout << "The largest difference between two digits is " << num[len - 1] - num[0];
}