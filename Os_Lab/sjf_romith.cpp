// You are using GCC
#include <iostream>
#include <stdio.h>
using namespace std;
struct sjf
{
    int at, bt, tt, wt, ct, finish;
};
int main()
{
    int n;
    cin >> n;
    struct sjf p[10];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].at;
        p[i].finish = 0;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].bt;
    }
    int count = 0, start = 0;
    while (count != n)
    {
        int maxbt = 999999;
        int in = -1;
        for (int i = 0; i < n; i++)
        {
            if (p[i].at <= start && p[i].finish == 0)
            {
                if (p[i].bt < maxbt)
                {
                    maxbt = p[i].bt;
                    in = i;
                }
                if (p[i].bt == maxbt)
                {
                    if (p[i].bt < p[in].bt)
                    {
                        maxbt = p[i].bt;
                        in = i;
                    }
                }
            }
        }
        if (in != -1)
        {
            p[in].ct = p[in].bt + start;
            p[in].tt = p[in].ct - p[in].at;
            p[in].wt = p[in].tt - p[in].bt;
            p[in].finish = 1;
            count++;
            start = p[in].ct;
        }
        else
        {
            start++;
        }
    }
    double tolwt = 0, toltt = 0;
    for (int i = 0; i < n; i++)
    {
        tolwt = tolwt + p[i].wt;
        toltt = toltt + p[i].tt;
    }
    printf("%.2f\n", tolwt / n);
    printf("%.2f", toltt / n);
}