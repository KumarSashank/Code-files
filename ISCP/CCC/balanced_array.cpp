#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'balancedSum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int balancedSum(vector<int> arr)
{
    int n = arr.size();
    int left_sum[n];
    int right_sum[n];
    fill_n(left_sum, n, 0);
    fill_n(right_sum, n, 0);
    left_sum[0] = arr[0];
    right_sum[n - 1] = arr[n - 1];

    for (int i = 1; i < n; i++)
    {
        left_sum[i] = left_sum[i - 1] + arr[i];
    }
    for (int i = n - 2; i >= 0; i--)
    {
        right_sum[i] = right_sum[i + 1] + arr[i];
    }
    for (int i = 1; i < n - 1; i++)
    {
        if (left_sum[i] == right_sum[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string arr_count_temp;
    getline(cin, arr_count_temp);

    int arr_count = stoi(ltrim(rtrim(arr_count_temp)));

    vector<int> arr(arr_count);

    for (int i = 0; i < arr_count; i++)
    {
        string arr_item_temp;
        getline(cin, arr_item_temp);

        int arr_item = stoi(ltrim(rtrim(arr_item_temp)));

        arr[i] = arr_item;
    }

    int result = balancedSum(arr);

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
