#include<iostream>
#include<stdio.h>
using namespace std;

int adj[100][100];

int main()
{
    freopen("input.txt","r", stdin);
    int node, edge;

//    cout<<"Enter the Node value: ";
    cin>>node;

//    cout<<"\nEnter the Edge value: ";
    cin>>edge;

    int in1, in2;

//    cout<<"Enter two value:"<<endl;
    for(int i=0; i<edge; ++i)
    {
        cin>>in1>>in2;
        adj[in1][in2] = 1;
        adj[in2][in1] = 1;
    }

    for(int i=0; i<node; i++)
    {
        for(int j=0; j<node; j++)
        {
            cout<<adj[i][j]<<"     ";
        }
        cout<<endl<<endl;
    }

    return 0;
}
