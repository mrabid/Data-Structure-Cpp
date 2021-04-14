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

// Insert function
struct Node *Insert(struct Node *head, int position, int value)
{
    struct Node *temp = head;
    int counter = 0;

    while(temp != NULL) // Travers the link List
    {
        counter++;
        if(counter == position)
        {
            // Insert the value of New Node
            struct Node *newNode = (struct Node *) malloc(sizeof(struct Node));
            newNode->data = value;
            newNode->next = temp->next;
            temp->next = newNode;
        }
        temp = temp->next;
    }
    return head;
}

int main()
{
    int arr[] = {5, 10, 15, 20, 25};
    int n = sizeof(arr) / sizeof(int);

    struct Node *head = createLink(arr, n);  // Calling Link list function
    print(head);                             // Calling print function for print Link List

    struct Node *insertHead = Insert(head, 4, 500);  // Calling the insert function
    print(insertHead);                               // Calling print function for print Link List

    insertHead = Insert(head, 1, 999);  // Calling the insert function
    print(insertHead);                               // Calling print function for print Link List

    return 0;
}
