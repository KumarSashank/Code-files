#include <iostream>
#include <cmath>

int chessboard[20], count;

int main()
{
    int n, i, j;
    void queen(int row, int n);
    n = 4;
    queen(1, n);
    return 0;
}

void print(int n)
{
    int i, j;
    printf("\n\nSolution %d:\n\n", ++count);

    for (i = 1; i <= n; ++i)
        printf("\t%d", i);

    for (i = 1; i <= n; ++i)
    {
        printf("\n\n%d", i);
        for (j = 1; j <= n; ++j)
        {
            if (chessboard[i] == j)
                printf("\tQ");
            else
                printf("\t-");
        }
    }
}

int place(int row, int column)
{
    int i;
    for (i = 1; i <= row - 1; ++i)
    {

        if (chessboard[i] == column)
            return 0;
        else if (abs(chessboard[i] - column) == abs(i - row))
            return 0;
    }

    return 1;
}

void queen(int row, int n)
{
    int column;
    for (column = 1; column <= n; ++column)
    {
        if (place(row, column))
        {
            chessboard[row] = column;
            if (row == n)
                print(n);
            else
                queen(row + 1, n);
        }
    }
}