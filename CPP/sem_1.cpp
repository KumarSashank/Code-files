#include <iostream>
using namespace std;

class Account
{
public:
    int Acc_num, balance = 0, limit = 500;
    string Acc_name, joint_name;
    void open(string Acc_name, string address)
    {
        cout << "Account Opened\n";
    }
    void open(string Acc_name, string joint_name, string address)
    {
        cout << "Joint Account Opened\n";
    }
    void deposit(int amount)
    {
        balance += amount;
        cout << "Deposit Successful\n";
    }
    void withdraw(int amount)
    {
        if (balance - amount >= limit)
        {
            balance -= amount;
            cout << "Withdraw Successful\n";
        }
        else
        {
            cout << "Insufficient Balance\n";
        }
    }
};

int main()
{
    Account a;
    a.open("Sachin", "Bangalore");
    a.deposit(1000);
    a.withdraw(500);
    a.withdraw(1000);
    cout << endl;
    Account b;
    b.open("Rajesh", "Vijayawada");
    b.deposit(1500);
    b.withdraw(500);
    b.withdraw(700);
    cout << endl;
    Account c;
    c.open("Suresh", "Ramesh", "Vijayawada");
    c.deposit(2000);
    c.withdraw(500);
    c.withdraw(1200);
    cout << endl;
    Account d;
    d.open("Kumar", "Sashank", "Vijayawada");
    d.deposit(2500);
    d.withdraw(800);
    d.withdraw(1500);
    return 0;
}