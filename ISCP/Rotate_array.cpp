#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t, num;
    cin >> t;
    int arr[t];
    int sub[t];
    for (int i = 0; i < t; i++)
    {
        /* code */
        cin >> arr[i];
    }
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        /* code */
        sub[i] = arr[(t - num) + i];
    }
    for (int i = num; i < t; i++)
    {
        /* code */
        sub[i] = arr[i - num];
    }

    for (int i = 0; i < t; i++)
    {
        /* code */
        cout << sub[i] << " ";
    }

    return 0;
}