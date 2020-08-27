#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float buf[2];
    for (int i = 0; i < 2; i++)
        cin >> buf[i];

    cout << setiosflags(ios::fixed);
    cout << setprecision(2); //设置精度为4

    //默认是右对齐
    for (int i = 0; i < 2; i++)
        cout << setw(10) << buf << endl;

    system("pause");
    return 0;
}
