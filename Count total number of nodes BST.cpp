#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int n=1;

struct node
{
    int key;
    struct node *left, *right;
};

struct node *newNode(int item)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

//printing the whole tree
void PrintTree(struct node *root)
{
    if (root == NULL)
        return;
    cout<<root->key<<" ";
    PrintTree(root->left);
    PrintTree(root->right);

}

struct node* insert(struct node* node, int key)
{
    if (node == NULL)
        return newNode(key);
    if (key < node->key)
        node->left = insert(node->left, key);
    else
        node->right = insert(node->right, key);
    return node;
}
struct node * minValueNode(struct node* node)
{
    struct node* current = node;
    while (current && current->left != NULL)
        current = current->left;
    return current;
}

int CountNode( node *root)
{
    if(root == NULL)
        return 0;
    if(root -> left != NULL)
    {
        n = n+1;
        n = CountNode(root -> left);
    }
    if(root -> right != NULL)
    {
        n = n+1;
        n = CountNode(root -> right);
    }

    return n;
}

int main()
{
    struct node *root = NULL;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);
    root = insert(root, 91);

    cout<<"Printing Tree: ";
    PrintTree(root);

    cout<<"\nTotal Node: "<<CountNode(root)<<endl;

    return 0;
}
