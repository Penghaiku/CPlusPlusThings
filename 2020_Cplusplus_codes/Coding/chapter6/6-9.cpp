#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	char buf[256];
	ifstream ifs("D:\\a.txt");

	cout << "a.txt 啥意思" << endl;
	while (!ifs.eof()) //�ж��ļ��Ƿ�ﵽ��β
	{
		ifs.getline(buf, 256, '\n'); //���û����getline()��Ա����
		cout << buf << endl;
	}
	ifs.close();
	
	system("pause");
	return 0;
}
