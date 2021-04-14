//Doubly linked list
#include <iostream>
using namespace std;
struct node
{
    int data;
    node* next;
    node* prev;
};

void addValue(node*& a, int data)
{
    if (a == NULL)
    {
        a = new node;
        a->data = data;
        a->next = NULL;
        a->prev = NULL;
    }
    else
    {
        node* current = a;
        while (current->next != NULL)
        {
            current = current->next;
        }
        node* b = new node;
        b->data = data;
        b->next = NULL;
        b->prev = current;
        current->next = b;
    }
}

void insertValue(node*& a, int data, int index)
{
    if (index == 0)
    {
        node* b = new node;
        b->data = data;
        //dealing with null list
        //and already filled list
        //at the same time
        b->next = a;
        b->prev = NULL;
        if (a != NULL)
            a->prev = b;
        a = b;
    }
    else
    {
        node* current = a;
        for (int i = 0; i < index - 1; ++i)
        {
            current = current->next;
        }
        node* c = new node;
        c->data = data;
        c->next = current->next;
        c->prev = current;
        if (current->next != NULL)
        {
            current->next->prev = c;
        }
        current->next = c;
    }
}

void removeValue(node*& a, int value)
{
    if (a == NULL)
    {
        return;
    }
    if (a->data == value)
    {
        node* x = a;
        a = a->next;
        if (a != NULL)
        {
            a->prev = NULL;
        }
        delete x;
    }

    else
    {
        node* current = a;
        while (current->next != NULL)
        {
            if (current->next->data == value)
            {
                node* x = current->next;
                current->next = current->next->next;
                if (current->next != NULL)
                {
                    current->next->prev = current;
                }
                delete x;
            }
            else
            {
                current = current->next;
            }
        }
    }
}

void display(node* h)
{
    if (h == NULL)
    {
        cout << "Empty List" << endl;
        return;
    }
    node* current = h;
    while (current->next != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << current->data << endl;
    while (current->prev != NULL)
    {
        cout << current->data << " ";
        current = current->prev;
    }
    cout << current->data << endl;
}
int main()
{
    node* h = NULL;
    /*
    Add value at the end of the list, if the list
    is empty, then initialize it
    */
    addValue(h, 4);
    addValue(h, 34);
    addValue(h, 45);
    display(h);
    /*
    Insert value at a given index
    of the list
    */
    node* g = NULL;
    insertValue(g, 13, 0);
    insertValue(g, 4, 1);
    insertValue(g, 12, 2);
    insertValue(g, 90, 3);
    display(g);
    /*
    Remove an element from the list
    */
    removeValue(g, 13);
    removeValue(g, 4);
    removeValue(g, 12);
//    removeValue(g, 90);
    display(g);
    return 0;
}

