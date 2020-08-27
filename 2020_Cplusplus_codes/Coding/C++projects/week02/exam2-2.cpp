#include <iostream>
#include <string>
using namespace std;
class Circle
{
public:
    void set(double R) //定义一个求过道面积得函数
    {
        radius = R;
        Area = pi * ((radius + 3) * (radius + 3) - (radius) * (radius));
        //计算过道的面积
        Round = 2 * pi * radius;
        //计算栅栏的周长
    }
    void dispaly() //定义一个显示过道和栅栏得造价的函数
    {
        cout << "The price of Area is: " << 20 * Area << endl;
        cout << "The price of barrier is: " << 35 * Round << endl;
    }

private:
    double radius;          //游泳池半径
    double Area;            //过道面积
    double Round;           //游泳池周长
    const double pi = 3.14; //定义一个圆周率常量 pi
};
int main()
{
    Circle pool;
    double R;
    cin >> R;
    pool.set(R);    //设置半径R
    pool.dispaly(); //调用显示函数
    system("pause");
    return 0;
}
