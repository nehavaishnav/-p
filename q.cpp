#include <iostream>
using namespace std;

const int Max = 100;
int stack[Max];
int top = -1;

bool isfull()
{
    if (top == Max - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
bool isempty()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(int value)
{
    if (isfull())
    {
        cout << "stack overflow" << endl;
    }
    else
    {
        top++;
        stack[top] = value;
        cout << value << " pushed onto stack." << endl;
    }
}

int pop()
{
    if (isempty())
    {
        cout << "stack underflow" << endl;
    }
    else
    {
        int value = stack[top];
        top--;
        return value;

        cout << " new stack." << endl;
    }
}
int peek(int value)
{
    if (isempty())
    {
        cout << "stack underflow" << endl;
    }
    else
    {
        return stack[top];
    }
}

void show()
{
    for (int i = 0; i <= top; i++)
    {
        cout << stack[i] << " ";
    }
}

int main()
{
    int i;
    int topvalue;
    push(10);
    push(20);

    cout << "Stack after push: ";
    show();
    cout << endl;
    pop();
    cout << "Stack after pop: ";
    show();
    cout << endl;
    topvalue = peek(top);
    cout << "Stack after peep: ";
    cout << topvalue;

    return 0;
}
