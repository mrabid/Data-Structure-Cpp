#include<iostream>
#include<stdlib.h>

using namespace std;

struct Node
{
    int data;
    struct Node *link;
};

// Link list Travers
struct Node print(struct Node *a)
{
    cout<<"Link list Travers and print: ";
    while(a != NULL)
    {
        cout<<a->data<<" -> ";
        a = a->link;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    struct Node *a = NULL;
    struct Node *b = NULL;
    struct Node *c = NULL;
    struct Node *d = NULL;
    struct Node *e = NULL;

    a = (struct Node*) malloc(sizeof(struct Node));  // Dynamic Memory Allocation
    b = (struct Node*) malloc(sizeof(struct Node));
    c = (struct Node*) malloc(sizeof(struct Node));
    d = (struct Node*) malloc(sizeof(struct Node));
    e = (struct Node*) malloc(sizeof(struct Node));

    a->data = 10;  // Set Data
    b->data = 20;
    c->data = 30;
    d->data = 40;
    e->data = 50;

    a->link = b;  // Connect the Link
    b->link = c;
    c->link = d;
    d->link = e;
    e->link = NULL;

    print(a);  // Function calling - send the Head of Link List

    return 0;
}
