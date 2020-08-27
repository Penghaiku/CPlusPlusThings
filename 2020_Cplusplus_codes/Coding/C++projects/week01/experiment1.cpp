#include <iostream>
using namespace std;
int main()
{
    int *p = new int[10]; //申请一段空间用来存储char类型，内存中没有初始值
    //指针指向了一款连续的内存空间
    cout << "Please enter ten nums:" << endl;
    for (int i = 0; i < 10; i++)
        cin >>
            p[i]; //向数组中存入元素
    int max = p[0], i;
    for (i; i < 10; i++)
    {
        if (p[i] > max)
            max = p[i];
    }
    cout << max << " " << endl;
    delete[] p; //释放数组对象
    system("pause");
    return 0;
}