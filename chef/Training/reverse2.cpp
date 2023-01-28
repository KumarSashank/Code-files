#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    int stack[100000];
    int top = -1;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int q, x;
    cin >> q >> x;
    int k = 0;
    int sum = 0;

    for (int i = 0; i < q; i++)
    {

        string name;
        cin >> name;
        if (sum == x)
        {

            cout << top + 1;
            return 0;
        }
        else if (name == "Harry")
        {
            top = top + 1;
            stack[top] = arr[k];
            sum = sum + arr[k];
            k++;
        }
        else
        {
            sum = sum - stack[top];
            top = top - 1;
        }
    }

    cout << top + 1;

    return 0;
}