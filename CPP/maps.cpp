#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, string> m;
    m.insert(pair<int, string>(1, "hello"));
    m.find(1)->second = "hola";
    cout << m.find(1)->second << endl;
}