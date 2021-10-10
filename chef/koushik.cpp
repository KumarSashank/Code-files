#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int B[t];
    int i, j, k, l, flag = 0;
    for (i = 0; i < t; i++)
    {
        int num;
        cin >> num;
        int A[num];
        for (j = 0; j < num; j++)
        {
            cin >> A[j];
        }
        for (k = 0; k < num; k++)
        {
            for (l = (k + 1); l < num; l++)
            {
                if (A[k] == A[l])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
                break;
        }
        if (flag == 1)
        {
            B[i] = 1;
            flag = 0;
        }
        else
        {
            B[i] = 0;
        }
    }
    for (i = 0; i < t; i++)
    {
        if (B[i] == 1)
        {
            cout << "ne krasivo" << endl;
        }
        else
        {
            cout << "prekrasnyy" << endl;
        }
    }
}