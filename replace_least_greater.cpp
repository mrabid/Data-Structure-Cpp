
// Replace every element of an array with the least greater element on its right

#include <iostream>
using namespace std;

// Data structure for binary search tree node
struct Node
{
    int key;
    Node *left, *right;
};

// Utility function to create a new binary search tree node
Node *allocateNode(int key)
{
    Node *node = new Node;

    node->key = key;
    node->left = nullptr;
    node->right = nullptr;

    return node;
}

// Function to insert a specified key in the binary search tree rooted at
// specified node and also find its successor
void insert(Node *&root, int key, int &successor)
{
    // base case: empty tree
    if (root == nullptr)
    {
        root = allocateNode(key);
        return;
    }

    // if the key is less than root
    if (key < root->key)
    {
        // set successor as current node
        successor = root->key;

        // traverse the left subtree
        insert(root->left, key, successor);
    }

    // if the key is more than root
    else if (key > root->key)
    {
        // traverse the right subtree
        insert(root->right, key, successor);
    }
}

// Replace each element of the specified array with the
// least greater element on its right
void findInorderSuccessor(int arr[], int n)
{
    // root of the binary search tree
    Node *root = nullptr;

    // traverse the array from the end
    for (int i = n - 1; i >= 0; i--)
    {
        // insert the current element in the binary search tree
        // and replace it with its in-order successor
        int successor = -1;
        insert(root, arr[i], successor);
        arr[i] = successor;
    }

    // print the resultant array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main()
{
    int arr[] = {10, 100, 93, 32, 35, 65, 80, 90, 94, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    findInorderSuccessor(arr, n);

    return 0;
}
