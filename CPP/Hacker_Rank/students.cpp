#include <iostream>
using namespace std;

class students
{
public:
    string fname, lname, major;
    int year;
};

class planets
{
public:
    string name;
    double gravity, distance;
};

int main()
{
    students st1, st2;
    cout << "Enter the first name and last name:";
    cin >> st1.fname >> st1.lname;
    cout << "Enter the class year:";
    cin >> st1.year;
    cout << "Enter the Major:";
    cin >> st1.major;
    cout << "Enter the first name and last name:";
    cin >> st2.fname >> st2.lname;
    cout << "Enter the class year:";
    cin >> st2.year;
    cout << "Enter the Major:";
    cin >> st2.major;
}
