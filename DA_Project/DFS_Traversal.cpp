#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int V;
    vector<int> *adj;

public:
    Graph(int v);
    void addedge(int src, int dest);
    void DFS(int search, int n);
};
Graph::Graph(int v)
{
    V = v;
    adj = new vector<int>[V];
}
void Graph::addedge(int src, int dest)
{
    adj[src].push_back(dest);
}
void Graph::DFS(int search, int n)
{
    int y = 0;
    bool visited[V];
    for (int i = 0; i < V; i++)
    {
        visited[i] = false;
    }

    stack<int> stack;

    stack.push(search);
    vector<int>::iterator i;

    while (!stack.empty())
    {
        int s = stack.top();
        stack.pop();
        if (!visited[s])
        {
            cout << s << " ";
            visited[s] = true;
            y++;
        }
        for (i = adj[s].begin(); i != adj[s].end(); ++i)
            if (!visited[*i])
                stack.push(*i);
    }
    cout << endl;
    if (y == n)
        cout << "The graph is connected" << endl;
    else
        cout << "The graph is not connected" << endl;
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
    graph.DFS(start, n);
}