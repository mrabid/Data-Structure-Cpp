#include<iostream>
using namespace std;

int main()
{
    int arr[] = {34,534,34,6,4,3,2,56,3};
    int n = sizeof(arr)/4, i, j, temp;

    //Sorted
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

    cout<<"Sorted: ";
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //Binary Search
    int item, startPoint = 0, midPoint, endPoint = n-1, location = -1, comperison = 0;
    cout<<"Item input: ";
    cin>>item;

    while(startPoint <= endPoint)
    {
        comperison++;
        midPoint = (startPoint + endPoint) / 2;

        if(arr[midPoint] == item)
        {
            location = midPoint;
            break;
        }
        else if(arr[midPoint] < item)
        {
            startPoint = midPoint + 1;
        }
        else
        {
            endPoint = midPoint - 1;
        }
    }

    if(location == -1)
    {
        cout<<item<<" Not found."<<"\nComperison "<<comperison;
    }
    else
    {
        cout<<item<<" Found at location "<<location+1<<"\nComperison "<<comperison<<endl;
    }

    return 0;
}
