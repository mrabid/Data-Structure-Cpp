#include<iostream>
using namespace std;

int main()
{
    int arr[] = {34,534,35,6,4,3,2,56,7};
    int n = sizeof(arr)/4, i, j, temp;
    int item;
    cout<<"Input Item: ";
    cin>>item;

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"Sorted: ";
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //Linear Search
    for(i=0; i<n; i++)
    {
        if(arr[i] == item)
        {
            cout<<item<<" Found at location "<<i+1<<endl;
            break;
        }
    }
    if( i == n)
    {
        cout<<item<<" Not found.";
    }

    return 0;
}
