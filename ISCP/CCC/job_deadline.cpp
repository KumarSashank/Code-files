#include <bits/stdc++.h>
using namespace std;

struct Job
{
    int deadline, profit;
} job;

bool cmp(Job a, Job b)
{
    return a.profit > b.profit;
}

int main()
{
    int n;
    cout << "Size: ";
    cin >> n;
    Job obj[n];
    int max_slot = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> obj[i].deadline >> obj[i].profit;
        max_slot = max_slot > obj[i].deadline ? max_slot : obj[i].deadline;
        // cout << obj[i].deadline << " " << obj[i].profit << endl;
    }
    sort(obj, obj + n, cmp);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << obj[i].deadline << " " << obj[i].profit << endl;
    // }
    // max_slot++;
    cout << max_slot << endl;
    int arr[max_slot];
    for (int i = 0; i < max_slot; i++)
    {
        arr[i] = -1;
    }
    int max_profit = 0;
    for (int i = 0; i < max_slot; i++)
    {
        int temp = obj[i].deadline;
        temp -= 1;
        if (arr[temp] == -1)
        {
            arr[temp] = obj[i].profit;
            max_profit += obj[i].profit;
            cout << "Job " << i + 1 << ": " << obj[i].profit << endl;
            
        }
        else
        {
            for (int j = temp; j >= 0; j--)
            {
                if (arr[j] == -1)
                {
                    arr[j] = obj[i].profit;
                    max_profit += obj[i].profit;
                    cout << "Else Job " << i + 1 << ": " << obj[i].profit << endl;
                    break;
                }
            }
        }
    }
    cout << "Max Profit is " << max_profit;
}