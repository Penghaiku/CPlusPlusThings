#include <iostream>
using namespace std;
class Time
{
public: //添加pubic访问限定符
    void set_time();
    void show_time();

private: //添加private访问限定符
    int hour;
    int minute;
    int sec;
};

void Time::set_time() //定义设置时间的函数
{
    cin >> hour;
    cin >> minute;
    cin >> sec;
}
void Time::show_time() //定义显示时间的函数
{
    cout << hour << " : " << minute << " ：" << sec << endl;
}
int main()
{
    Time t; //在主函数中定义一个 Time类对象 t；
    t.set_time();
    t.show_time();
    return 0;
}