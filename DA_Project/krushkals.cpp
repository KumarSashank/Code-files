#include <iostream>
#include <cmath>
using namespace std;
struct edge
{
    int a, b, w;
};
edge ar[100];
int par[100];
bool comp(edge a, edge b)
{
    if (a.w < b.w)
        return true;
    else
        return false;
}
int find(int a)
{
    if (par[a] == -1)
        return a;
    else
        return par[a] = find(par[a]);
}
void merge(int a, int b)
{
    par[a] = b;
}
int main()
{
    int sum = 0, count = 0;
    int vertices, edges, a, b, w;
    cout << "Enter the no.of vertices :";
    cin >> vertices;
    int arr[vertices][vertices];
    for (int i = 0; i < vertices; i++)
    {
        for (int j = 0; j < vertices; j++)
        {
            arr[i][j] = -1;
        }
    }
    cout << "Enter the matrix: 0 if there is no edge\n";
    for (int i = 0; i < vertices; i++)
    {
        for (int j = 0; j < vertices; j++)
        {
            cin >> w;
            if (w)
            {
                ar[count].w = w;
                ar[count].a = i;
                ar[count].b = j;
                count++;
            }
        }
    }
    edges = count;
    for (int i = 0; i < vertices; i++)
    {
        par[i] = -1;
    }
    edge *temp = new edge();
    for (int i = 0; i < edges - 1; i++)
    {
        for (int j = i + 1; j < edges; j++)
        {
            if (ar[i].w > ar[j].w)
            {
                temp->a = ar[i].a;
                temp->b = ar[i].b;
                temp->w = ar[i].w;
                ar[i] = ar[j];
                ar[j].a = temp->a;
                ar[j].b = temp->b;
                ar[j].w = temp->w;
            }
        }
    }
    for (int i = 0; i < edges; i++)
    {
        a = find(ar[i].a);
        b = find(ar[i].b);
        if (a != b)
        {
            sum += ar[i].w;
            merge(a, b);
        }
    }
    cout << "The mst is " << sum << endl;
}