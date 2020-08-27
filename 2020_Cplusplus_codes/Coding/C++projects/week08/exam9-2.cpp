#include <iostream>
#include <cmath>
#include <cassert>
using namespace std;
int main()
{
    double a, b, c, d;                     //定义3个整型变量
    cout << "Please input three numbers:"; //输入提示
    cin >> a >> b >> c;                    //输入3个整数

    cout << "Maybe exception code:" << endl; //提示可能出现异常的代码
    assert((a + b > c) && (b + c > a) && (c + a > b));

    cout << "三角形的面积为 "
         << "  "
         << sqrt((1 / 16) * (a + b + c) * (a + b - c) * (a + c - b) * (b + c - a))
         << endl;

    system("pause");
    return 0;
}