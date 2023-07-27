#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    int b;
    cin >> b;
    int arr1[b];
    for (int i = 0; i < b; i++)
    {
        cin >> arr1[i];
    }
    int i, j = 0;
    int ans[a + b];
    int index = 0;
    // merge the two arrays in ascending order
    while (i < a && j < b)
    {
        if (arr[i] < arr1[j])
        {
            ans[index] = arr[i];
            i++;
        }
        else
        {
            ans[index] = arr1[j];
            j++;
        }
        index++;
    }
    while (i < a)
    {
        ans[index] = arr[i];
        i++;
        index++;
    }
    while (j < b)
    {
        ans[index] = arr1[j];
        j++;
        index++;
    }

    for (int i = 0; i < (a + b); i++)
    {
        cout << ans[i] << " ";
    }
}