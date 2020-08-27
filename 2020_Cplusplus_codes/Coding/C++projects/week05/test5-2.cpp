#include <iostream>
using namespace std;
class Complex
{
public:
    Complex()
    {
        real = 0;
        imag = 0;
    }
    Complex(double r, double i)
    {
        real = r;
        imag = i;
    }
    Complex operator+(Complex &c2);
    Complex operator+(int &i);
    //声明一个友元运算符函数
    friend Complex operator+(int &, Complex &);
    void display();

private:
    double real;
    double imag;
};
Complex Complex::operator+(Complex &c)
{
    return Complex(real + c.real, imag + c.imag);
}

Complex Complex::operator+(int &i)
{
    return Complex(real + i, imag);
}
void Complex::display()
{
    cout << real << "," << imag << " i " << endl;
}

Complex
operator+(int &i, Complex &c)
{
    return Complex(i + c.real, c.imag);
}
int main()
{
    Complex cl(1, 2), c2(3, 4), c3;
    int i = 5;
    c3 = cl + c2;
    cout << "cl + c2 =";
    c3.display();
    c3 = i + cl;
    cout << "i  + cl = ";
    c3.display();
    c3 = cl + i;
    cout << "cl + i  =";
    c3.display();
    return 0;
}