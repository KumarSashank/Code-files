#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long int arr[n];
    long long int sum = 0;
    const unsigned int mod = 1000000007;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = (sum + arr[i] + mod) % mod;
    }
    int q;
    cin >> q;

    for (long long int i = 0; i < q; i++)
    {
        int query;
        cin >> query;
        sum = (sum * 2) % mod;
        cout << sum << endl;
    }

    // // Sum of the array after rotation
    // for (long long int i = 0; i < q; i++)
    // {
    // }
}