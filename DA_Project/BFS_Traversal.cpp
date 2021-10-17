#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int V;
    list<int> *adj;

public:
    Graph(int v);
    void addedge(int src, int dest);
    void BFS(int search);
};

Graph::Graph(int v)
{
    V = v;
    adj = new list<int>[V];
}
void Graph::addedge(int src, int dest)
{
    adj[src].push_back(dest);
}
void Graph::BFS(int search)
{
    bool visited[V];
    for (int i = 0; i < V; i++)
    {
        visited[i] = false;
    }
    list<int> queue;
    queue.push_back(search);
    while (!queue.empty())
    {
        search = queue.front();
        cout << search << " ";
        queue.pop_front();
        list<int>::iterator i;
        for (i = adj[search].begin(); i != adj[search].end(); i++)
        {
            if (!visited[*i])
            {
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }
}
int main()
{
    int n, start;
    cout << "Enter the no.of Vertices : ";
    cin >> n;
    Graph graph(n);
    int a[n][n];
    cout << "Enter the matrix:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
            {
                graph.addedge(i, j);
            }
        }
    }
    cout << "From where you want to start : ";
    cin >> start;
    graph.BFS(start);
}