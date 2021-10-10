//adjacency matrix
#include <iostream>
using namespace std;

int main()
{
    int vertex, edge, a, b;
    cout << "Enter the max vertices and edges: ";
    cin >> vertex >> edge;
    int c[vertex][vertex];
    cout << "Enter the vertices and edges: " << endl;
    for (int i = 0; i < vertex; i++)
    {
        for (int j = 0; j < vertex; j++)
            c[i][j] = 0;
    }
    for (int i = 0; i < edge; i++)
    {
        cin >> a >> b;
        c[a][b] = 1;
        c[b][a] = 1;
    }
    cout << "\nThe adjacency matrix:\n\n";
    for (int i = 0; i < vertex; i++)
    {
        for (int j = 0; j < vertex; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}