#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'performOperations' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY arr
 *  2. 2D_INTEGER_ARRAY operations
 */

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int q;
    cin >> q;
    int col;
    cin >> col;
    int operations[q][2];
    for (int i = 0; i < q; i++)
    {
        cin >> operations[i][0];
        cin >> operations[i][1];
    }
    int a, b;
    for (int i = 0; i < q; i++)
    {
        a = operations[i][0];
        b = operations[i][1];
        reverse(arr + a, arr + b + 1);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
