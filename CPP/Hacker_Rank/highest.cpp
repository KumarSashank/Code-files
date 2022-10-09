#include <iostream>
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
    for (int i = 0; i < 3; i++)
    {
        int maxI = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[maxI])
            {
                maxI = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[maxI];
        arr[maxI] = temp;
    }
    long long int ans = arr[0] * arr[1] * arr[2];
    cout << ans << endl;
}