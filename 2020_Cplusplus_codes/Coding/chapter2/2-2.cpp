#include <iostream>
using namespace std;

class Car //定义类Car
{
	//成员函数
public:
	void disp_welcomemsg(); //声明disp_welcomemsg()函数
	int get_wheels();		//声明get_wheels()函数
	void set_wheels(int);	//声明set_wheels()函数
							//数据成员
private:
	int m_nWheels; //定义一个轮子变量
};
//类外定义函数
void Car::disp_welcomemsg() //类成员函数disp_welcomemsg()的实现
{
	cout << "Welcome to the car world!" << endl;
}

int Car::get_wheels() //类成员函数get_wheels()的实现，获取车轮数
{
	return m_nWheels;
}
void Car::set_wheels(int n) //类成员函数set_wheels()的实现，设置车轮数
{
	m_nWheels = n; //将输入的 参数组为轮子数，有一个赋值的操作
} //输入的数据是整型，所以在Car类中定义一个整型变量m_nWheels
int main()
{
	Car myfstcar, myseccar; //定义类对象myfstcar、myseccar

	myfstcar.set_wheels(4); //设置myfstcar的车轮数量为4
	myseccar.set_wheels(6); //设置myseccar的车轮数量为6
	//访问成员函数，显示车轮数量
	cout << "my first car wheels num = " << myfstcar.get_wheels() << endl;
	cout << "my second car wheels num = " << myseccar.get_wheels() << endl;

	system("pause");
	return 0;
}
