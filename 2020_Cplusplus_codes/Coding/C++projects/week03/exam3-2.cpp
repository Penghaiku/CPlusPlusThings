#include <iostream>
#include <string>
using namespace std;
class Student;
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
    friend void Student::set_info(string iname, int inumber, string isex);
    void show() //用于显示日期
    {
        cout << ",birthday"
             << year << "-" << month << "-" << day << endl;
    }

private:
    int year, month, day;
};
class Student //定义一个学生类
{
public:
    Student(string iname, int inumber, string isex,
            int y, int m, int d) : birthday(y, m, d) //定义一个带参构造函数
    {
        name = iname;
        number = inumber;
        sex = isex;
    }
    Student() //定义一个无参构造函数
    {
        // number = 1;
        // name = "xiaoming";
        // sex = "boy";
    }
    ~Student();         //学生类析构函数
    Student(Student &s) //定义一个学生类拷贝函数
    {
        number = s.number;
        name = s.name;
        sex = s.sex;
        birthday = s.birthday;
    }
    int get_number() //获取学生信息
    {
        return number;
    }
    string get_name()
    {
        return name;
    }
    string get_sex()
    {
        return sex;
    }
    void set_info(string iname, int inumber, string isex, int y, int m, int d) //设置学生信息
    {
        number = inumber;
        name = iname;
        sex = isex;
        birthday.set(y, m, d);
    }
    void dispaly_msg() //定义一个显示学生所有信息的函数
    {
        cout << "The information of the student : "
             << "std number: " << number
             << ",std name: " << name
             << ",std sex: " << sex;
        birthday.show();
    }

private:
    int number;    //学号
    string name;   //姓名
    string sex;    //性别
    Date birthday; //Date类对象，生日☆☆☆☆☆☆☆
};

int main()
{
    // Date date(2000, 1, 1);
    // date1.show();
    // date2.show();
    // date1.set(2020, 2, 20);
    // date1.show();
    Student std("xiaohong", 2, "girl", 2000, 2, 2);

    std.dispaly_msg();

    system("pause");
    return 0;
}