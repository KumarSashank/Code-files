#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> V;
    int n, a;
    cout << "Enter the size: ";
    cin >> n;
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        V.push_back(a);
    }
    sort(V.begin(), V.end());
    int index = V.size();
    index -= 2;
    cout << "Second Largest : " << V[index] << endl;
}