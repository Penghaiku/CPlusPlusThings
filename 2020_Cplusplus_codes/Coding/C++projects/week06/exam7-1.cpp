#include <iostream>
using namespace std;
//定义一个函数模板，用于实现求两个数的最大值
template <class T>
int max(const T &t1, const T &t2)
{
    return t1 > t2 ? t1 : t2;
}
//定义一个函数模板，用于实现求三个数的最大值
template <class T>
int max(const T &a, const T &b, const T &c)
{
    T max = max(a, b);
    return max(max, c);
}
int main()
{
    cout << max(1, 2) << endl;    //调用模板函数
    cout << max(1, 2, 3) << endl; //调用三个参数的函数模板
    return 0;
}
