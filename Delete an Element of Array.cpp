#include<iostream>
using namespace std;

int main()
{
    int array_size, index, i, j;
    cout<<"Declare the array size: ";
    cin>>array_size;
    int age[array_size];

    //array input
    cout<<"Input "<<array_size<<" elements: ";
    for(i=0; i<array_size; i++)
        cin>>age[i];

    //Input zero based index for delete
    cout<<"Input index number 0 to 4: ";
    cin>>index;

    //deletion by replacing
    j = index;
    while(j < array_size - 1)
    {
        age[j] = age[j+1];
        j++;
    }

    array_size = array_size - 1;

    for(i=0; i<array_size; i++)
        cout<<age[i]<<" "<<endl;

    return 0;
}
