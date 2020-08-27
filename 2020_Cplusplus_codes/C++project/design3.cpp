#include <iostream>
#include <cmath>
using namespace std;
const double pi = 3.14;
class Shape
{
public:
    // 提供接口框架的纯虚函数
    virtual double getArea() = 0;
    virtual double getVolume() = 0;
    virtual double printinfo()
    {
    }
};
class Point : public Shape
{

    Point(double xx, double yy) : x(xx), y(yy) {}
    ~Point() {}

public:
    void set_x(double width)
    {
        x = width;
    }
    void set_y(double height)
    {
        y = height;
    }
    double printinfo()
    {
        cout << "x= " << x << " "
             << "y= " << y << endl;
        return x, y;
    }

private:
    double x, y;
};
class Circle : public Point
{
    Circle(double x, double y, double R) : Point(x, y), r(R)
    {
    }
    ~Circle() {}

public:
    double getArea()
    {
        s = pi * r * r;
        return s;
    }
    double printinfo()
    {
        Point::printinfo();
        cout << "r= " << r << endl;
    }

private:
    double r;
    double s;
};

class Cylinder : public Circle
{
    Cylinder(double x, double y, double R, double H) : Circle(x, y, R), h(H) {}

public:
    double getArea()
    {
        Circle::getArea();
        return 2 * s + 2 * pi * r * h;
    }
    double getVolume()
    {
        Circle::getArea();
        return s * h;
    }
    double printinfo()
    {

        cout << "Area= " << 2 * s + 2 * pi * r * h << endl;
        cout << "Volume= " << s * h << endl;
    }

private:
    double h;
    double volume;
};
void main()
{
    Cylinder c1(2, 3, 4, 5);
    Shape *s;
    s = & c1;
    (*s).printinfo();
    cout << "circle area is " << s->getArea() << endl;
    cout << "volume is " << (*s).getVolume() << endl;
    system("pause");
}