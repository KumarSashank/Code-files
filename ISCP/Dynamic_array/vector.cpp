#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    vector<int> a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    // iterator
    vector<int>::iterator it;
    for (it = a.begin(); it != a.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}