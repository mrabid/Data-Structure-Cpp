#include<iostream>
using namespace std;

struct node
{
    int key;
    struct node *left, *right;
};

struct node *newNode(int item)
{
    struct node *temp = new node;
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
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

//printing the whole tree
void PrintTree(struct node *root)
{
    if (root == NULL)
        return;
    cout<<root->key<<" ";
    PrintTree(root->left);
    PrintTree(root->right);

}

// Sorted Tree
void sortedTree(struct node *root)
{
    if (root == NULL)
        return;

    sortedTree(root->left);
    cout<<root->key<<" ";
    sortedTree(root->right);
}

int main()
{
    struct node *root = NULL;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 69);
    root = insert(root, 60);
    root = insert(root, 97);
    root = insert(root, 41);
    root = insert(root, 100);
    root = insert(root, 7);
    root = insert(root, 2);

    cout<<"Printing Tree: ";
    PrintTree(root);

    cout<<"\n\nSorted tree: ";
    sortedTree(root);


    return 0;
}
