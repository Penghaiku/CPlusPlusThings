#include <iostream>
using namespace std;

template <typename T>
T add(T t1, T t2)
{
	return t1 + t2;
}
template int add<int>(int t1, int t2); //��ʽʵ����Ϊint���ͣ�ע�⡰ʵ�������������
//����������ʡ�Բ�д

int main()
{
	cout << add<int>(10, 'B') << endl; //����ģ����ã�<>��ʽָ��Ҫʵ����������
	cout << add(1.2, 3.4) << endl;
	system("pause");
	return 0;
}