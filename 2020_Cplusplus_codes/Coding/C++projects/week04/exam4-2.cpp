#include <iostream>
#include <string>
class Time //定义一个 Time 类
{
public:
    Time(int hour, int minute, int second)
        : m_hour(hour), m_minute(minute), m_second(second)
    {
    }

    inline std::string TellTime()
    {
        return std::to_string(m_hour) + " h " +
               std::to_string(m_minute) + " m " +
               std::to_string(m_second) + " s ";
    }

protected:
    int m_hour;
    int m_minute;
    int m_second;
};

class Date //定义一个 Date 类
{
public:
    Date(int year, int month, int day)
        : m_year(year), m_month(month), m_day(day)
    {
    }

    inline std::string TellDate()
    {
        return std::to_string(m_year) + " ," +
               std::to_string(m_month) + " , " +
               std::to_string(m_day) + "  ";
    }

protected:
    int m_year;
    int m_month;
    int m_day;
};

class BirthTime : public Time, Date //公有继承 Time类和Date类
{
public:
    BirthTime(std::string name,
              int hour, int minute, int second,
              int year, int month, int day)
        : Time(hour, minute, second), Date(year, month, day)
    {
        m_name = name;
    }
    void show_BirthDay() //定义一个显示孩子出生时间的函数
    {
        std::cout << TellDate() + TellTime() << std::endl;
    }
    void show_name() //定义一个显示孩子名字的函数
    {
        std::cout << m_name;
    }

private:
    std::string m_name;
};
int main()
{
    BirthTime child("Lucy",
                    12, 45, 10,
                    2000, 4, 9);
    child.show_BirthDay(); //显示孩子的出生年月日
    child.show_name();     //显示孩子的名字
    return 0;
}