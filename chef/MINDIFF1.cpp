#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int V;
    list<int> *adj;
    list<int> *edge;

public:
    Graph(int v);
    void addedge(int src, int dest);
    void find(int search, int edges);
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
// void Graph::BFS(int search)
// {
//     bool visited[V];
//     for (int i = 0; i < V; i++)
//     {
//         visited[i] = false;
//     }
//     list<int> queue;
//     visited[search] = true;
//     queue.push_back(search);
//     while (!queue.empty())
//     {
//         search = queue.front();
//         cout << search << " ";
//         queue.pop_front();
//         list<int>::iterator i;
// for (i = adj[search].begin(); i != adj[search].end(); i++)
// {
//     if (!visited[*i])
//     {
//         visited[*i] = true;
//         queue.push_back(*i);
//     }
// }
//     }
// }
void Graph::find(int search, int edges)
{
    int arr[edges];
    // edge = new list<int>[edges];
    list<int>::iterator i;
    for (int j = 1; j <= edges; j++)
    {
        int count = 0;
        for (i = adj[j - 1].begin(); i != adj[j - 1].end(); i++)
        {
            if (j > *i)
            {
                count++;
            }
        }
        arr[j - 1] = count;
    }
    for (int i = 0; i < edges; i++)
    {
        cout << arr[i] << endl;
    }

    // for (int j = 0; j < edges; j++)
    // {

    //     for (i = edge[j].begin(); i != edge[j].end(); i++)
    //     {
    //         if ((j + 1) > *i)
    //         {
    //             count++;
    //         }
    //     }
    // }
}
int main()
{
    int n, m, x, y;
    cin >> n >> m;
    Graph graph(n);
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        graph.addedge(x, y);
    }
    graph.find(0, m);
}