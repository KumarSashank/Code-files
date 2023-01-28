#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int cur_mem = m;
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    int wait = 0;
    sort(arr, arr + n);
    int prev_flag = 0;
    int mem_stack = 0;
    for (int i = 0; i < n; i++)
    {
        // if(mem_stack<=2){
        //     cur_mem -= arr[i-2];
        // }
        if (arr[i] <= cur_mem)
        {
            if (mem_stack < 2)
            {
                cur_mem -= arr[i];
                mem_stack++;
            }
            else
            {
                cur_mem -= arr[i - 2];
                cur_mem += arr[i];
            }
        }
        else
        {
            wait++;
            cur_mem = m;
            mem_stack = 0;
            cur_mem -= arr[i];
        }
    }
    wait++; // Time to watch the last video
    cout << wait + sum << endl;
}