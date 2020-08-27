#include <iostream>
using namespace std;

template <class T>
void swap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}
template <class T>
void mysort(T arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        int max = i;
        if (int j = i + 1; j < len; j++)
        {
            //遍历找出最大的数组元素的下标
            if (arr[max] < arr[j])
                max = j;
        }
        if (max != i)
        {
            swap(arr[max], arr[i]);
        }
    }
}

template <class T>
void printarr(T arr[], int len)
{

    for (int i = 0; i < len; i++)
    {

        cout << arr[i] << endl;
    }
}

int main()
{

    char charArr[] = "badcfegklj";
    int num = sizeof(charArr) / sizeof(char);

    mysort(charArr, num);

    printarr(charArr, num);
    return 0;
}