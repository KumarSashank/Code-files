#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Vehicle
{
public:
    string make, model;

    void display()
    {
        cout << "Vehicle" << make << model << endl;
    }
};

class Car : public Vehicle
{
public:
    int price;
    int seating_capacity;
    string fuel_type;
};

class Bikes : public Vehicle
{
public:
    int cylinders;
    int gears;
    float fuel_tank_size;
};

class Audi : public Car
{
public:
    float horsepower;
    void display()
    {
        cout << "Car\n\n";
        cout << "Price: " << price << endl;
        cout << "Fuel Type: " << fuel_type << endl;
        cout << "SeatingCapacity: " << seating_capacity << endl;
        cout << "Horse Power :" << horsepower << endl;
    }
};

class Bajaj_Bike : public Bikes
{
public:
    float engine_power;
    void display()
    {
        cout << "Bike\n\n";
        cout << "No.of Cylinders :" << cylinders << endl;
        cout << "No.of gears :" << gears << endl;
        cout << "Tank size: " << fuel_tank_size << endl;
        cout << "Power: " << engine_power << endl
             << endl;
    }
};

int main()
{
    Bajaj_Bike b;
    b.cylinders = 4;
    b.gears = 5;
    b.fuel_tank_size = 13.65;
    b.engine_power = 125;
    b.display();

    Audi a;
    a.price = 6500000;
    a.seating_capacity = 4;
    a.fuel_type = "Petrol";
    a.horsepower = 750;
    a.display();
}
