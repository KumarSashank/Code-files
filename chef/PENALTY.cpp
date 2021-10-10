#include <iostream>
using namespace std;

int main()
{
    int test_cases, team_scores[10], team1, team2;
    cin >> test_cases;
    int answer[test_cases];
    for (int i = 0; i < test_cases; i++)
    {
        team1 = 0;
        team2 = 0;
        cin >> team_scores[0] >> team_scores[1] >> team_scores[2] >> team_scores[3] >> team_scores[4] >> team_scores[5] >> team_scores[6] >> team_scores[7] >> team_scores[8] >> team_scores[9];
        team1 = team_scores[0] + team_scores[2] + team_scores[4] + team_scores[6] + team_scores[8];
        team2 = team_scores[1] + team_scores[3] + team_scores[5] + team_scores[7] + team_scores[9];
        if (team1 > team2)
        {
            answer[i] = 1;
        }
        else if (team1 < team2)
        {
            answer[i] = 2;
        }
        else
        {
            answer[i] = 0;
        }
    }
    for (int i = 0; i < test_cases; i++)
    {
        cout << answer[i] << endl;
    }
}