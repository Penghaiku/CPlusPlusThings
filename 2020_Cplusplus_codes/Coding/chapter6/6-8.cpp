#include <iostream>
#include <fstream>  //����fstreamͷ�ļ�
using namespace std;
int main()
{
	ifstream ifs;  //����������
	ifs.open("D:\\a.txt", ios::out); //�������ʽ��
	
	if (!ifs)
		cout << "open failed" << endl;
	else
		cout << "open success" << endl;
	ifs.close();
	system("pause");
	return 0;
}