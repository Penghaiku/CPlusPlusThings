#include <iostream>
#include <string>
using namespace std;
class Date //定义一个Date类
{
public:
    Date(int y, int m, int d) //定义带参构造函数
    {
        year = y;
        month = m;
        day = d;
    }
    Date() //定义无参构造函数
    {
        year = 2020;
        month = 3;
        day = 25;
    }
    Date(Date &d) //拷贝函数
    {
        year = d.year;
        month = d.month;
        day = d.day;
    }
    ~Date(){};
    int Get_date() //获取日期
    {
        return year;
        return month;
        return day;
    }
    void set(int y, int m, int d) //设置日期
    {
        year = y;
        month = m;
        day = d;
    }
    void show() //用于显示日期
    {
        cout
            << year << "-" << month << "-" << day << endl;
    }

private:
    int year, month, day;
};

int main()
{
    Date date1, date2(2000, 1, 1);
    date1.show(); //未使用到拷贝构造函数
    date2.show();
    date1.set(2020, 2, 20);
    date1.show();
    system("pause");
    return 0;
}