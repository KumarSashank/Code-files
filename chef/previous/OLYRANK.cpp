#include <iostream>
using namespace std;

int main()
{
    int teams[6], testcases;
    cin >> testcases;
    int answers[testcases];
    for (int i = 0; i < testcases; i++)
    {
        cin >> teams[0] >> teams[1] >> teams[2] >> teams[3] >> teams[4] >> teams[5];
        int sum = teams[0] + teams[1] + teams[2];
        int sum2 = teams[3] + teams[4] + teams[5];
        if (sum > sum2)
        {
            answers[i] = 1;
        }
        else
        {
            answers[i] = 2;
        }
    }
    for (int i = 0; i < testcases; i++)
    {
        cout << answers[i] << endl;
    }
}
