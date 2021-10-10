#include <iostream>
using namespace std;
#define N 5
#define I 10000

void dijkstra(int, int, int);

int main()
{
    int a[N][N];
    int v, s;
    cout << "Enter no of vertices: ";
    cin >> v;
    cout << "Enter data: " << endl;
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
            cin >> a[i][j];
    }
    cout << "Enter stating node: ";
    cin >> s;
    dijkstra(a, v, s);
}

void dijkstra(int a[N][N], int v, int s)
{
    int c[N][N], d[N], vis[N], pred[N], i, j, count, mid = I, next;
    for (i = 0; i < v; i++)
    {
        for (j = 0; j < v; j++)
        {
            if (a[i][j] == 0)
                c[i][j] = I;
            else
                c[i][j] = a[i][j];
        }
    }
    for (i = 0; i < v; i++)
    {
        d[i] = c[s][i];
        pred[i] = s;
        vis[i] = 0;
    }
    d[s] = 0;
    vis[s] = 1;
    count = 1;
    while (count < v - 1)
    {
        for (i = 0; i < v - 1; i++)
        {
            if (d[i] < mid && !vis[i])
            {
                mid = d[i];
                next = i;
            }
        }
        vis[next] = 1;
        for (i = 0; i < v; i++)
        {
            if (!vis[i])
            {
                if (mid + c[next][i] < d[i])
                {
                    d[i] = mid + c[next][i];
                    pred[i] = next;
                }
            }
        }
        count++;
    }
    for (i = 0; i < v; i++)
    {
        if (i != s)
        {
            cout << "Distance of node: " << i << " is " << d[i] << endl;
            cout << "path: " << i;
            j = i;
            do
            {
                j = pred[j];
                cout << "<-" << j << " ";
            } while (j != s);
        }
        cout << endl;
    }
}