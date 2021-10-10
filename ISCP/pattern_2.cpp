#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 1; j <= i / 2; j++)
            {
                cout << "01";
            }
            cout << endl;
        }
        else
        {
            cout << "1";
            for (int j = 1; j <= i / 2; j++)
            {
                cout << "01";
            }
            cout << endl;
        }
    }

    return 0;
}
