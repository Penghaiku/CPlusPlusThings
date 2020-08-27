#include <iostream>
#include <string>
using namespace std;
struct Car
{
    string strname; //汽车名称
    int nseats;     //汽车座位数
};                  //分号不能丢

string strname;
int nseats;

int main()
{

    cin >> strname;
    cin >> nseats;
    // void getname(string & strname);
    // void getseats(int &nseats);
    struct Car mycar = {
        strname, nseats};
    cout << "The name of car:   " << mycar.strname << endl;
    cout << "The seats of car:   " << mycar.nseats << endl;
    return 0;
}
// void getname(string &strname)
// {
//     cin >> strname;
//     // return strname;
// }
// void getseats(int &nseats)
// {
//     cin >> nseats;
//     // return nseats;
// }
