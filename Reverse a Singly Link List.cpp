// Note: print()  and reverseLinkList() is same Function.
#include<iostream>
#include<stdlib.h>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
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
        temp->next = NULL;
        if(head == NULL)
        {
            head = temp;
            present = temp;
        }
        else
        {
            present->next = temp;
            present = present->next;
        }
    }
    return head;
}

// Travers and Print the Link List
void print(struct Node *head)
{
    while(head != NULL)
    {
        cout<<head->data<<" -> ";
        head = head->next;
    }
    cout<<"NULL"<<endl<<endl;
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
            head = head->next;
            index++;
        }
    }
    return -1;
}

// Revers The Link List
struct Node *reverseLinkList(struct Node *head)
{
    struct Node *previous=NULL, *present=head, *next=NULL;
    while(present != NULL)
    {
        // Data store the next node
        next = present->next;
        // reverse the Link or Connection
        present->next = previous;
        // Propagate
        previous = present;
        present = next;
    }
    return previous;
}

// Travers and Print the Reverse link list
void printReverseLinklist(struct Node *newHead)
{
    while(newHead != NULL)
    {
        cout<<newHead->data<<" -> ";
        newHead = newHead->next;
    }
    cout<<"NULL"<<endl<<endl;
}

int main()
{
    int arr[] = {5, 10, 15, 20, 25, 30, 40, 50};
    int n = sizeof(arr) / sizeof(int);
    struct Node *head = createLink(arr, n);  // Calling Link list function
    print(head);                             // Calling print function for print Link List
    cout<<"Index number: "<<searchInLinkList(head, 25)<<endl<<endl;

    // Reverse a Singly Link List
    struct Node *newHead;
    newHead = reverseLinkList(head);
    print(newHead);     // Calling printReverseLinklist function for print Reverse List

    return 0;
}
