#include <iostream>
#include <bits/stdc++.h>
const int n = 8;
using namespace std;

class Chess
{
public:
    bool isValid(int xNext, int yNext, int sol[n][n]);
    bool starttour();
    bool KnightTour(int sol[n][n], int i, int j, int step_count, int x_move[8], int y_move[8]);
};
bool Chess::starttour()
{
    int sol[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sol[i][j] = -1;
        }
    }
    int x_move[] = {2, 1, -1, -2, -2, -1, 1, 2};
    int y_move[] = {1, 2, 2, 1, -1, -2, -2, -1};
    sol[0][0] = 0;
    if (!KnightTour(sol, 0, 0, 1, x_move, y_move))
    {
        return false;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << sol[i][j] << " ";
            }
            cout << endl;
        }
    }
    return true;
};
bool Chess::KnightTour(int sol[n][n], int i, int j, int step_count, int x_move[], int y_move[])
{
    int next_i, next_j;
    if (step_count == n * n)
    {
        return true;
    }

    for (int k = 0; k < n; k++)
    {
        next_i = i + x_move[k];
        next_j = j + y_move[k];

        if (isValid(next_i, next_j, sol))
        {
            sol[next_i][next_j] = step_count;
            if (KnightTour(sol, next_i, next_j, step_count++, x_move, y_move))
            {
                return true;
            }
            else
            {
                sol[next_i][next_j] = -1;
            }
        }
    }
    return false;
};
bool Chess::isValid(int xNext, int yNext, int sol[n][n])
{
    return (xNext >= 0 && xNext < n && yNext >= 0 && yNext < n && sol[xNext][yNext] == -1);
};
int main()
{
    Chess c;
    c.starttour();
}