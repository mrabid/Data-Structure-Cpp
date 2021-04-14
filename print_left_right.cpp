#include <iostream>
using namespace std;

void leftView(struct Node *root);
void rightView(struct Node *root);

struct Node
{
    struct Node *left, *right;
    int key;
};

struct Node *newNode(int key)
{
    struct Node *ptr = new Node;
    ptr->key = key;
    ptr->left = ptr->right = NULL;
    return ptr;
}

// Standard BST insert function
struct Node *insert(struct Node *root, int key)
{
    if (!root)
        root = newNode(key);
    else if (root->key > key)
        root->left = insert(root->left, key);
    else if (root->key < key)
        root->right = insert(root->right, key);
    return root;
}

// Left View node
void checkRight(struct Node *node)
{
    if (node == NULL)
        return;
    leftView(node->left);
    checkRight(node->right);
}
void leftView(struct Node *root)
{
    if (root == NULL)
        return;
    cout << root->key << " ";
    leftView(root->left);
    checkRight(root->right);
}

// Right View node
void checkLeft(struct Node *node)
{
    if (node == NULL)
        return;
    rightView(node->right);
    checkRight(node->left);
}
void rightView(struct Node *root)
{
    if (root == NULL)
        return;
    cout << root->key << " ";
    rightView(root->right);
    checkLeft(root->left);
}

// Driver code
int main()
{
    struct Node *root = NULL;
    root = insert(root, 20);
    insert(root, 10);
    insert(root, 5);
    insert(root, 15);
    insert(root, 30);
    insert(root, 25);
    insert(root, 35);
    insert(root, 2);
    insert(root, 57);

    cout << "Left view node: ";
    leftView(root);

    cout << "\nRight view node: ";
    rightView(root);

    return 0;
}