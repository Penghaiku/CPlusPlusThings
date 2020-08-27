#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	for (int i = 1; i <= 8; i++)
	{
		cout << setfill(' ') << setw(9 - i) << " "
			 << setfill('B') << setw(2 * i - 1) << "B" << endl;
	}
	system("pause");
	return 0;
}