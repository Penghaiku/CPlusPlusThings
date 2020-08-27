#include <iostream>
using namespace std;
int main()
{
    int max(int a = 1, int b = 2, int c = 3);
    // int max(int a, int b);
    int a, b, c;
    cout << "Please enter three nums" << endl;
    cin >> a >> b >> c;
    cout << "max(a,b,c)=" << max(a, b, c) << endl;
    cout << "max(a,b)=" << max(a, b) << endl;
    return 0;
}
int max(int a, int b, int c)
{
    if (b > a)
        a = b;
    if (c > a)
        a = c;
    return a;
}
// int max(int a, int b)
// {
//     if (b > a)
//         a = b;
//     return a;
// }
