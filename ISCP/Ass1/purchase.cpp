#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'maximumContainers' function below.
 *
 * The function accepts STRING_ARRAY scenarios as parameter.
 */

void maximumContainers(vector<string> scenarios)
{
    char n[3];
    int j = 0;
    // for (auto i = scenarios.begin(); i != scenarios.end(); i++, j++)
    // {
    //     n[j] = *i;
    // }
    // cout << n[0] << endl;
    cout << scenarios[0] << endl;
}

int main()
{
    string scenarios_count_temp;
    getline(cin, scenarios_count_temp);

    int scenarios_count = stoi(ltrim(rtrim(scenarios_count_temp)));

    vector<string> scenarios(scenarios_count);

    for (int i = 0; i < scenarios_count; i++)
    {
        string scenarios_item;
        getline(cin, scenarios_item);

        scenarios[i] = scenarios_item;
    }

    maximumContainers(scenarios);

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
