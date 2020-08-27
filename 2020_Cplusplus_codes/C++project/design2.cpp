#include <iostream>
using namespace std;
class Counter
{
public:
    Counter(int);
    Counter operator++();
    Counter operator--();
    void display();

private:
    int i;
};
Counter::Counter(int a)
{
    i = a;
}
void Counter::display()
{
    cout << i;
}
Counter Counter::operator++()
{
    return Counter(++i);
}
Counter Counter::operator--()
{
    return Counter(--i);
}
int main()
{
    Counter c(2);
    cout << "c=";
    c.display();

    ++c;
    cout << endl
         << "c=";
    c.display();

    --c;
    cout << endl
         << "c=";
    c.display();
    cout << endl;
    return 0;
}