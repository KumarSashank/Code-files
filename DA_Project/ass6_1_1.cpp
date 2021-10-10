//#include <bits/stdc++.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

void addEdge(vector<int> adj[], int vertex, int num)
{
    adj[vertex].push_back(num);
    adj[num].push_back(vertex);
}
void printGraph(vector<int> adj[], int V)
{
    for (int v = 0; v < V; ++v)
    {
        cout << "\n Adjacency list of vertex "
             << v << "\n head ";
        for (auto x : adj[v])
            cout << "-> " << x;
        cout << endl;
    }
}

int main()
{
    int V, path_size;
    cout << "Enter the max no.of vertices: ";
    cin >> V;
    vector<int> adj[V];
    cout << "Enter the max no.of path: ";
    cin >> path_size;
    int vertex, num;
    for (int i = 0; i < path_size; i++)
    {
        cin >> vertex >> num;
        addEdge(adj, vertex, num);
    }
    printGraph(adj, V);
    return 0;
}
