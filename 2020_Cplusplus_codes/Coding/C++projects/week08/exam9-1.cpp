#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a;                               //定义一个整型变量
    cout << "Please input one integer:"; //输入提示
    cin >> a;                            //输入一个整数
    try
    {
        cout << "Maybe exception code:" << endl; //提示可能出现异常的代码
        if (a < 0)                               //除数为负数则抛出异常
        {
            throw 0;
        }
        else
        {
            cout << "输入的数的平方根 "
                 << " = "
                 << sqrt(a) << endl; //输入的数大于零显示他的平方根
        }
    }
    catch (int) //捕捉参数为整型的异常
    {
        cout << "exception:div 0!" << endl; //异常处理代码
    }
    system("pause");
    return 0;
}