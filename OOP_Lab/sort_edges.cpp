#include <iostream>
using namespace std;

struct edges
{
    int first_vertice, second_vertice;
    int weight;
};

int main()
{
    int size;
    cout << "Enter the no.of edges :";
    cin >> size;
    struct edges a[size];
    int vertice1, vertice2, weight;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the 1st vertice:";
        cin >> vertice1;
        cout << "Enter the 2nd vertice:";
        cin >> vertice2;
        cout << "Enter the weight: ";
        cin >> weight;
        a[i].first_vertice = vertice1;
        a[i].second_vertice = vertice2;
        a[i].weight = weight;
    }
    struct edges temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (a[j].weight > a[j + 1].weight)
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    cout << "Sorted edges are\n";
    cout << "V1--V2 : Weight\n";
    for (int i = 0; i < size; i++)
    {
        cout << a[i].first_vertice << "--" << a[i].second_vertice << " : " << a[i].weight << endl;
    }
}