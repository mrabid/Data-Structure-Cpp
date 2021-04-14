#include <iostream>
using namespace std;

int arr[100] = {};

void insert (int arr[], int n, int k)
{
    int i;
    i = k % n;
    if (arr[i] == 0)
    {
        arr[i] =  k;
    }
    else
    {
        cout << "Key " << k << " could not be stored. Index " << i << " is occupied already!\n";
    }
}


int main()
{
    int n, k;
    cout << "Insert size of array: ";
    cin >> n;

    insert (arr, n, 11);
    insert (arr, n, 12);
    insert (arr, n, 13);
    insert (arr, n, 14);
    insert (arr, n, 15);
    insert (arr, n, 16);

    cout << "\nThe array is: ";
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }

    int in;
    cout << "\nSearch value: ";
    cin >> in;
    int c = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] == in)
        {
            c = 1;
        }
    }
    if (c==0)
    {
        cout <<"NOt foudn "<< endl;
    }
    else
    {
        cout <<"founde "<< endl;
    }

    return 0;
}


