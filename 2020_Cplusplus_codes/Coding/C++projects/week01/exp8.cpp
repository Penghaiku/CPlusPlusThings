#include <iostream>
using namespace std; //不添加一个命名空间会报错，未定义标识符cout
int main()
{ //引用
    int i = 100;
    int &r = i; //r引用i
    // r=100;
    cout << i << endl;
    //命名常量
    const double fd = 100; //添加=100
    cout << fd << endl;
    //指向常量的指针
    int a = 1, b = 2;
    int c = 3;
    //不能将“const int ”类型的值分配搭到“int类型的实体，类型要一致，所以删除const
    int *pi; //表达式必须是可修改的左值，所以删除const
    pi = &a;
    *pi = 10;
    pi = &c;
    c = 100;
    //常指针
    int *pj = &a; //pj指向a
    *pj = 200;
    pj = &b;
    //指向常量的常指针
    int *pk = &b; //pk指向b
    pk = &c;
    *pk = 300;
    cout << "a=" << a << "b=" << b << "c=" << c << endl;
    return 0;
}
