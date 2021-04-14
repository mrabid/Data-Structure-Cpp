#include<iostream>
#define arr_size 100
#define range 10
using namespace std;

int arr[arr_size]; //Globally declare

int main()
{
    int n, value;
    cout<<"Enter the value: ";
    cin>>n;

    cout<<"Enter the elements 1 to 10 : ";
    for(int i=0; i<n; i++)
    {
        cin>>value;
        arr[value] = arr[value]+1;
    }

    cout<<"Frequencies of values 1 to 10: ";
    for(int i=0; i<range; i++)
    {
        cout<<"arr["<<i<<"] = "<<arr[i]<<endl;
    }

    return 0;
}
