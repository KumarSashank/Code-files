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
    if (num == 1)
    {
        cout << "yes";
        return 0;
    }
    int inc = 0, block = 0, dec = 0;
    int prev = arr[0];
    int flag = 0;
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
                // cout << "no";
                // return 0;
                flag = 1;
                break;
            }
        }
        else if (arr[i] == prev)
        {
            if (((inc == 1) || (inc == 0)) && (dec == 0))
            {
                block = 1;
                inc = 1;
            }
            else
            {
                flag = 1;
                break;
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
                flag = 1;
                break;
            }
        }
    }
    if (flag == 1 || block != 1)
    {
        cout << "no";
    }
    else
    {
        cout << "yes";
    }
    return 0;
}