#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;

string decimal_to_binary(int);
int check(string, string);

int main()
{
    int num1, num2, a, b;
    string binary1, binary2;
    cout << "Enter the 1st Number : ";
    cin >> num1;
    cout << "Enter the 2nd Number : ";
    cin >> num2;
    binary1 = decimal_to_binary(num1);
    binary2 = decimal_to_binary(num2);
    cout << "The distance between the two numbers is " << check(binary1, binary2);
}

string decimal_to_binary(int num1)
{
    int x, i = 0, limit, count = 0;
    string binary;
    x = pow(2, 0);
    while (num1 >= x)
    {
        x = pow(2, i);
        i++;
    }
    i = i - 2;
    limit = i;
    while (num1 > 0 && i >= 0)
    {
        if (num1 >= pow(2, i))
        {
            num1 = num1 - pow(2, i);
            binary.append("1");
        }
        else
        {
            binary.append("0");
        }
        i--;
    }
    return binary;
}

int check(string binary1, string binary2)
{
    int x = (binary1.length() > binary2.length()) ? binary1.length() : binary2.length();
    int count = 0;
    for (int i = 0; i < x; i++)
    {
        if (binary1[i] != binary2[i])
        {
            count++;
        }
    }
    return count;
}