#include<iostream>
using namespace std;

int main()
{
    int in;
    cin>>in;
    int arr[in];
    float cnt1=0, cnt2=0,cnt3=0;
    for(int i=0; i<in; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<in; i++)
    {
        if(arr[i] > 0)
        {
            cnt1++;
        }
        if(arr[i] < 0)
        {
            cnt2++;
        }
        if(arr[i] == 0)
        {
            cnt3++;
        }
    }
    cout<<cnt1/in<<endl;
    cout<<cnt2/in<<endl;
    cout<<cnt3/in<<endl;

    return 0;
}

