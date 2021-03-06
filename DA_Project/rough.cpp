#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Chess
{
public:
    int isValid(int xNext, int yNext, int sol[8][8]);
    int starttour();
    int KnightTour(int sol[8][8], int i, int j, int step_count, int x_move[8], int y_move[8]);
};
int Chess::starttour()
{
    int sol[8][8];
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            sol[i][j] = -1;
        }
    }
    int x_move[] = {2, 1, -1, -2, -2, -1, 1, 2};
    int y_move[] = {1, 2, 2, 1, -1, -2, -2, -1};
    sol[0][0] = 0;
    if (!KnightTour(sol, 0, 0, 1, x_move, y_move))
    {
        return 0;
    }
    else
    {
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cout << sol[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 1;
};
int Chess::KnightTour(int sol[8][8], int i, int j, int step_count, int x_move[8], int y_move[8])
{
    int next_i, next_j;
    if (step_count == 8 * 8)
    {
        return 1;
    }

    for (int k = 0; k < 8; k++)
    {
        next_i = i + x_move[k];
        next_j = j + y_move[k];

        if (isValid(next_i, next_j, sol))
        {
            sol[next_i][next_j] = step_count;
            if (KnightTour(sol, next_i, next_j, step_count++, x_move, y_move))
            {
                return 1;
            }
            else
            {
                sol[next_i][next_j] = -1;
            }
        }
    }
    return 0;
};
int Chess::isValid(int xNext, int yNext, int sol[8][8])
{
    return (xNext >= 0 && xNext < 8 && yNext >= 0 && yNext < 8 && sol[xNext][yNext] == -1);
};
int main()
{
    Chess c;
    c.starttour();
}