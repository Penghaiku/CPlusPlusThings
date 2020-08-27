#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a, b, c,s,area;
	cout << "please input a,b,c:" << endl;
	cin >> a >> b >> c;
	s = (a + b + c) / 2;
	if (a + b <= c)
		cerr << "a+b<=c, error!" << endl;
	else if (a + c <= b)
		cerr << "a + c <= b, error!" << endl;
	else if (b + c <= a)
		cerr << "b + c <= a, error!" << endl;
	else
		area = sqrt(s*(s - a)*(s - b)*(s - c));
	cout << area << endl;
	system("pause");
	return 0;
}