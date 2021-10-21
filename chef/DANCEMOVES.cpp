#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int arr[t][2];
    for (int i = 0; i < t; i++)
    {
        int count1 = 0, count2 = 0;
        cin >> arr[i][0] >> arr[i][1];
        if (arr[i][0] == arr[i][1])
        {
            cout << "0\n";
        }
        else if (arr[i][0] < arr[i][1])
        {
            int diff = arr[i][1] - arr[i][0];
            int quote = diff / 2;
            int remainder = diff % 2;
            if (remainder == 0)
            {
                cout << quote << endl;
            }
            else
            {
                cout << quote + 2 << endl;
            }
        }
        else
        {
            int diff = arr[i][0] - arr[i][1];
            cout << diff << endl;
        }
    }
}