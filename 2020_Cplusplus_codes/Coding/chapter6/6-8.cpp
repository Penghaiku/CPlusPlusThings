#include <iostream>
#include <fstream>  //包含fstream头文件
using namespace std;
int main()
{
	ifstream ifs;  //构造输入流
	ifs.open("D:\\a.txt", ios::out); //以输出方式打开
	
	if (!ifs)
		cout << "open failed" << endl;
	else
		cout << "open success" << endl;
	ifs.close();
	system("pause");
	return 0;
}
