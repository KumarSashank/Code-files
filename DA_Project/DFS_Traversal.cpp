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
    void DFS(int search);
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
void Graph::DFS(int search)
{
    bool visited[V];
    for (int i = 0; i < V; i++)
    {
        visited[i] = false;
    }

    stack<int> stack;

    // Push the current source node.
    stack.push(search);
    vector<int>::iterator i;

    while (!stack.empty())
    {
        // Pop a vertex from stack and print it
        int s = stack.top();
        stack.pop();

        // Stack may contain same vertex twice. So
        // we need to print the popped item only
        // if it is not visited.
        if (!visited[s])
        {
            cout << s << " ";
            visited[s] = true;
        }

        // Get all adjacent vertices of the popped vertex s
        // If a adjacent has not been visited, then push it
        // to the stack.
        for (i = adj[s].begin(); i != adj[s].end(); ++i)
            if (!visited[*i])
                stack.push(*i);
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
    graph.DFS(start);
}