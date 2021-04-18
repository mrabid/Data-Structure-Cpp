#include<iostream>
using namespace std;

struct Node

{
    int data;
    struct Node *next;
};

void add(node* &sll, int data)
{
    if(sll == NULL)
    {
        node *newNode = new node;

        newNode->data = data;
        newNode->next = sll; //i.e equal to NULL
        (sll) = newNode;
    }
    else
    {
        node *current = sll;

        while(current->next!=NULL)
        {
            current = current->next;
        }
        node *newNode = new node;

        newNode->data = data;
        newNode->next = current->next;
        current->next = newNode;
    }
}

void insert(node* &sll, int index, int data)
{
    if(index == 0)
    {
        node* newNode = new node;

        newNode->data = data;
        newNode->next = sll;
        sll = newNode;
    }
    else
    {
        node* current = sll;

        for(int i =0; i<index-1; ++i)
        {
            current = current->next;
        }
        node* newNode = new node;

        newNode->data = data;
        newNode->next = current->next;
        current->next = newNode;
    }
}

void removeElement(node* &sll, int index)
{
    if(index ==0)
    {
        node* junk = sll;
        sll = sll->next;
        delete junk;
    }
    else
    {
        node* current = sll;

        for(int i =0; i<index-1; ++i)
        {
            current = current->next;
        }
        node *junk = current->next;
        current->next = current->next->next;
        delete junk;
    }
}

void display(node *&list)
{
    node* current = list;
    while (current!= NULL)
    {
        cout<<" "<< current->data<<" ";
        current = current->next;
    }
}

int main()
{
    add();
    insert();
    removeElement();
    display();
}
