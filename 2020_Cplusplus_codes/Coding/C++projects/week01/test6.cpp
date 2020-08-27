#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main()
{
    string s;
    char t;
    int i, j, n;
    cout << "Please enter string: ";
    cin >> s;
    s = s + '\0'; //s += '\0';
    for (i = 0; s[i] != '\0'; i++)
        ; //用一个for循环数一下有多少个字符，数出的个数为 i 个

    for (n = i; s[n] == s[0];)
    {
        cout << s[i];
    }
}