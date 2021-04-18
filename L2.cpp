// Search an element
#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node
{
    int key;
    struct Node* next;
};

void push(struct Node** head_ref, int new_key)
{
    /* allocate node */
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

    /* put in the key */
    new_node->key = new_key;

    /* link the old list off the new node */
    new_node->next = (*head_ref);

    /* move the head to point to the new node */
    (*head_ref) = new_node;
}

bool search(struct Node* head, int x)
{
    struct Node* current = head; // Initialize current

    while (current != NULL)
    {
        if (current->key == x)
            return true;
        current = current->next;
    }
    return false;
}

int main()
{
    /* Start with the empty list */
    struct Node* head = NULL;

    /* Use push() to construct below list
    14->21->11->30->10 */
    push(&head, 10);
    push(&head, 30);
    push(&head, 11);
    push(&head, 21);
    push(&head, 14);

    search(head, 11)? cout<<"Yes" : cout<<"No";

    return 0;
}
