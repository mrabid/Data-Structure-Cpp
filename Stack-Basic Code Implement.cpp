#include<iostream>
#define CAPACITY 3

using namespace std;

int stack[CAPACITY];
int top = -1;

// Push Function
void push(int x)
{
    if(top < CAPACITY-1)
    {
        top = top + 1;
        stack[top] = x;
        cout<<"Added "<<x<<endl;
    }
    else
    {
        cout<<"No Space"<<endl;
    }
}

// Pop Function
int pop()
{
    if(top >= 0)
    {
        int value = stack[top];
        top = top - 1;
        return value;
    }

    cout<<"Stack Empty."<<endl;
    return -1;
}

// Peek Function
int peek()
{
    if(top >= 0)
    {
        return stack[top];
    }

    cout<<"Stack Empty."<<endl;
    return -1;
}

int main()
{
    cout<<"Stack Code Implement."<<endl;
    peek();
    push(10);
    push(20);
    push(30);
    cout<<"Pop item of stack: "<<pop()<<endl;
    push(40);
    cout<<"Top value of Stack: "<<peek()<<endl;

    return 0;
}
