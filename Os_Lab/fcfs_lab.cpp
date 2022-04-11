// You are using GCC

#include <bits/stdc++.h>
using namespace std;

struct process
{
    int pid;
    int arrival_time;
    int burst_time;
    int start_time;
    int completion_time;
    int turnaround_time;
    int waiting_time;
    int response_time;
};

bool compareArrival(process p1, process p2)
{
    return p1.arrival_time < p2.arrival_time;
}

int main()
{
    int n;
    cin >> n;

    struct process p[100];
    float avg_turnaround_time;
    float avg_waiting_time;
    float avg_response_time;
    int total_turnaround_time = 0;
    int total_waiting_time = 0;
    int total_response_time = 0;

    cout << setprecision(2) << fixed;

    for (int i = 0; i < n; i++)
    {
        cin >> p[i].arrival_time;
    }

    for (int i = 0; i < n; i++)
    {
        cin >> p[i].burst_time;
        p[i].pid = i + 1;
    }

    sort(p, p + n, compareArrival);

    for (int i = 0; i < n; i++)
    {
        p[i].start_time = (i == 0) ? p[i].arrival_time : max(p[i - 1].completion_time, p[i].arrival_time);
        p[i].completion_time = p[i].start_time + p[i].burst_time;
        p[i].turnaround_time = p[i].completion_time - p[i].arrival_time;
        p[i].waiting_time = p[i].turnaround_time - p[i].burst_time;
        p[i].response_time = p[i].start_time - p[i].arrival_time;

        total_turnaround_time += p[i].turnaround_time;
        total_waiting_time += p[i].waiting_time;
        total_response_time += p[i].response_time;
    }

    avg_turnaround_time = (float)total_turnaround_time / n;
    avg_waiting_time = (float)total_waiting_time / n;

    cout << avg_waiting_time << "\n";
    cout << avg_turnaround_time;
}