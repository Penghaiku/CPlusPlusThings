#include <iostream>
using namespace std;
class Animal
{
public:
    virtual void sound()
    {
        cout << "animal speak!" << endl;
    }
};
class Cat : public Animal
{
public:
    virtual void sound()
    {
        cout << "cat speak!" << endl;
    }
};
class Leopard : public Animal
{
public:
    virtual void sound()
    {
        cout << "leopard speak!" << endl;
    }
};
int main()
{
    Animal *a;
    Cat c1;
    a = &c1;
    a->sound();
    Leopard l;
    a = &l;
    a->sound();
    return 0;
}