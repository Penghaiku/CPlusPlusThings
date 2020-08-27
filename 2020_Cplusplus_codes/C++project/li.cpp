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
      001, "С��", 21, 10000,
      002, "С��", 22, 11000,
      003, "С��", 20, 9000,
      004, "С��", 22, 9800,
      005, "С��", 23, 12000,
      006, "С��", 22, 11000,
      007, "С��", 20, 9000};
  fstream iofile("work.dat", ios::app | ios::in | ios::out | ios::binary);
  if (!iofile)
  {
    cerr << "�򿪴���!" << endl;
    abort();
  }
  for (int i = 0; i <= 5; i++)
    iofile.write((char *)&work[i], sizeof(work[i]));
  worker work1[5];
  cout << "��λְ����ϢΪ��" << endl;
  for (int i = 0; i < 5; i++)
  {
    iofile.seekg(i * sizeof(work[i]), ios::beg);
    iofile.read((char *)&work[i], sizeof(work)[0]);
    cout << work[i].num << " " << work[i].name << " " << work[i].age << " " << work[i].pay << endl;
  }
  cout << endl;
  cout << "�����������ѯ���޸ĵ�ְ����:" << endl;
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
  cout << "���������ѯ���޸ĵĺţ�0��ֹͣ";
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
      cout << "�޴��� " << num << endl;
    cout << "���������ѯ�ĺţ�0��ֹͣ";
    cin >> num;
  }
  iofile.close();
  return 0;
}