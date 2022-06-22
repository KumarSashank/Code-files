#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'maxIndex' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER steps
 *  2. INTEGER badIndex
 */

int maxIndex(int steps, int badIndex)
{
    // Write your code here
    int max_index = 0;
    int max_diff = 0;
    for (int i = 0; i < steps; i++)
    {
        if (i != badIndex)
        {
            int diff = abs(i - badIndex);
            if (diff > max_diff)
            {
                max_diff = diff;
                max_index = i;
            }
        }
    }
    return max_index;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string steps_temp;
    getline(cin, steps_temp);

    int steps = stoi(ltrim(rtrim(steps_temp)));

    string badIndex_temp;
    getline(cin, badIndex_temp);

    int badIndex = stoi(ltrim(rtrim(badIndex_temp)));

    int result = maxIndex(steps, badIndex);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}
