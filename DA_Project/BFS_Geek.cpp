#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
    map<int, bool> visited;
    map<int, list<int> > adj;
    void addEdge(int v, int w);
    void DFS(int v);
};
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
}
void Graph::DFS(int v)
{
    visited[v] = true;
    cout << v << " ";
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFS(*i);
}

int main()
{
    int n, count = 0, start;
    cout << "Enter the no.of vertices :";
    cin >> n;
    Graph g;
    int a[n][n];
    cout << "Enter the matrix:\n";
    cout << "Enter the 1 if there is an edge, 0 if there is no edge\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
            {
                g.addEdge(i, j);
                count++;
            }
            // cout << a[i][j] << " ";
        }
    }
    // cout << "The no.f edges are :" << count << endl;
    // for (int i = 0; i < count; i++)
    // {
    //     cout << i + 1 << ". SRC = " << m[i].a << " Dest = " << m[i].b << endl;
    // }
    cout << "From where you want to start : ";
    cin >> start;
    g.DFS(start);
}
