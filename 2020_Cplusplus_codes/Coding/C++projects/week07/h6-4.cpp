#include <iostream>
#include <fstream>
using namespace std;
struct staff
{
	int num;
	char name[20];
	int age;
	double pay;
};
int main()
{

	// 给五个员工 初始化
	staff sta[7] = { 101, "liping", 28, 4000, 108, "liyuan", 20, 5000, 110, "yangwei", 21, 4500,
		120, "liufang", 34, 4300, 133, "luojin", 21, 4400 }, sta1;


	// 写入文件
	fstream iofile("staff.dat", ios::app|ios::in | ios::out | ios::binary);
	if (!iofile)
	{
		cerr << "open error!" << endl;
		abort();
	}
	int i, m, num;
	cout << "five staff:" << endl;
	for (i = 0; i < 5; i++)
	{
		cout << sta[i].num << " " << sta[i].name << " " << sta[i].age << " " << sta[i].pay << endl;
		iofile.write((char*)&sta[i], sizeof(sta[i]));
	}
	cout << "please input the 2 staffs:" << endl;
	iofile.seekp(0, ios::end);//定位文件位置指针，开始输入
	for (i = 0; i < 2; i++)
	{
		cin >> sta1.num >> sta1.name >> sta1.age >> sta1.pay;
		iofile.write((char*)&sta1, sizeof(sta1));
		//所有数据都转换类型为char，强制转换
	}
    cout << "the seven data are:" << endl;
	iofile.seekg(0, ios::beg);//定义文件位置开始输出 
	for (i = 0; i < 7; i++)
	{
		iofile.read((char*)&sta[i], sizeof(sta[i]));
		cout <<  sta[i].num << " " << sta[i].name << " " << sta[i].age << " " << sta[i].pay << endl;
	}
   
	bool ser;
	cout << "input the number you want to find:enter 0 to stop" << endl;
	cin >> num;
	while (num)
	{
		
		iofile.seekg(0, ios::beg);
		for (i = 0; i < 7; i++)
		{
           iofile.read((char*)&sta[i], sizeof(sta[i]));
		   if (num == sta[i].num)
		   {
			   m = iofile.tellg();
			   cout << num << "is NO." << m / sizeof(sta[i]) << endl;
			   cout << sta[i].num << " " << sta[i].name << " " << sta[i].age << " " << sta[i].pay << endl;
			   ser = 1;
			   break;
		   }
		}
		if (!ser)
			cout << "can not find!" << endl;
			cout << "input the number you want to find:enter 0 to stop" << endl;
			cin >> num;
	}
	iofile.close();
	system("pause");
	return 0;
}