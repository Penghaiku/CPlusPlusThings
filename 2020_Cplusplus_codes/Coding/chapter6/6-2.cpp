#include <iostream>
using namespace std;
int main()
{
	char p[20] = "chuan zhi bo ke";
	cout.write(p, 8).put('\n');
	cout.write(p, strlen(p)) << endl;
	system("pause");
	return 0;
}
