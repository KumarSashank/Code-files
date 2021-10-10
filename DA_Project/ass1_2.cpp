#include <iostream>
#include <fstream>
using namespace std;

void Thousand(int num);
int main()
{
    int ch;
    ofstream fname;
    cin >> ch;
    switch (ch)
    {
    case 1:
        Thousand(1000);
        break;

    default:
        break;
    }
}

void Thousand(int num)
{
    int x;
    ofstream fname("Thousand.txt");
    for (int i = 0; i < num; i++)
    {
        x = rand();
        fname << x << endl;
    }
    cout << "Done!" << endl;
}