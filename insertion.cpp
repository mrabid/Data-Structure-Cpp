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
    node->left = node->right = nullptr;

    return node;
}

// Function to perform inorder traversal of the tree
void inorder(Node *root)
{
    if (root == nullptr)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Recursive function to insert a key into BST
Node *insert(Node *root, int key)
{
    // if the root is null, create a new node and return it
    if (root == nullptr)
        return newNode(key);

    // if given key is less than the root node, recur for left subtree
    if (key < root->data)
        root->left = insert(root->left, key);

    // if given key is more than the root node, recur for right subtree
    else
        root->right = insert(root->right, key);

    return root;
}

int main()
{
    Node *root = nullptr;
    int keys[] = {15, 10, 20, 8, 12, 16, 25};

    for (int key : keys)
        root = insert(root, key);

    inorder(root);

    return 0;
}
