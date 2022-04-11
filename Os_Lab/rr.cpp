#include <stdio.h>
#include <iostream>
using namespace std;
struct node
{
    int at;
    int bt;
    int burst1;
    int tt;
    int wt;
    int name;
    int finish;
    int res;
    struct node *next;
};
struct node *head = NULL;
struct node *tail = NULL;
int empty()
{
    if (head == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void append(struct node *temp)
{
    if (head == NULL)
    {
        head = temp;
        tail = temp;
        temp->next = NULL;
    }
    else
    {
        tail->next = temp;
        tail = temp;
        tail->next = NULL;
    }
}
struct node *serve()
{
    struct node *temp;
    if (!empty())
    {
        temp = head;
        head = head->next;
        return temp;
    }
    else
    {
        temp = new (node);
        temp->name = 0;
        return temp;
    }
}
int main()
{
    int n;
    cin >> n;
    struct node *p[10];
    struct node *exe;
    int q;
    int period = 0;
    int c = 0;
    int i;
    double tolwt = 0;
    double avgwt = 0;
    double avgtt = 0;
    double avgres = 0;
    cin >> q;
    for (i = 0; i < n; i++)
    {
        p[i] = new (node);
        p[i]->tt = 0;
        p[i]->wt = 0;
        p[i]->finish = 0;
        p[i]->name = i + 1;
        p[i]->res = -1;
        p[i]->next = NULL;
    }
    for (i = 0; i < n; i++)
    {
        cin >> p[i]->at;
    }
    for (i = 0; i < n; i++)
    {
        cin >> p[i]->bt;
        p[i]->burst1 = p[i]->bt;
    }
    int t = 0;
    while (c < n)
    {
        while (t < n && p[t]->at <= period)
        {
            append(p[t]);
            t = t + 1;
        }
        exe = new (node);
        exe = serve();
        if (exe->name != 0)
        {
            if (exe->res == -1)
            {
                exe->res = period - exe->at;
            }
            if (exe->burst1 > q)
            {
                exe->burst1 = exe->burst1 - q;
                period = period + q;
                while (t < n && p[i]->at <= period)
                {
                    append(p[t]);
                    t = t + 1;
                }
                append(exe);
            }
            else
            {
                period = period + exe->burst1;
                exe->burst1 = 0;
                exe->finish = period;
                exe->tt = exe->finish - exe->at;
                exe->wt = exe->tt - exe->bt;
                c++;
                for (i = 0; i < n; i++)
                {
                    if (p[i]->name == exe->name)
                    {
                        p[i] = exe;
                    }
                }
            }
        }
        else
        {
            period = period + 1;
        }
    }
    double toltt = 0;
    double tolres = 0;
    for (i = 0; i < n; i++)
    {
        tolwt = tolwt + p[i]->wt;
        toltt = toltt + p[i]->tt;
        tolres = tolres + p[i]->res;
    }
    avgwt = tolwt / n;
    avgtt = toltt / n;
    avgres = tolres / n;
    cout << avgwt << "\n"
         << avgtt << "\n"
         << avgres;
}