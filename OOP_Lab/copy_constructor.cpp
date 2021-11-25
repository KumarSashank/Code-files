#include <iostream>
using namespace std;

class car
{
    int speed;
    int gear;

public:
    car()
    {
        speed = 0;
        gear = 0;
    }
    car(int s, int g)
    {
        speed = s;
        gear = g;
    }
    car(car &c)
    {
        speed = c.speed;
        gear = c.gear;
    }
    ~car()
    {
        cout << "Destructor called" << endl;
    }
    void display()
    {
        cout << "Speed: " << speed << endl;
        cout << "Gear: " << gear << endl;
    }
};

int main()
{
    car c3;
    car c1(100, 5);
    car c2(c1);
    c1.display();
    c2.display();
    c3.display();
    return 0;
}