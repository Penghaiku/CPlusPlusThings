#include <iostream>
using namespace std;
class Point //定义基类P0int类
{
public:
    Point(double a, double b) : x(a), y(b) //Point类构造函数
    {
    }
    ~Point()
    {
        cout << "executing Point destructor" << endl;
    }

private:
    double x;
    double y;
};

class Circle : public Point // 定义派生类circ1e类
{
public:
    // int radius;
    Circle(int a, int b, int n_radius) : Point(a, b), radius(n_radius)
    {
    }
    ~Circle()
    {
        cout << "executing Circle destructor" << endl;
    }

private:
    int radius;
};
int main()
{
    Point *p = new Circle(1, 2, 3); //用new开辟动态存储空间
    delete p;
    return 0;
}
