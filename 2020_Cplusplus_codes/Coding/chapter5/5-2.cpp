#include <iostream>
using namespace std;

template <typename T>
T add(T t1, T t2)
{
	return t1 + t2;
}
template int add<int>(int t1, int t2); //显式实例化为int类型，注意“实例化”这个过程
//此声明可以省略不写

int main()
{
	cout << add<int>(10, 'B') << endl; //函数模板调用，<>显式指定要实例化的类型
	cout << add(1.2, 3.4) << endl;
	system("pause");
	return 0;
}
