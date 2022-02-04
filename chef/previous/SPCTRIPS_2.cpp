#include <iostream>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    int count, number, snum, fnum, lnum, i;
    for (i = 0; i < testcases; i++)
    {
        count = 0;
        cin >> number;

        for (lnum = 1; lnum <= number / 2; lnum++)
        {
            for (snum = lnum; snum <= number; snum = snum + lnum)
            {
                for (fnum = lnum; fnum <= number; fnum = fnum + snum)
                {
                    if (fnum % snum == lnum)
                        count++;
                }
            }
        }

        cout << count << endl;
    }
}