#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main()
{
    // char s[6];
    // cin.getline(s, 6);
    //https://blog.csdn.net/tengfei461807914/article/details/52203202
    // string a;
    // cin >> a;
    // for (int i = 100; i >= 0; i--)
    // {
    //     cout << a[i];
    // }
    // cout << endl;
    // return 0;
    string s;
    char t;
    int i, j, n;
    cout << "Please enter string: ";
    cin >> s;
    s = s + '\0'; //s += '\0';
    for (i = 0; s[i] != '\0'; i++)
        ; //用一个for循环数一下有多少个字符，数出的个数为 i 个
    for (n = i, i = 0, j = n - 1; i <= n / 2;)
    {
        t = s[i]; //首尾交换字符
        s[i] = s[j];
        s[j] = t;
        i++;
        j--;
    }

    s[n] = '\0';
    cout << s << endl;
    system("pause");
    return 0;
} //https://blog.csdn.net/navicheung/article/details/81283294