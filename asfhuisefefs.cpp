#include <iostream>
using namespace std;

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
        cout << "\nKey " << k << " could not be stored. Index " << i << " is occupied already!\n";
    }

}


int main()
{
    int n, k;
    cout << "Insert size of array: ";
    cin >> n;
    int arr[12] = {};
    cout << "\nArray of size " << n << " has been created:\n";

    insert (arr, n, 50);
    insert (arr, n, 34);
    insert (arr, n, 24);
    insert (arr, n, 92);
    insert (arr, n, 65);
    insert (arr, n, 48);

    cout << "\nThe array is: ";
    for (int j=0; j<n; j++)
    {
        cout << arr[j] << " ";
    }

}
