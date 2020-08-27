#include <iostream>
#include <string>
using namespace std;
struct Car
{
    string strname;
    int nseats;
} c; //分号不能丢
string getname(Car c)
{
    return c.strname;
}
int getseats(Car c)
{
    return c.nseats;
}
string strname;
int nseats;
int main()
{
    cout << "请输入汽车名称：" << endl;
    cout << "请输入汽车座位数" << endl;
    // cin >> strname; //获取汽车名称
    // cin >> nseats;  //获取汽车座位数
    // struct Car c = {
    //     strname, nseats};
    Car mycar;
    cout << "The name of car:" << c.strname << endl;
    cout << "The seats of car:" << c.nseats << endl;
    return 0;
} // string getname(string strname);
// int getseats(int nseats);
// getname(strname);
// getseats(nseats);

// string getname(string strneme)
// {
//     cin >> strname;
//     return strname;
// }
// int getseats(int nseats)
// {
//     cin >> nseats;
//     return nseats;
// }
