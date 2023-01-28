// https://www.codechef.com/problems/ALPHABET

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

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
    int range1, range2;
    for (int i = 0; i < q; i++)
    {
        cin >> range1 >> range2;
        set<int> s;

        for (int j = range1; j < range2; j++)
        {
            s.insert(arr[j]);
        }
        cout << s.size() << endl;
    }
    // create a set using STL

    // print the set length
}