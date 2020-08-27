#include <iostream>
using namespace std;
// 定义抽象基类Shape
class Shape
{
public:
    virtual double area() const = 0; // 纯虚函数
};
// 定义Circle类
class Circle : public Shape
{
public:
    Circle(double r) : radius(r) {}                                    // 构造函数
    virtual double area() const { return 3.14159 * radius * radius; }; // 定义虚函数
protected:
    double radius; //半径
};

class Rectangle : public Shape
{
public:
    Rectangle(double n_width, double n_hight) : width(n_width), hight(n_hight) {}
    virtual double area() const { return width * hight; }

protected:
    double width, hight;
};

class Triangle : public Shape
{
public:
    Triangle(double n_width, double n_hight) : width(n_width), hight(n_hight) {}
    virtual double area() const { return 0.5 * width * hight; }

protected:
    double width, hight;
};

void printArea(const Shape &s) //输出面积
{
    cout << s.area() << endl;
}

int main()
{
    Circle circle(20.5);
    cout << "圆的面积为： ";
    printArea(circle);
    Rectangle rectangle(2.4, 4.5);
    cout << "矩形的面积为： ";
    printArea(rectangle);
    Triangle triangle(2.4, 4.5);
    cout << "三角形的面积为： ";
    printArea(triangle);
    return 0;
}