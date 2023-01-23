// Program to implement the Shift Reduce parser

#include <bits/stdc++.h>
using namespace std;

struct grammar
{
    string LHS;
    string RHS;
};

int main()
{

    int number_of_p;
    cout << "Enter in this format only  E->A E->B not in E->A | B";
    cout << "Enter the number of productions\n";
    cin >> number_of_p;
    cout << "Enter productions\n";
    vector<grammar> prod;
    for (int i = 0; i < number_of_p; ++i)
    {

        string s;
        cin >> s;
        string lhs = s.substr(0, 1);
        string rhs = s.substr(3, (int)s.size() - 1);
        // cout << rhs;
        prod.push_back({lhs, rhs});
    }

    string input_String;
    char stack[100];
    cout << "Enter the  input string\n";
    cin >> input_String;
    int idx = 0, stpos = 0;
    stack[stpos] = input_String[idx];
    idx++;
    stpos++;
    cout << "\n\n Stack\tInput\tAction";
    int r = 0;
    do
    {
        r = 1;
        while (r != 0)
        {
            cout << "\n";
            cout << "$";
            for (int i = 0; i < stpos; i++)
            {
                cout << stack[i];
            }
            cout << "\t";
            for (int i = idx; i < input_String.length(); i++)
            {
                cout << input_String[i];
            }
            cout << "$";
            if (r == 2)
            {
                cout << "\t Reduced";
            }
            else
            {
                cout << "\t Shifted";
            }
            r = 0;

            for (int k = 0; k < stpos; k++)
            {
                string temp;
                for (int l = k; l < stpos; l++)
                {
                    temp += stack[l];
                }

                for (int m = 0; m < number_of_p; m++)
                {
                    if (temp == prod[m].RHS)
                    {
                        for (int l = k; l < 10; l++)
                        {
                            stack[l] = '\0';
                            stpos--;
                        }
                        stpos = k;
                        for (int i = 0; i < prod[m].LHS.length(); i++)
                        {
                            stack[stpos] = prod[m].LHS[i];
                            stpos++;
                        }
                        r = 2;
                    }
                }
            }
        }

        stack[stpos] = input_String[idx];
        idx++;
        stpos++;

    } while (strlen(stack) != 1 && stpos != input_String.length());

    if (strlen(stack) == 1)
    {
        cout << "\n String Accepted\n";
    }
    else
    {
        cout << "\n Invalid String\n";
    }
}