#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    long int ar[5], br[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> ar[i];
        br[i] = ar[i];
    }
    sort(ar, ar + 5);
    sort(br, br + 5);
    long int min = 0, max = 0;
    for (int i = 0; i < 4; i++)
    {
        min += ar[i];
    }
    for (int i = 1; i < 5; i++)
    {
        max += br[i];
    }
    cout << min << " " << max;
}