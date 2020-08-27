#include <iostream>
#include <cmath>

using namespace std;
const double pi = 3.14;
class point
{
    Point()
    {
        x = 0;
        y = 0;
    }
    point(double a, double b)
    {
        x = a;
        y = b;
    }

public:
    void set_area(double a, double b)
    {
        x = a;
        y = b;
    }
    double get_area()
    {
        cout << "x= " << x << " "
             << "y= " << y << endl;
        return x, y;
    }

private:
    double x,
        y;
};
class circle : public Point
{
    circle()
    {
        r = 0;
    }
    circle(double x, double y)
        : point(double x, double y)
    {
        r = sqrt(x * x + y * y);
    }

public:
    double getarea()
    {
        area = pi * r * r;
        return area;
    }

private:
    double r;
    double area;
};
int main()
{

    Circle circle(1, 1);
    circle.getarea();
    system("pause");
    return 0;
}