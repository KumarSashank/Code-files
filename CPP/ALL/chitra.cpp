#include <iostream>
using namespace std;
void time();
int main()
{
    char c;
    cout << "enter T Or t for time \n";
    cout << "enter q Or Q to quit\n";
    cin >> c;
    switch (c)
    {
    case ('T'):
        time();
        break;
    case ('t'):
        time();
        break;
    case ('q'):
        cout << "\n quit";
        break;
    case ('Q'):
        cout << "\n quit";
        break; // hola
        return 0;
    }
}
void time()
{
    int hours, minutes, seconds;
    string l;
    cout << "\n enter the time in hours/minutes/second/AM or PM";

    scanf("%d/%d/%d/", &hours, &minutes, &seconds);
    cin >> l;
    if ((hours >= 0 && hours < 24) && (minutes >= 0 && minutes < 60) && (seconds >= 0 && seconds < 60))
    {
        if (l == "AM" && hours < 12)
        {
            cout << "True\n";
        }
        else if (l == "PM" && hours >= 12)
        {
            cout << "True\n";
        }
        else
        {
            cout << "False\n";
        }
    }
    else
        cout << "\n FALSE  \n enter the time correctly";
}