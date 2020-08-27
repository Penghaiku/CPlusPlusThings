#include <iostream>
using namespace std;

template <class T, int MAXSIZE>
class Stack
{
private:
    T elems[MAXSIZE];
    int top;

public:
    Stack() { top = 0; };
    void push(T e);
    T pop();
    bool empty() { return top == 0; }
    bool full() { return top == MAXSIZE; }
};

template <class T, int MAXSIZE>
void Stack<T, MAXSIZE>::push(T e)
{
    if (top == MAXSIZE)
    {
        cout << "栈已满，不能再加入元素了！";
        return;
    }
    elems[top++] = e;
}

template <class T, int MAXSIZE>
inline T Stack<T, MAXSIZE>::pop()
{
    if (top <= 0)
    {
        cout << "栈已空，不能再弹出元素了！" << endl;
        return 0;
    }
    top--;
    return elems[top];
}

int main()
{
    Stack<int, 5> iStack;
    Stack<char, 5> cStack;
    cout << "------intStack-- --\n ";
    int i;
    for (i = 1; i < 5; i++)
        iStack.push(i);
    for (i = 1; i < 5; i++)
        cout << iStack.pop() << "t";
    cout << "n\n-------charStack----\n";
    cStack.push('A');
    cStack.push('B');
    cStack.push('C');
    cStack.push('D');
    cStack.push('E');

    system("pause");
    return 0;
}