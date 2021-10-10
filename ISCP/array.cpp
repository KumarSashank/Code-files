#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    char a[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> a[i];
    }
    int temp = 0, j, i;
    temp = a[k];
    int ans[n];
    for (int i = k - 1, j = 0; i < n; i++, j++)
    {
        /* code */
        ans[j] = a[i];
    }
    i = 0;
    while ((j <= n) && (i < k))
    {
        ans[j] = a[i];
        j++;
        i++;
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << ans[i] << " ";
    }
}