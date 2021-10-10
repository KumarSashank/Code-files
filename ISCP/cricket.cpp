//Program for the cricket tournament winner.

#include <iostream>
using namespace std;

void winning_team(int Team[][5], int);

int main()
{
    int n;
    cout << "Number of teams participating in the tournament: ";
    cin >> n;

    int Team[n][5], i, j;

    cout << "Individual team statistcs/performance : " << endl;
    cout << "Enter the Batting, bowling, fielding, all rounders performance, captains performance." << endl;
    for (i = 0; i < n; i++)
    {
        cout << "Team " << i + 1 << " : ";

        for (j = 0; j < 5; j++)
        {
            cin >> Team[i][j];
        }

        cout << endl;
    }

    winning_team(Team, n);

    return 0;
}

void winning_team(int Team[][5], int n)
{
    int i, j, win = 0, count;

    for (i = 1; i < n; i++)
    {
        count = 0;
        j = 0;

        while (j <= 4)
        {
            if (Team[win][j] >= Team[i][j])
            {
                count++;
            }
            j++;
        }

        if (count >= 3)
            win = win;

        else
            win = i;
    }

    cout << "The winner of the tournament is Team" << win + 1 << endl;
}