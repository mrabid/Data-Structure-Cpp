#include<iostream>
#include<stdio.h>
using namespace std;

int adj[100][100];

int main()
{
    freopen("input.txt","r",stdin);
    int n,e;
    cin>>n>>e;
    int n1,n2;
    for(int i=0; i<e; ++i)
    {
        cin>>n1>>n2;
        adj[n1][n2] = 1;
        adj[n2][n1] = 1;
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<adj[i][j]<<"    ";
        }
        cout<<endl<<endl;
    }

    for(int i=0; i<n; i++)
    {
        if(adj[3][i] == 1)
        {
            cout<<i<<"  ";
        }
    }
    cout<<endl<<endl;

    return 0;
}
