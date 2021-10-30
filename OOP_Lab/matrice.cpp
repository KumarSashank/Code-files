#include <iostream>
using namespace std;

int main()
{
    int m;
    cout << "Number of rows:";
    cin >> m;
    int n;
    cout << "Number of coloumns:";
    cin >> n;
    int A[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            A[i][j] = rand();
        }
    }
    cout << "Numbers taken.." << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << "The Odd numbers with indices:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (A[i][j] % 2 != 0)
            {
                cout << "The Number is: " << A[i][j] << " at " << i << " nd row " << j << " nd coloumn " << endl;
            }
        }
    }
}