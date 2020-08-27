#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a, b, c, dirt;             //定义一个整型变量
    cout << "Please input  a,b,c: "; //输入提示
    cin >> a >> b >> c;
    dirt = (b * b) - 4 * a * c; //输入一个整数
    try
    {
        cout << "Maybe exception code:" << endl; //提示可能出现异常的代码
        if (dirt < 0)                            //抛出异常
        {
            throw 0;
        }
        else
        {
            cout << "一元二次方程式的两个实根为： "
                 << (-b - dirt) / a / 2
                 << " and "
                 << (-b + dirt) / a / 2;
            cout << endl;
        }
    }
    catch (float) //捕捉参数为整型的异常
    {
        cout << "exception:方程没有实根" << endl; //异常处理代码
    }
    system("pause");
    return 0;
}