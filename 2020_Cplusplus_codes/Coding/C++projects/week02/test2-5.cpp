// 5、商店销售某一商品，商店每天公布统一的折扣（discount)。
// 同时允许销售人员在销售时灵活掌握售价（price)，
// 在此基础上，对一次购10件以上者，还可以享受9.8折优惠。
// 现已知当天3个销货员的销售情况为：
// 销货员号（num） 销货件数（quantity）  销货单价（price)
// 101                5                     23.5
// 102                12                    24.56
// 103                100                   21.5
// 请编程序，计算出当日此商品的总销售款sum以及每件商品的平均售价。要求用静态数据成员和静态成员函数。
// （提示：将折扣discount，总销售款sum和商品销售总件数n声明为静态数据成员，
// 再定义静态成员函数 average（求平均售价）和display（输出结果）。
#include <iostream>
using namespace std;
class Product
{
public:
    Product(int m, int q, float p) : num(m), quantity(q), price(p){};
    void total();
    static float average();
    static void display();

private:
    int num; // 销货员号
    int quantity;
    float price;
    static float discount;
    static float sum;
    static int n;
};
void Product::total()
{

    float rate = 1.0;
    if (quantity > 10)
        rate = 0.98 * rate;
    sum = sum + quantity * price * rate * (1 - discount);
    n = n + quantity;
}
void Product::display()
{
    cout << sum << endl;
    cout << average() << endl;
}
float Product::average()
{
    return (sum / n);
}
float Product::discount = 0.05;
float Product::sum = 0;
int Product::n = 0;
int main()
{
    Product Prod[3] = {Product(101, 5, 23.5),
                       Product(102, 12, 24.56),
                       Product(103, 100, 21.5)};
    for (int i = 0; i < 3; i++)
        Prod[i].total();
    Product::display();
    return 0;
}