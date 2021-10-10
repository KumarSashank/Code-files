#include <iostream>
using namespace std;

int main()
{
    int Hardness, Tensile_Strength, count = 0;
    float Carbon_Content;
    cin >> Hardness >> Carbon_Content >> Tensile_Strength;
    if (Hardness > 100)
        count = count + 1;
    if (Carbon_Content < 0.8)
        count = count + 2;
    if (Tensile_Strength > 5500)
        count = count + 4;
    if (count == 1 || count == 2 || count == 4)
        count = 8;
    switch (count)
    {
    case 7:
        cout << "10" << endl;
        break;
    case 3:
        cout << "9\n";
        break;
    case 6:
        cout << "8\n";
        break;
    case 5:
        cout << "7\n";
        break;
    case 8:
        cout << "6\n";
        break;
    default:
        cout << "5" << endl;
        break;
    }
}