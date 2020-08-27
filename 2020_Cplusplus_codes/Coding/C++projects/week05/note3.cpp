#include <iostream>
using namespace std;

class Person
{
    // Person(int a = 0, int b = 0) : m_a(a), m_b(b) {}
    // Person(){};

public:
    Person operator+(Person &p)
    {
        // return Person(m_a + p.m_a, m_b + p.m_b);
        Person temp;
        temp.m_a = m_a + p.m_a;
        temp.m_b = m_b + p.m_b;
        return temp;
    }
    void test();
    int m_a;
    int m_b;
    // private:
};

void test()
{
    Person p1;

    p1.m_a = 10;
    p1.m_b = 10;

    Person p2;

    p2.m_a = 10;
    p2.m_b = 10;
    Person p3;
    p3 = p1 + p2;
    cout << "p的值" << p.m_a << endl;
}
int main()
{
    void test();
    cout << "shaqingkuang " << endl;
    system("pause");
    return 0;
}
