// Program to implement the 15-puzzle problem using backtracking method...

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <vector>
#include <queue>
#include <map>
#include <list>
#include <algorithm>
#include <omp.h>

using namespace std;

int nodesExplored;
int nodesGenerated;
int goal[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 0};
string optrs[] = {"UP", "DOWN", "LEFT", "RIGHT"};

int main()
{
    int initial[N][N];
    // Initial configuration
    // Value 0 is used for empty space

    cout << "Enter the initial puzzle, enter space with zero : " << endl;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> initial[i][j];
        }
    }

    int final[N][N] =
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12},
            {13, 14, 15, 0}};
}
