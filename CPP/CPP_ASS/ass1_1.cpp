#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;

string decimal_to_binary(int);
int sum(string);
int limit;

int main()
{
    int num;
    cout << "Enter the Number : ";
    cin >> num;
    string binary = decimal_to_binary(num);
    cout << "Total no.of 1's in odd poisition: " << sum(binary) << endl;
}

string decimal_to_binary(int num)
{
    int x, i = 0, count = 0;
    string binary;
    x = pow(2, 0);
    while (num >= x)
    {
        x = pow(2, i);
        i++;
    }
    i = i - 2;
    limit = i;
    while (num > 0 && i >= 0)
    {
        if (num >= pow(2, i))
        {
            num = num - pow(2, i);
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

int sum(string binary)
{
    int count = 0;
    for (int i = 0; i <= limit; i = i + 2)
    {
        if (binary[i] == '1')
        {
            count++;
        }
    }
    return count;
}