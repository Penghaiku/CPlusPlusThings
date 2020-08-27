#include <iostream>
#include "fstream"
using namespace std;
int main()
{
    cout << "please input 20 integer numbers： " << endl;
    int a[20];
    //ofs >> buf;
    for (int i = 0; i < 20; i++)
    {
        cin >> a[i];
    }
    //写入文件
    ofstream ofs("D:\\f1.txt", ios::out | ios_base::binary);
    if (!ofs)
    {
        //int b  [10];
        cout << "write failed !";
        //cout << "write success !";
    }
    ofs.write(reinterpret_cast<char *>(&a), 20);
    ofs.flush();
    ofs.close();
    //读取文件
    cout << "write over" << endl
         << "查看 f1.txt的内容：" << endl;

    ifstream ifs("D:\\f1.txt", ios::in | ios_base::binary);
    if (ifs)
    {
        ifs.read(reinterpret_cast<char *>(&a), 20);
        for (int i = 0; i < 20; i++)
            cout << a[i] << " ";
    }
    else
        cout << "ifs failed !" << endl;
    ifs.close();
    cout << endl;
    //写入文件
    ofstream ofs1("D:\\f2.txt", ios::out | ios_base::binary);
    ofs1.write(reinterpret_cast<char *>(&a), 10);
    if (!ofs1)
    {
        cout << "write failed !";
    }
    ifs.close();
    cout << "查看f2.txt中的内容" << endl;
    ifstream ifs1("D:\\f2.txt", ios::in | ios_base::binary);
    if (ifs1)
    {
        ifs1.read(reinterpret_cast<char *>(&a), 10);
        for (int i = 0; i < 10; i++)
            cout << a[i] << " ";
    }
    else
        cout << "ifs failed !" << endl;
    ifs.close();
    system("pause");
    return 0;
}
