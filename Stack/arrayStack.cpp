
#include <bits/stdc++.h>

using namespace std;

#define CAPACITY 1000

class Stack
{
    int topInd; // points to the top of the stack

public:
    int a[CAPACITY]; // Maximum size of the Stack

    Stack() { topInd = -1; }
    bool push(int x);
    int pop();
    int top();
    bool isEmpty();
    int getSize()
    {
        return topInd + 1;
    }
};

bool Stack::push(int x)
{
    if (topInd >= (CAPACITY - 1))
    {
        cout << "Stack Overflow";
        return false;
    }
    else
    {
        a[++topInd] = x;

        cout << x << "was pushed into stack\n";
        return true;
    }
}

int Stack::pop()
{
    if (topInd < 0)
    {
        cout << "Stack Underflow";
        return -1;
    }
    else
    {
        int x = a[topInd--];
        return x;
    }
}
int Stack::top()
{
    if (topInd < 0)
    {
        cout << "Stack is Empty";
        return -1;
    }
    else
    {
        int x = a[topInd];
        return x;
    }
}

bool Stack::isEmpty()
{
    return (topInd < 0);
}

int main()
{
    Stack s;
    s.push(11);

    s.push(22);
    s.push(33);

    cout << "Top element is : " << s.top() << endl; // 11 22 33
    cout << s.pop() << " Popped from stack\n";
    cout << "Top element is : " << s.top() << endl; // 11 22

    cout << "Elements present in stack : ";
    while (!s.isEmpty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
