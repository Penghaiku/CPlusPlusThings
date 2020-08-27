#include <iostream>
using namespace std;
class Complex
{

public:
    // 定义一个构造函数，并初始化
    Complex()
    {
        real_part = 0;
        imag_part = 0;
    }
    Complex(double r, double i)
    {
        real_part = r;
        imag_part = i;
    }
    //定义一个获取 实部的值 的函数
    double get_real_part()
    {
        return real_part;
    }
    //定义一个获取 虚部的值 的函数
    double get_imag_part()
    {
        return imag_part;
    }
    void show()
    {
        cout << real_part << " + " << imag_part << "i" << endl;
    }

private:
    double real_part;
    double imag_part;
};

//定义一个全局运算符重载
Complex operator+(Complex &c1, Complex &c2)
{
    return Complex(c1.get_real_part() + c2.get_real_part(),
                   c1.get_imag_part() + c2.get_imag_part());
}
int main()
{
    Complex c1(1, 2);
    Complex c2(3, 4);
    Complex c3;
    c3 = c1 + c2;
    cout << "c3=";
    c3.show();
    return 0;
}
