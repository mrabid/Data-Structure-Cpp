#include<iostream>
#include<stdalign.h>

using namespace std;

#define CAPACITY 5

int ourQueue[CAPACITY];
int front = 0, rear = -1, totalItem = 0;

bool ifFull()
{
    if(totalItem == CAPACITY)
    {
        return true;
    }
    return false;
}

bool isEmpty()
{
    if(totalItem == 0)
    {
        return true;
    }
    return false;
}

void enQueue(int item)
{
    if(ifFull())
    {
        cout<<"Sorry, the Queue is Full."<<endl;
        return;
    }
    else
    {
        rear = (rear + 1) % CAPACITY;
        ourQueue[rear] = item;
        totalItem++;
    }
}

int deQueue()
{
    if(isEmpty())
    {
        cout<<"Sorry, The Queue is Empty."<<endl;
        return -1;
    }
    else
    {
        int frontItem = ourQueue[front];
        ourQueue[front] = -1;
        front = (front + 1) % CAPACITY;
        totalItem--;
        return frontItem;
    }
}

void printQueue()
{
    int i;
    cout<<"The Queue value is: ";
    for(i=0; i<CAPACITY; i++)
    {
        cout<<ourQueue[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    cout<<"Implement our basic Queue Code."<<endl<<endl;
    enQueue(10);
    enQueue(20);
    enQueue(30);
    enQueue(40);
    enQueue(50);
    printQueue();
    cout<<"Deque is: "<<deQueue()<<endl<<endl;

    enQueue(60);
    printQueue();
    cout<<"Deque is: "<<deQueue()<<endl<<endl;

    enQueue(70);
    printQueue();
    cout<<"Deque is: "<<deQueue()<<endl<<endl;

    enQueue(80);
    printQueue();
    cout<<"Deque is: "<<deQueue()<<endl<<endl;

    enQueue(90);
    printQueue();
    cout<<"Deque is: "<<deQueue()<<endl<<endl;

    enQueue(100);
    printQueue();
    cout<<"Deque is: "<<deQueue()<<endl<<endl;

    enQueue(500);
    printQueue();
    cout<<"Deque is: "<<deQueue()<<endl<<endl;

    return 0;
}



