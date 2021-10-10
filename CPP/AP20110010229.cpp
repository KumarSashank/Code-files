#include <iostream>
using namespace std;

/*From Kumar Sashank (AP20110010229)*/
int main()
{
    int hour, minute, second, count = 0, ch;
    string meridian;
    char menu;
    do
    {
        count = 0;
        cout << "Press 'T' or 't' to enter the time." << endl;
        cout << "Press 'Q' or 'q' to exit." << endl;
        cout << "Enter your choice:";
        cin >> menu;
        if (menu == 't' || menu == 'T')
        {
            ch = 1;
        }
        else if (menu == 'q' || menu == 'Q')
        {
            ch = 2;
        }
        else
        {
            ch = 3;
        }
        switch (ch)
        {
        case 1:
            cout << "Please the enter the time in this format HH/MM/SS/AM or PM" << endl;
            cout << "Enter the time:";
            scanf("%d/%d/%d/", &hour, &minute, &second);
            cin >> meridian;
            if (hour < 24 && hour >= 0)
            {
                count++;
            }
            if (minute >= 0 && minute < 60)
            {
                count++;
            }
            if (second >= 0 && second < 60)
            {
                count++;
            }
            if (meridian == "AM" && hour < 12)
            {
                count++;
            }
            else if (meridian == "PM" && hour >= 12)
            {
                count++;
            }
            if (count == 4)
            {
                cout << "True" << endl;
            }
            else
            {
                cout << "False" << endl;
            }

            break;
        case 2:
            cout << "Exited" << endl;
            exit(0);
            break;
        default:
            cout << "Please enter valid choice" << endl;
        }
    } while (ch != 2);
}