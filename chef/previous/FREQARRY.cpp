#include <iostream>
using namespace std;

int main()
{
    long int t, num;
    cin >> t;
    long int ans[t];
    for (long int i = 0; i < t; i++)
    {
        cin >> num;
        long int a[num];
        for (long int j = 0; j < num; j++)
        {
            cin >> a[j];
        }
        for (long int k = 0; k < num; k++)
        {
            for (long int j = k + 1; j < num; j++)
            {
                if (a[k] == a[j])
                {
                    ans[i] = 1;
                    break;
                }
            }
            if (ans[i] == 1)
            {
                break;
            }
        }
    }
    for (long int i = 0; i < t; i++)
    {
        if (ans[i] == 1)
        {
            cout << "ne krasivo" << endl;
        }
        else
        {
            cout << "prekrasnyy" << endl;
        }
    }
}