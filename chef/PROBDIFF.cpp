#include <iostream>
using namespace std;

int main()
{
    int testcases, problems[4], count = 0;
    cin >> testcases;
    int answers[testcases];
    for (int i = 0; i < testcases; i++)
    {
        count = 0;
        cin >> problems[0] >> problems[1] >> problems[2] >> problems[3];
        if (problems[0] == problems[1])
            count++;
        if (problems[0] == problems[2])
            count++;
        if (problems[0] == problems[3])
            count++;
        if (problems[1] == problems[2] && problems[1] != problems[0])
            count++;
        if (problems[1] == problems[3] && problems[1] != problems[0])
            count++;
        if (problems[2] == problems[3] && problems[2] != problems[0] && problems[2] != problems[1])
            count++;
        if (count == 3)
            answers[i] = 0;
        if (count == 2 && ((problems[0] == problems[1] && problems[2] == problems[3]) || (problems[0] == problems[2] && problems[1] == problems[3]) || (problems[0] == problems[3] && problems[1] == problems[2])))
            answers[i] = 2;
        else if (count == 2 && (problems[0] = problems[1] || problems[1] == problems[2] || problems[2] == problems[3] || problems[3] == problems[1]))
            answers[i] = 1;
        if (count == 1)
            answers[i] = 2;
        if (count == 0)
            answers[i] = 2;
        cout << answers[i] << endl;
    }
}