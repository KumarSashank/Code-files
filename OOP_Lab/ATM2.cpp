#include <iostream>
#include <string.h>
using namespace std;
typedef struct balance
{
    int avail_bal;
    balance *next;
} balance;
balance *head1 = NULL;
typedef struct pswd
{
    string pswd;
    struct pswd *next;
} password;
password *head2 = NULL;
class ATM
{
public:
    int avail_bal = 10000;
    string pswd = "passwd";
};
int main()
{
    int choice;
    ATM obj;
    string opswd;
    double amonut;
    head1 = new balance();
    head2 = new password();
    head1->avail_bal = obj.avail_bal;
    head2->pswd = obj.pswd;
    do
    {
        cout << "=============================================================" << endl;
        cout << "Welcome to MY Bank ATM" << endl;
        cout << "Your Account balance is: " << obj.avail_bal << endl;
        cout << "=============================================================" << endl;
        cout << "1. Enter the amount to withdraw\n";
        cout << "2. Change password\n";
        cout << "3. Exit" << endl;
        cout << "=============================================================" << endl;
        cout << "Enter Your Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter amount to withdraw\n";
            cin >> amonut;
            if (amonut <= obj.avail_bal)
            {
                obj.avail_bal = obj.avail_bal - amonut;
                cout << "Thank You for using My ATM, Please Collect Money" << endl;
                cout << "Your Updated balance is: " << obj.avail_bal << endl;
                balance *temp = new balance(), *t = head1;
                temp->avail_bal = amonut;
                temp->next = NULL;
                while (t->next)
                    t = t->next;
                t->next = temp;
            }
            else
            {
                cout << "No Sufficient balance is Available" << endl;
                cout << "====================================================\n";
            }
            break;

        case 2:
            cout << "Enter your old password\n";
            cin >> opswd;
            if (opswd == obj.pswd)
            {
                cout << "Enter your new password\n";
                cin >> obj.pswd;
                cout << "password Changed Successfully" << endl;
                cout << "==========================================" << endl;
                password *temp = new password(), *t = head2;
                temp->pswd = opswd;
                temp->next = NULL;
                while (t->next)
                    t = t->next;
                t->next = temp;
            }
            else
                cout << "password Cannot be changed as the old password entered is wrong.";
            cout << "====================================================\n";
            break;
        case 3:
            balance *t = head1;
            password *t1 = head2;
            cout << "WITHDRAWAL : ";
            while (t->next)
            {
                cout << t->avail_bal << " -> ";
                t = t->next;
            }
            cout << t->avail_bal << endl;
            cout << "PASSWORD CHANGE : ";
            while (t1->next)
            {
                t1 = t1->next;
                cout << t1->pswd << " -> ";
            }
            cout << t1->pswd << endl;
            cout << "Thank You, Have a great day :) ";
            exit(0);
        }
    } while (choice != 3);
}