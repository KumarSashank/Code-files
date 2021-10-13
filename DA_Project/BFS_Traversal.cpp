#include <iostream>
using namespace std;

struct edge
{
    int a, b;
};
edge m[10000];

int main()
{
    int n, count = 0;
    cout << "Enter the no.of vertices :";
    cin >> n;
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
                m[count].a = i;
                m[count].b = j;
                count++;
            }
            // cout << a[i][j] << " ";
        }
    }
    cout << "The no.f edges are :" << count << endl;
    for (int i = 0; i < count; i++)
    {
        cout << i + 1 << ". SRC = " << m[i].a << " Dest = " << m[i].b << endl;
    }
}
