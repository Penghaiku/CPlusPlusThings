#include <iostream>
#include <fstream>
using namespace std;
class student
{
private:
    char name[20];
    float yu, shu, wai;

public:
    friend ostream &operator<<(ostream &os, const student &a);
    friend istream &operator>>(istream &is, student &a);
};
ostream &operator<<(ostream &os, const student &a)
{
    os << a.name << " " << a.yu << " " << a.shu << " " << a.wai;
    return os;
}
istream &operator>>(istream &is, student &a)
{
    is >> a.name >> a.yu >> a.shu >> a.wai;
    return is;
}
void main()
{
    student a[5];
    int i;
    //输入并写入文件
    ofstream ofs;
    ofs.open("C:\\a.txt", ios::binary);
    for (i = 0; i < 5; i++)
    {
        cin >> a[i];
        ofs.write(reinterpret_cast<char *>(&a[i]), sizeof(a[i]));
        ofs.flush();
    }
    ofs.close();
    cout << endl;
    //读取并输出
    ifstream ifs;
    student b[5];
    ifs.open("C:\\a.txt", ios::binary);
    for (i = 0; i < 5; i++)
    {
        ifs.read(reinterpret_cast<char *>(&b[i]), sizeof(b[i]));
        cout << b[i] << endl;
    }
    ifs.close();
}
