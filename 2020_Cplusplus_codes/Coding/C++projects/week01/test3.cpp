#include <iostream>
using namespace std;
int main()
{
    int max(int a, int b, int c = 0); //函数声明,形参c有默认值
    int a, b, c;
    cout << "Please enter three nums" << endl;
    cin >> a >> b >> c;
    cout << "max(a,b,c)=" << max(a, b, c) << endl; //输出3个数中的最大者
    cout << "max(a,b)=" << max(a, b) << endl;      //输出2个数中的最大者
    return 0;
}
int max(int a, int b, int c) //函数定义
{
    if (b > a)
        a = b;
    if (c > a)
        a = c;
    return a;
}

// #include <iostream>
// using namespace std;
// void add(int x = 1, int y = 1, int z = 0); //带有默认参数
// int main()
// {
// char s[3];
// cin.getline(s, 3);
// int s[3];
// for (int i = 0; i < 3; i++)
// {
//     cin >> s[i];
// }
// add(s[0], s[1], s[2]); //
// return 0;
// }
// void add(int x, int y, int z)
// {
//     int m;
//     if (x < y)
//         m = y;
//     else
//         m = x;
//     if (z < m)
//         cout << m << endl;
//     else
//         cout << z << endl;
// }
// void add(int x, int y)
// {
//     int m;
//     if (x < y)
//         m = y;
//     else
//         m = x;
//     cout << m << endl;
// }