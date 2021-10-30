#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class person
{
public:
    string name;
    int age;
};
class employee : public person
{
public:
    int salary;
};
class teacher : public employee
{
public:
    int year_of_experience;
};
int main()
{
    int n;
    cout << "How many persons u want to enter : ";
    cin >> n;
    teacher *p = new teacher[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Person " << i << endl;
        cout << "Enter name : ";
        cin >> p[i].name;
        cout << "Enter age : ";
        cin >> p[i].age;
        cout << "Enter salary : ";
        cin >> p[i].salary;
        cout << "Enter year of experience : ";
        cin >> p[i].year_of_experience;
    }
}