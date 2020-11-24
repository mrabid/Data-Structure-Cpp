#include <iostream>
#include<stdlib.h>
using namespace std;
struct Node *creatlinklist(int arr[], int size);
void insert(struct Node *head, int data);
void printinsert(struct Node *head);

struct Node
{
	int data;
	struct Node *next;
};

int main()
{
	int a[]={5, 10, 15, 20, 25};
	struct Node *head = NULL;

	head = creatlinklist(a, 5);
	
	while(head != NULL)
	{
		cout<<head->data<<" -> ";
		head = head->next;
	}
	cout<<"NULL"<<endl;

    head = creatlinklist(a, 5);
	insert(head, 100);

	return 0;
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

void insert(struct Node *head, int data)
{
	struct Node *temp = (struct Node*) malloc(sizeof(struct Node));
	temp->data = data;
	temp->next = head;

	struct Node *newhead = temp;
	struct Node *present = newhead;
	newhead = temp;

	printinsert(newhead);

}

void printinsert(struct Node *head)
{
	struct Node *present = head;
	while(present != NULL)
	{
		cout<<present->data<<" -> ";
		present = present->next;
	}
	cout<<"NULL"<<endl;
}
