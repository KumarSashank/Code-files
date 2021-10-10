#include <iostream>
#include <cmath>
//#include<bits/stdc++.h>
using namespace std;

void great();
int a[4];
int main()
{

    cin >> a[0] >> a[1] >> a[2] >> a[3];
    great();
    cout << a[3];
}

void great()
{
    sort(a, a + 4);
}