#include <iostream>
#include <string>
using namespace std;
class Date
{
public:
    Date() {}
    Date(int y, int m, int d) : m_year(y), m_month(m), m_day(d) {}
    Date(Date &con_date)
    {
        m_year = con_date.m_year;
        m_month = con_date.m_month;
        m_day = con_date.m_day;
    }
    ~Date() {}
    void show()
    {
        cout << m_year << "-" << m_month << "-" << m_day;
    }
    int getM_year()
    {
        return m_year;
    }
    void setM_year(int m_year)
    {
        this->m_year = m_year;
    }

private:
    int m_year, m_month, m_day;
};
class Student
{
public:
    Student()
    {
    }
    Student(int id, string na, string ge, Date &birth) : birthday(birth)

    {
        idnumber = id;
        name = na;
        gender = ge;
    }
    Student(int id, string na, string ge, int year, int month, int day) : birthday(year, month, day)
    {
        idnumber = id;
        name = na;
        gender = ge;
    }
    Student(Student &stu)
    {
        idnumber = stu.idnumber;
        name = stu.name;
        gender = stu.gender;
        birthday = stu.birthday;
    }
    void show()
    {
        cout << "name:" << name << endl
             << "number;" << gender << endl
             << "gender;" << gender << endl;
        cout << "birthday;";
        birthday.show();
        cout << endl;
    }
    void setName(string name) { this->name = name; }
    string getName() { return name; }
    ~Student() {}

private:
    int idnumber;
    string name;
    string gender;
    Date birthday;
};
int main()
{
    int x, y, z, i;
    string n, m;
    cout << "please input idnumber:" << endl;
    cin >> i;
    cout << "please input name:" << endl;
    cin >> n;
    cout << "please input gender:" << endl;
    cin >> m;
    cout << "please input year,month,day:" << endl;
    cin >> x >> y >> z;
    Date one(x, y, z);
    Student s1(i, n, m, one);
    cout << endl;
    s1.show();
    return 0;
}
