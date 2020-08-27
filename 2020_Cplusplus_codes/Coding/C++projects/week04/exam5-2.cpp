#include <iostream>
using namespace std;

class Vehicle
{
protected:
    virtual void PrintInfo() = 0;
};
class Car : public Vehicle
{
public:
    void PrintInfo()
    {
        cout << "This is a car \n";
    }
};
class Truck : public Vehicle
{
public:
    void PrintInfo()
    {
        cout << "This is a truck \n";
    }
};
class Boat : public Vehicle
{
public:
    void PrintInfo()
    {
        cout << "This is a boat \n";
    }
};
int main(int argc, char *argv[])
{
    Car car;
    Truck truck;
    Boat boat;

    car.PrintInfo();
    truck.PrintInfo();
    boat.PrintInfo();
}