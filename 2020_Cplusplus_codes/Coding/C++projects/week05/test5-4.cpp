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
    Complex(double r)
    {
        real = r;
        imag = 0;
    }

    Complex(double r, double i)
    {
        real = r;
        imag = i;
    }
    operator double()
    {
        return real;
    }
    //重载类型转换运算符
    void display();

private:
    double real;
    double imag;
};

void Complex::display()

{
    cout << "(" << real << "," << imag << ")" << endl;
}
int main()
{
    Complex cl(1, 2), c2;
    double dl;

    dl = 0.5 + cl;

    cout << "dl = " << dl << endl;
    c2 = Complex(dl);
    cout << "c2=";
    c2.display();
    return 0;
}