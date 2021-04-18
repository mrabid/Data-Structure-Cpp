#include<iostream>
#include <stdlib.h>
using namespace std;
struct Node* creatLinkList(int arr[], int size);
int searchLinkList(struct Node *head, int value);
void reverseLinkList( struct Node *head);

struct Node
{
    int data;
    struct Node* next;
};

int main()
{
    int a[] = { 5, 10, 15, 20, 30, 100 };
    struct Node *head = NULL;

    head = creatLinkList(a, 6);

    //Loop for print
    while (head != NULL)
    {
        cout<< head->data<<" -> ";
        head = head->next;
    }
    cout <<"NULL"<<endl;

    head = creatLinkList(a, 6);
    cout<<"Searching value index is: "<<searchLinkList(head, 30)<<endl;

    struct Node *newHead = head;
    reverseLinkList(newHead);

    return 0;
}

void reverseLinkList( struct Node *head)
{
    struct Node *prev = NULL, *current = head, *next = NULL;
    while(current != NULL)
    {
        //store the next node
        next = current -> next;
        //reverse the  link/connection
        current -> next = prev;
        //propagate
        prev = current;
        current = next;
    }
    head = prev;

    while (head != NULL)
    {
        cout<< head->data<<" -> ";
        head = head->next;
    }
    cout <<"NULL"<<endl;

}

struct Node *creatLinkList(int arr[], int size)
{
    struct Node *head = NULL, *temp = NULL, *current = NULL;
    for (int i = 0; i<size; i++)
    {
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp->data = arr[i];
        temp->next = NULL;
        if (head == NULL)
        {
            head = temp;
            current = temp;
        }
        else
        {
            current-> next = temp;
            current = current-> next;
        }
    }

    return head;
}

int searchLinkList(struct Node *head, int value)
{
    int index = 1;
    while(head != NULL)
    {
        if(head -> data == value)
        {
            return index;
        }
         index++;
         head = head -> next;
    }
    return -1;
}
