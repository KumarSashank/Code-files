#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    int inc = 0, block = 0, dec = 0;
    int prev = arr[0];
    for (int i = 1; i < num; i++)
    {
        prev = arr[i - 1];
        if (arr[i] > prev)
        {
            if (dec == 0 && block == 0)
            {
                inc = 1;
            }
            else
            {
                cout << "no";
                return 0;
            }
        }
        else if (arr[i] == prev)
        {
            if ((inc == 1 || inc == 0) && dec == 0)
            {
                block = 1;
            }
            else
            {
                cout << "no";
                return 0;
            }
        }
        else
        {
            if ((inc == 1 || inc == 0) && block == 1)
            {
                dec = 1;
            }
            else
            {
                cout << "no";
                return 0;
            }
        }
        cout << "yes" << endl;
        return 0;
    }
}