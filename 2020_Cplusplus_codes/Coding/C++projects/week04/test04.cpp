class A
{
public:
void fl(）；
protected:
void f2(）；
private:
int i；
} ；
    das B：publicA //B为A的公用派生类
{
public:
void f3(）；
int k;
private:
int m；

class C:public B     //C为B的公用派生类
{
    public:
        void f4() ；
            Protected : int n;

    private:
        int p；
}
class D:public C       //D为C的公用派生类
{
    public:
        void f5() ；
            Protected : int q;

    private:
        int r；
}

void main()
{
        A al；    //al是基类A的对象
            B b1; //b1是派生类B的对象
        C cl；    //c1是派生类C的对象
            D d1; ////d1是派生类D的对象
}
