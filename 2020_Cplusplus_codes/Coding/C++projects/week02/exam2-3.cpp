#include <iostream>
#include <string>
using namespace std;
class Date //定义一个Date类
{
public:
    Date() //构造函数，用于获取学生的生日信息
    {
        cout << "Please enter your birthdays: "
             << "\n";
        cin >> year >> month >> day;
    }
    void show() //用于显示学生的生日信息
    {
        cout << ",birthday: "
             << year << "-" << month << "-" << day << endl;
    }

private:
    int year;
    int month;
    int day;
};

class Student //定义一个学生类
{
public:
    void Register() //定义一个注册函数，用于输入学生的学号、姓名、性别
    {
        cout << "Please enter your number: "
             << "\n";
        cin >> number;
        cout << "Please enter your name: "
             << "\n";
        cin >> name;
        cout << "Please enter your sex: "
             << "\n";
        cin >> sex;
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
    Student std;
    std.Register();
    std.dispaly_msg();
    system("pause");
    return 0;
}
