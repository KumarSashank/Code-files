// INTEGER VECTOR EXAMPLE
// CPP program to illustrate
// Implementation of begin() function
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> myvector;
    for (auto i = 1; i < 6; ++i)
    {
        myvector.push_back(i);
    }
    for (auto i = myvector.begin(); i != myvector.end(); ++i)
    {
        cout << *i << endl;
    }
}
