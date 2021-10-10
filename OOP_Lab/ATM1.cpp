#include <iostream>
using namespace std;

class ATM
{
public:
    int balance;
    string password;
    ATM()
    {
        balance = 10000;
        password = "passwd";
    }
};

int main()
{
    int choice, num;
    ATM obj;
    string pass;
    do
    {
        cout << "====================================================\n";
        cout << "Welcome to My Bank ATM\nYour Account Balance is: " << obj.balance << endl;
        cout << "====================================================\n";
        cout << "Enter 1 to withdraw\nEnter 2 to change the password\nEnter 3 to exit\nEnter the choice : ";
        cin >> choice;
        cout << "====================================================\n";
        switch (choice)
        {
        case 1:
            cout << "Enter the amount to be withdrawn : ";
            cin >> num;
            obj.balance = obj.balance - num;
            cout << "Thank You for using My ATM, Please Collect Money\nYour Updated Balance is:" << obj.balance << endl;
            cout << "====================================================\n";
            break;
        case 2:
            cout << "Enter the old Password : ";
            cin >> pass;
            if (pass == obj.password)
            {
                cout << "Enter the new Password : ";
                cin >> obj.password;
                cout << "Password Changed Successfully\n";
                cout << "====================================================\n";
            }
            else
            {
                cout << "Password Cannot be changed as the old password entered is wrong.\n";
                cout << "====================================================\n";
            }
            break;
        case 3:
            cout << "Thank You, Have a Great Day :)";
            cout << "====================================================\n";
            exit(0);
        default:
            cout << "Select valid choice\n";
        }
    } while (choice != 3);
}