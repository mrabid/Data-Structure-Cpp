#include <iostream>
using namespace std;

// Data structure to store a Binary Search Tree node
struct Node
{
    int data;
    Node *left, *right;
};

// Function to create a new binary tree node having given key
Node *newNode(int key)
{
    Node *node = new Node;
    node->data = key;
    node->left = node->right = NULL;

    return node;
}

// Function to perform inorder traversal of the tree
void inorder(Node *root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Recursive function to insert a key into BST
Node *insert(Node *root, int key)
{
    // if the root is null, create a new node and return it
    if (root == NULL)
        return newNode(key);

    // if given key is less than the root node, recur for left subtree
    if (key < root->data)
        root->left = insert(root->left, key);

    // if given key is more than the root node, recur for right subtree
    else
        root->right = insert(root->right, key);

    return root;
}

// Function to truncate the BST and remove nodes having keys
// outside valid range
Node *truncate(Node *root, int min, int max)
{
    // base case
    if (root == NULL)
        return root;

    // recursively truncate left and right subtree first
    root->left = truncate(root->left, min, max);
    root->right = truncate(root->right, min, max);

    Node *curr = root;

    // if root's key is smaller than the minimum allowed, delete it
    if (root->data < min)
    {
        root = root->right;
        delete curr;
    }
    // if root's key is larger than the maximum allowed, delete it
    else if (root->data > max)
    {
        root = root->left;
        delete curr;
    }

    return root;
}

// Remove nodes from BST that have keys outside the valid range
int main()
{
    Node *root = NULL;
    /* Construct below tree
           15
         /    \
        /      \
       10      20
      / \      / \
     /   \    /   \
    8    12  16   25
    */
    // int keys[] = {15, 10, 20, 8, 12, 16, 25};

    // for (int key : keys)
    //
    root = insert(root, 15);
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 8);
    root = insert(root, 12);
    root = insert(root, 16);
    root = insert(root, 25);

    // [9, 12] is valid range
    root = truncate(root, 9, 20);
    inorder(root);

    return 0;
}
