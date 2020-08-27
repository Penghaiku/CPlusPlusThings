#include <iostream>
#include <string>
using namespace std;
class Rectangle
{
public:
    void set_Area(int l, int w)
    {
        len = l;
        width = w;
        Area = len * width;
    }
    void dispaly()
    {
        cout << "The Area is: " << Area << endl;
    }

private:
    int Area;
    int len;
    int width;
};
int main()
{
    Rectangle Square;
    Square.set_Area(3, 5);
    Square.dispaly();
    system("pause");
    return 0;
}
