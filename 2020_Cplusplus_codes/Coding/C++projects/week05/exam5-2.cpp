#include <iostream>
#include <string>
using namespace std;
class my
{
public:
    my() {}
    my(const char *s) { str = s; }
    my(const my &s) { str = s.str; }
    my(const string &s) { str = s; }
    my operator=(const my &s)
    {
        this->str = s.str;
        return *this;
    }
    char operator[](int index) const { return str[index]; }
    bool operator==(const my &s) { return s.str == str; }
    bool operator!=(const my &s) { return s.str != str; }
    bool operator<(const my &s) { return str < s.str; }
    bool operator>(const my &s) { return str > s.str; }
    friend my operator+(const my &a, const my &b) { return my(a.str + b.str); }
    friend ostream &operator<<(ostream &os, my &s) { return os << s.str; }
private:
    string str;
};
int main()
{
    my a = "abc", b;
    b = "def";
     cout << a + b << endl;
    cout << a[2] << endl;
    my c;
    c = a + b;
    cout << c << endl;
    return 0;
}