#include<iostream>
#include<stdlib.h>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

// Creat link list from an array.
struct Node *creatLink(int arr[], int size)
{
    struct Node *head=NULL, *temp=NULL, *current=NULL;

    int i;
    for(i=0; i<size; i++)
    {
        temp = (struct Node*) malloc(sizeof(struct Node));  // create dynamic memory
        temp->data = arr[i];
        temp->next = NULL;

        if(head == NULL)
        {
            head = temp;
            current = temp;
        }
        else
        {
            current->next = temp;
            current = current->next;
        }
    }
    return head;  // Return Link list Head(1st indes address)
}

// Travers and print
struct Node print(struct Node *head)
{
    while(head != NULL)
    {
        cout<<head->data<<" -> ";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    int arr[] = {5, 10, 15, 20, 25, 30};  // Define Array
    int n = sizeof(arr)/sizeof(int);      // Array Size

    struct Node *head = creatLink(arr, n);  // Calling Link list function

    print(head);  // Calling print function

    return 0;
}
