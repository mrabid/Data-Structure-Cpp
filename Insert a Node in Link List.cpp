
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

// Insert value At the beginning of link list
struct Node *insertAtBegining(struct Node *head, int value)
{
    struct Node *temp=NULL, *newHead=NULL, *present=NULL;
    temp = (struct Node*) malloc(sizeof(struct Node));

    temp->data = value;   // Store the Value
    temp->next = head;   // New value connect the head of Link List
    newHead = temp;      // Now newHead is 1st index for Link List
    present = newHead;

    return newHead;
}

// Insert value At the End of link list
struct Node *insertAtEnd(struct Node *head, int value)
{
    struct Node *temp, *present=head;
    temp = (struct Node*) malloc(sizeof(struct Node));

    // Travers and go to the end(NULL) of link list
    while(present->next != NULL)
    {
        present = present->next;
    }

    temp->data = value; // Value set the New-Node
    temp->next = NULL;  // Link connect to the NULL

    present->next = temp; // Insert

    return head;
}

int main()
{
    int arr[] = {5, 10, 15, 20, 25, 30, 40, 50};
    int n = sizeof(arr) / sizeof(int);

    struct Node *head = createLink(arr, n);  // Calling Link list function
    print(head);                             // Calling print function for print Link List

    // Insert At beginning from link list
    struct Node *insertHeadBegining;
    insertHeadBegining = insertAtBegining(head, 1000);
    print(insertHeadBegining);

    // Insert At end from link list
    struct Node *insertHeadEnd;
    insertHeadEnd = insertAtEnd(insertHeadBegining, 999);
    print(insertHeadEnd);

    // Linear Search from Link list
    cout<<"Index number: "<<searchInLinkList(insertHeadEnd, 25)<<endl<<endl;

    // Reverse a Singly Link List
    struct Node *newHead;
    newHead = reverseLinkList(insertHeadEnd);
    print(newHead);     // Calling printReverseLinklist function for print Reverse List

    return 0;
}
