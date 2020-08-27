#include <iostream>
using namespace std;
template <class T>
class Array
{
private:
    T *elem;
    int size;

public:
    Array(int a[], int s) : elem(a), size(s)
    {
    }
    T Max()
    {
        T max = elem[0];
        for (int i = 1; i < size; i++)
        {
            if (max < elem[i])
                max = elem[i];
        }
        return max;
    }
    T Sum()
    {
        T sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += elem[i];
        }
        return sum;
    }
    void Sort();
    void Display()
    {
        for (int i = 0; i < size; i++)
            cout << " " << elem[i] << " ";
        cout << endl;
    }
};
template <class T>
void Array<T>::Sort()
{
    for (int i = 0; i < size - 1; i++)
    {
        int k = i;
        for (int j = i + 1; j < size; j++)
            if (elem[k] > elem[j])
                k = j;
        if (k != i)
        {
            int tem;
            tem = elem[i];
            elem[i] = elem[k];
            elem[k] = tem;
        }
    }
}
void main()
{
    int a[] = {2, 1, 5, 4, 3, 6, 9, 8, 7, 0};
    Array<int> obj(a, 10);
    cout << "各元素的值：";
    obj.Display();
    cout << "max:" << obj.Max() << endl;
    cout << "sum:" << obj.Sum() << endl;
    obj.Sort();
    cout << "sort:";
    obj.Display();
}