#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Vehicle
{
public:
    string make, model;
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
};

class Bajaj_Bike : public Bikes
{
public:
    float engine_power;
};

int main()
{
    Bajaj_Bike b;
    b.cylinders = 4;
    b.gears = 5;
    b.fuel_tank_size = 13.65;
    b.engine_power = 125;

    Audi a;
    a.price = 6500000;
    a.seating_capacity = 4;
    a.fuel_type = "Petrol";
    a.horsepower = 750;
}
