#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int array[5];
    for (int i = 0; i < 5; i++)
    {
        /* code */
        cin >> array[i];
    }
    for (int i = 4; i >= 0; i--)
    {
        cout << array[i] << " ";
    }

    return 0;
}
