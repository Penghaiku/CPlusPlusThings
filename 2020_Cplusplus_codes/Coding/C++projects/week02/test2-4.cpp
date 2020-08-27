#include <iostream>
using namespace std;
class Student
{
public:
    Student(int n, float s) : num(n), score(s) {}
    void change(int n, float s)
    {
        num = n;
        score = s;
    }
    void display() const
    {
        cout << num << " " << score << endl;
    }

private:
    int num;
    float score;
};
int main()
{
    const Student stud(101, 78.5);
    // Student *const p = &stud;
    const Student *p = &stud; //取出对象的地址
    p->display();
    // stud.change(101, 80.5);
    // p->display();
    return 0;
}