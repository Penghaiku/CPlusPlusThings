/*
*This file contains code for C++ 6th experiment
*By LZH
*/
#include <iostream>
#include <string>
using namespace std;
const double PI = 3.14;
// Definition of Shape class and related functions goes here
class Shape
{
    virtual void showData() = 0;
    virtual double reArea() = 0;
    virtual double reVolume() = 0;
};
class TwoDimShape : virtual public Shape
{
protected:
    double x, y;

public:
    virtual void showData()
    {
        return;
    }
    virtual double reArea()
    {
        return 0;
    }
    virtual double reVolume()
    {
        return 0;
    }
};
class ThreeShape : virtual public Shape
{
protected:
    double x, y, z;

public:
    virtual void showData()
    {
        return;
    }
    virtual double reArea()
    {
        return 0;
    }
    virtual double reVolume()
    {
        return 0;
    }
};
class Circle : virtual public TwoDimShape
{
public:
    Circle(double tp)
    {
        x = tp;
    }
    Circle(Circle &asp)
    {
        x = asp.x;
    }
    ~Circle()
    {
    }
    void showData()
    {
        cout << "This is a Circle:" << endl
             << "The radiation:" << x << endl
             << "The area:" << reArea() << endl;
    }
    double reArea()
    {
        return PI * x * x;
    }
};
class Elipse : virtual public TwoDimShape
{
public:
    Elipse(double ta, double tb)
    {
        x = ta, y = tb;
    }
    Elipse(Elipse &asp)
    {
        x = asp.x, y = asp.y;
    }
    ~Elipse()
    {
    }
    void showData()
    {
        cout << "This is a Elipse:" << endl
             << "The long axis:" << x << endl
             << "The short axis:" << y << endl
             << "The area:" << reArea() << endl;
    }
    double reArea()
    {
        return PI * x * y;
    }
};
class Rectangle : virtual public TwoDimShape
{
public:
    Rectangle(double ta, double tb)
    {
        x = ta, y = tb;
    }
    Rectangle(Rectangle &asp)
    {
        x = asp.x, y = asp.y;
    }
    ~Rectangle()
    {
    }
    void showData()
    {
        cout << "This is a Rectangle:" << endl
             << "The long axis:" << x << endl
             << "The short axis:" << y << endl
             << "The area:" << reArea() << endl;
    }
    double reArea()
    {
        return x * y;
    }
};
class Triangle : virtual public TwoDimShape
{
public:
    Triangle(double ta, double tb)
    {
        x = ta, y = tb;
    }
    Triangle(Triangle &asp)
    {
        x = asp.x, y = asp.y;
    }
    ~Triangle()
    {
    }
    void showData()
    {
        cout << "This is a Triangle:" << endl
             << "The base length:" << x << endl
             << "The height  :" << y << endl
             << "The area:" << reArea() << endl;
    }
    double reArea()
    {
        return x * y / 2.0;
    }
};
class Ball : virtual public ThreeShape
{
public:
    Ball(double ta)
    {
        x = ta;
    }
    Ball(Ball &asp)
    {
        x = asp.x;
    }
    ~Ball()
    {
    }
    void showData()
    {
        cout << "This is a Ball:" << endl
             << "The radiation:" << x << endl
             << "The surface area:" << reArea() << endl;
    }
    double reVolume()
    {
        return PI * x * 4.0 / 3.0;
    }
    double reArea()
    {
        return PI * x * x;
    }
};
class Cylinder : virtual public ThreeShape
{
public:
    /*
    V=PI*r*r*h S=2*PI*r+r*h
    */
    Cylinder(double ta, double tb)
    {
        x = ta, y = tb;
    }
    Cylinder(Cylinder &asp)
    {
        x = asp.x, y = asp.y;
    }
    ~Cylinder()
    {
    }
    void showData()
    {
        cout << "This is a Cylinder:" << endl
             << "The radiation:" << x << endl
             << "The height:" << y << endl
             << "The surface area:" << reArea() << endl;
    }
    double reArea()
    {
        return 2 * PI * x + x * y;
    }
    double reVolume()
    {
        return PI * x * x * y;
    }
};
//RectangularParallelepiped
class cuboid : virtual public ThreeShape
{
public:
    cuboid(double ta, double tb, double tc)
    {
        x = ta, y = tb, z = tc;
    }
    cuboid(cuboid &asp)
    {
        x = asp.x, y = asp.y, z = asp.z;
    }
    void showData()
    {
        cout << "This is a cuboid:" << endl
             << "The length:" << x << endl
             << "The width:" << y << endl
             << "The height" << z << endl
             << "The surface area:" << reArea() << endl;
    }
    double reArea()
    {
        return 2 * (x * y + x * z + y * z);
    }
    double reVolume()
    {
        return x * y * z;
    }
};
int main(void)
{
    TwoDimShape a;
    ThreeShape b;
    TwoDimShape *p = &a;
    ThreeShape *w = &b;
    Circle t1(1.0);
    Elipse t2(1.0, 2.0);
    Rectangle t3(10.0, 2.3);
    Triangle t4(4.0, 5.0);
    Ball t5(2.33333);
    Cylinder t6(4.5, 65.0);
    cuboid t7(132, 5, 156);
    p = &t1;
    p->showData();
    p = &t2;
    p->showData();
    p = &t3;
    p->showData();
    p = &t4;
    p->showData();
    w = &t5;
    w->showData();
    w = &t6;
    w->showData();
    w = &t7;
    w->showData();
    return 0;
}
