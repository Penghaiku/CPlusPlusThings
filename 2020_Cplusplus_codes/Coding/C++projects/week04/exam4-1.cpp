#include <iostream>
using namespace std;

class Base //定义基类Base--圆
{
public:
    double radius = 10;     //定义数据成员半径并初始化
    const double pi = 3.14; //定义一个圆周率常量 pi
};
class Ball : public Base //定义公有派生类Ball
{
public:
    void print_V()
    {
        cout << "球的体积为：" << (4 * pi / 3) * (radius * radius * radius) << endl;
    }
};
class Column : public Base //定义公有派生类Column
{
public:
    void print_V()
    {
        hight = 10;
        cout << "圆柱的体积为：" << (pi * radius * radius) * hight << endl;
    }

private:
    int hight;
};
class Cone : public Base //定义公有派生类Column
{
public:
    //定义disp_addr()成员函数，显示继承自基类的数据成员和派生类私有数据成员的地址信息
    void print_V()
    {
        hight = 10;
        cout << "圆锥的体积为：" << (pi * radius * radius) * hight / 3 << endl;
    }

private:
    int hight;
};
int main()
{
    Base circle;
    Ball ball;     //定义派生类对象 球
    Column column; //定义派生类对象 圆柱
    Cone cone;     //定义派生类对象 圆锥

    ball.print_V();
    column.print_V();
    cone.print_V();
    system("pause");
    return 0;
}
