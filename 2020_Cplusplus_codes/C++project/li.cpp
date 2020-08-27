#include <iostream>
#include <fstream>
using namespace std;
struct worker
{
  int num;
  char name[20];
  int age;
  double pay;
};
int main()
{
  worker work[7] = {
      001, "小马", 21, 10000,
      002, "小明", 22, 11000,
      003, "小红", 20, 9000,
      004, "小兰", 22, 9800,
      005, "小张", 23, 12000,
      006, "小花", 22, 11000,
      007, "小刚", 20, 9000};
  fstream iofile("work.dat", ios::app | ios::in | ios::out | ios::binary);
  if (!iofile)
  {
    cerr << "打开错误!" << endl;
    abort();
  }
  for (int i = 0; i <= 5; i++)
    iofile.write((char *)&work[i], sizeof(work[i]));
  worker work1[5];
  cout << "五位职工信息为：" << endl;
  for (int i = 0; i < 5; i++)
  {
    iofile.seekg(i * sizeof(work[i]), ios::beg);
    iofile.read((char *)&work[i], sizeof(work)[0]);
    cout << work[i].num << " " << work[i].name << " " << work[i].age << " " << work[i].pay << endl;
  }
  cout << endl;
  cout << "请输入你想查询、修改的职工号:" << endl;
  for (int i = 0; i < 2; i++)
  {
    cin >> work[1].num >> work[1].name >> work[1].age >> work[1].pay;
    iofile.seekp(0, ios::end);
    iofile.write((char *)&work1, sizeof(work1));
  }
  iofile.seekg(0, ios::beg);
  for (int i = 0; i < 7; i++)
  {
    iofile.read((char *)&work[i], sizeof(work[i]));
    cout << work[i].num << " " << work[i].name << " " << work[i].age << " " << work[i].pay << endl;
  }
  bool find;
  cout << "输入你想查询、修改的号，0则停止";
  int num, m;
  cin >> num;
  while (num)
  {
    find = false;
    iofile.seekg(0, ios::beg);
    for (int i = 0; i < 7; i++)
    {
      iofile.read((char *)&work[i], sizeof(work[i]));
      if (num == work[i].num)
      {
        m = iofile.tellg();
        cout << num << " is No." << m / sizeof(work1) << endl;
        cout << work[i].num << " " << work[i].name << " " << work[i].age << " " << work[i].pay << endl;
        find = true;
        break;
      }
    }
    if (!find)
      cout << "无此人 " << num << endl;
    cout << "输入你想查询的号，0则停止";
    cin >> num;
  }
  iofile.close();
  return 0;
}