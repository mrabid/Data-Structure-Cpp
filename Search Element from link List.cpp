#include<iostream>
#include<stdlib.h>

using namespace std;

struct Node
{
    int data;
    struct Node *link;
};

// Create link list
struct Node *createLink(int arr[], int size)
{
    struct Node *head=NULL, *temp=NULL, *present=NULL;
    int i;

    for(i=0; i<size; i++)
    {
        temp = (struct Node*) malloc(sizeof(struct Node)); // Memory allocation
        temp->data = arr[i];
        temp->link = NULL;
        if(head == NULL)
        {
            head = temp;
            present = temp;
        }
        else
        {
            present->link = temp;
            present = present->link;
        }
    }
    return head;
}

// Linear Search - Search Element from Link List
int searchInLinkList(struct Node *head, int value)
{
    int index = 1;
    while(head != NULL)
    {
        if(head->data == value)
        {
            return index;
        }
        else
        {
            head = head->link;
            index++;
        }
    }
    return -1;
}

// Travers and Print
void print(struct Node *head)
{
    while(head != NULL)
    {
        cout<<head->data<<" -> ";
        head = head->link;
    }
    cout<<"NULL"<<endl<<endl;
}

int main()
{
    int arr[] = {5, 10, 15, 20, 25};
    int n = sizeof(arr) / sizeof(int);
    struct Node *head = createLink(arr, n);  // Calling Link list function
    print(head);                             // Calling print function
    cout<<"Index number: "<<searchInLinkList(head, 20)<<endl;

    return 0;
}
