#include <iostream>
#include <iomanip>
using namespace std;
int main（）
{
    for(int n = 1; n < 8; n++）
		cout << setw（20 - n） 
		<< setfill（' '）<<" " 
		<< setw（2 * n - 1） 
		<< setfill（B） << "B"<<endl;
		// 指定输出空格时的域宽和填充字符以及输出B时的域宽和填充字符
		return 0;
}