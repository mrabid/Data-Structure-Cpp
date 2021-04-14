
#include<iostream>
#include<stdlib.h>
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

struct node* deleteNode(struct node* root, int key)
{

    //case 1: No Child
    if (root == NULL)
        return root;
    // find left or right
    if (key < root->key)
        root->left = deleteNode(root->left, key);
    else if (key > root->key)
        root->right = deleteNode(root->right, key);

    //case 2:
    else
    {
        // if only right child present
        if (root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        // if only left child present
        else if (root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }

        // if two child present
        struct node* temp = minValueNode(root->right);
        root->key = temp->key;
        root->right = deleteNode(root->right, temp->key);
    }
    return root;
}

bool valueExist (node *n, int val)
{
    if (n==NULL)
    {
        return false;;
    }

    if (n->key== val)
    {
        return true;
    }
    if (n->key > val)
        valueExist(n->left,val);
    else
        valueExist(n->right,val);
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

    cout<<"Printing Tree: ";
    PrintTree(root);

    cout<<"\nDelete 20";
    root = deleteNode(root, 20);
    cout<<"\nDelete 30";
    root = deleteNode(root, 30);

    cout<<"\nPrinting Tree: ";
    PrintTree(root);
    cout<<endl;


    if (valueExist(root, 20))
    {
        cout <<"\nExist "<< endl;
    }
    else
    {
        cout <<"\nNot Exist"<< endl;
    }


    if (valueExist(root, 70))
    {
        cout <<"\nExist "<< endl;
    }
    else
    {
        cout <<"\nNot Exist"<< endl;
    }

    return 0;
}
