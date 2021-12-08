#include <iostream>
using namespace std;
char a[10000];
int judge(int pos)
{
    if (pos >= 1 && a[pos - 1] == a[pos])
    {
        return 0;
    }
    if (pos >= 2 && a[pos - 2] == a[pos])
    {
        return 0;
    }
    return 1;
}
int main()
{
    int n, p;
    cin >> n >> p;
    string s;
    cin >> s;
    int pos = n - 1;
    while (1)
    {
        if (pos == n)
        {
            cout << s << endl;
            break;
        }
        if (pos < 0)
        {
            cout << "NO\n";
            break;
        }
        if (a[pos] - 'a' + 1 == p)
        {
            a[pos] = 'a' - 1;
            pos--;
        }
        else
        {
            int temp = (a[pos] - 'a' + 1) % p;
            a[pos] = 'a' + temp;
            if (judge(pos) == 1)
            {
                pos++;
            }
        }
    }
}