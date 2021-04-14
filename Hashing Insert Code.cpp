#include <iostream>
using namespace std;

int arr[10] = {};

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
    int n;
    n=10;

    insert (arr, n, 15);
    insert (arr, n, 52);
    insert (arr, n, 13);
    insert (arr, n, 19);
    insert (arr, n, 77);
    insert (arr, n, 66);
    insert (arr, n, 44);
    insert (arr, n, 90);
    insert (arr, n, 81);

    cout << "The array is: ";
    for (int j=0; j<n; j++)
    {
        cout << arr[j] << " ";
    }

}

