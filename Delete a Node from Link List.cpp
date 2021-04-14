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

// Delete Node Function
struct Node *Delete(struct Node *head, int value)
{
    struct Node *dumyHead = (struct Node *) malloc(sizeof(struct Node));
    dumyHead->next = head;  // dumyHead(New Node) set/connect at the beginning of Link List
    struct Node *temp = dumyHead;

    // Travers the link List
    while(temp->next != NULL)
    {
        if(temp->next->data == value)
        {
            // Delete Logic
            temp->next = temp->next->next;
            break;
        }
        else
        {
            temp = temp->next;
        }
    }
    return dumyHead->next;
}

int main()
{
    int arr[] = {5, 10, 15, 20, 25, 30, 40, 50};
    int n = sizeof(arr) / sizeof(int);

    struct Node *head = createLink(arr, n);  // Calling Link list function
    print(head);                             // Calling print function for print Link List

    struct Node *newHead = Delete(head, 15);  // Calling Delete function from Link list
    print(newHead);                           // Calling print function for print Link List

    return 0;
}
