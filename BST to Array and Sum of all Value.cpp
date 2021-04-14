
#include<iostream>
using namespace std;

int arr[100];

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


// Converting a BST into an Array
void BSTtoArray(node *root, int A[])
{
    static int pos = 0;
    if(root == NULL) return;

    BSTtoArray(root->left, A);
    A[pos++] = root->key;
    BSTtoArray(root->right, A);

}

int treeSize(node *root) {
    if(root == NULL) return 0;
    else
        return treeSize(root->left) + treeSize(root->right) + 1;
}

// Drive Code
int main()
{
    struct node *root = NULL;
    root = insert(root, 50);
    root = insert(root, 13);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 3);
    root = insert(root, 9);
    root = insert(root, 80);
    root = insert(root, 4);
    root = insert(root, 60);
    root = insert(root, 111);

    cout<<"Printing Tree: ";
    PrintTree(root);

    int treeSZ = treeSize(root);

    int arrySum = 0;

    int *A = new int[treeSZ];
    BSTtoArray(root, A);
	cout << "\nNew Array: ";
	for(int i = 0; i < treeSZ; i++)
    {
        cout << A[i] << " ";
        arrySum = A[i] + arrySum;
    }
	cout<<"\nAll Value Summation: "<<arrySum<<endl;

    return 0;
}


