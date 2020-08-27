#include <iostream>
#include <string>
using namespace std;
class Student //定义Student类
{
public:
    Student(int n, int s) : num(n), score(s) {}
    void dispaly()
    {
        cout << num << " " << score << endl;
    }

private:
    int num;
    int score;
};
int main()
{
    Student stud[5] = {Student(1, 100), Student(2, 90),
                       Student(3, 80), Student(4, 70), Student(5, 60)};
    Student *p = stud; //???????????
    for (int i = 0; i <= 2; i++)
    {
        p->dispaly();
        p = p + 2;
        // ???????? stud.dispaly();
    }
    system("pause");
    return 0;
}
