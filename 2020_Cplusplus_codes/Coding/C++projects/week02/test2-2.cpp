#include <iostream>
using namespace std;
class Time
{
public: //添加pubic访问限定符
    void set_time()
    {
        cin >> hour;
        cin >> minute;
        cin >> sec;
    }
    void show_time()
    {
        cout << hour << " : " << minute << " ：" << sec << endl;
    }

private: //添加private访问限定符
    int hour;
    int minute;
    int sec;
};
int main()
{
    Time t;
    t.set_time();
    t.show_time();
    return 0;
}