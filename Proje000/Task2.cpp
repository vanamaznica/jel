#include <iostream>
using namespace std;

class Stack
{
    char* arr;
    int top;
    int size;

public:
    Stack()
    {
        size = 3;
        top = 0;
        arr = new char[size];
    }

    ~Stack()
    {
        delete[] arr;
    }

    void push(char c)
    {
        if (top == size)
            throw "Stack is full";

        arr[top] = c;
        top++;
    }

    char pop()
    {
        if (top == 0)
            throw "Stack is empty";

        top--;
        return arr[top];
    }

    char peek()
    {
        if (top == 0)
            throw "Stack is empty";

        return arr[top - 1];
    }
};

int main()
{
    Stack s;

    try
    {
        s.push('A');
        s.push('B');
        s.push('C');

        cout << "Top: " << s.peek() << endl;

        s.push('D');
    }
    catch (const char* error)
    {
        cout << error << endl;
    }
}