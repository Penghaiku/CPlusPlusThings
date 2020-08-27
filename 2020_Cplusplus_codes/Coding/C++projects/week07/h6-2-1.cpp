#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float a[5];
	cout << "please input 5 values:" << endl;
	for (int i = 0; i < 5; i++)
		cin >> a[i];
	cout << setiosflags(ios::fixed) << setprecision(3);
	for (int i = 0; i < 5; i++)
		cout << setw(10) << a[i] << endl;
	system("pause");
	return 0;
}