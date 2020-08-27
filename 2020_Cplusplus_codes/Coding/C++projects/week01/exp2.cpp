#include <iostream>
using namespace std;
void swap(int *x, int *y)
{ //通过形参中存放的指针来修改实参的值？？？
    int *temp = x;
    x = y;
    y = temp;
    // int temp=*x;
    // *x=*y;
}
int main()
{
    int a, b;
    cout << "please input two nums: " << endl;
    cin >> a >> b;
    int *p1 = &a;
    int *p2 = &b;
    swap(*p1, *p2);
    cout << "swap: " << a << " " << b << endl;
    system("pause");
    return 0;
}