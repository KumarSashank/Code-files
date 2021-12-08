#include <iostream>
using namespace std;

int maxIndex(long int steps, long int badIndex)
{
    int i = 0, j = 1;
    int tempStep = steps;
    int scene1, scene2;
    while (steps--)
    {
        if (i + j != badIndex)
            i = i + j;
        j++;
    }
    scene1 = i;

    i = 0;
    tempStep = tempStep - 1;
    j = 2;
    while (tempStep--)
    {
        if (i + j != badIndex)
            i = i + j;
        j++;
    }
    scene2 = i;
    return scene1 > scene2 ? scene1 : scene2;
}

int main()
{
    long int steps, badIndex;
    cin >> steps >> badIndex;
    cout << maxIndex(steps, badIndex) << endl;
    return 0;
}