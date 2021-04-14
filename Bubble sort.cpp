#include<iostream>
using namespace std;

int main()
{
    int arr[]= {9,8,7,6,5,4,3,2,1,0};
    int i,j,temp,n;
    n = sizeof(arr)/4;

    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" "<<endl;
    }

    return 0;
}
