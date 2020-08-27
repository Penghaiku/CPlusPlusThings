#include <iostream>
#include <cmath>
using namespace std;

class Exception
{ //定义描述除零异常的类
public:
    Exception() : msg("出现错误,不符合构成三角形的条件") {} //构造函数
    const char *getmsg() { return msg; }                    //获取msg信息
private:
    const char *msg;
};

int area(double a, double b, double c)
{
    if ((a + b <= c) || (b + c <= a)| | (c + a <= b))
    {
        throw Exception(); //抛出异常类对象
    }
    cout << sqrt((a + b + c) * (a + b - c) * (a + c - b) * (b + c - a)) / 4;
    return 0;
}

int main()
{
    double a, b, c;                                //定义一个整型变量
    cout << "Please input three numbers:" << endl; //输入提示
    cin >> a >> b >> c;                            //输入一个整数
    try
    {
        cout << "Maybe exception code:" << endl; //提示可能出现异常的代码

        cout << "三角形的面积为 "
             << "  "
             << area(a, b, c) << endl;
        // }
    }
    catch (Exception divzero) //捕捉异常
    {
        cout << "exception:"
             << divzero.getmsg() << endl; //异常处理代码
    }
    system("pause");
    return 0;
}