#include<iostream>
#include<stdio.h>

#define WHITE 1
#define GRAY 2
#define BLACK 3

using namespace std;

int adj[100][100];
int color[100];
int n;
int e;

void dfsVisit(int x)
{
    color[x] = GRAY; // Always the starting node is turned GRAY
    for(int i=0; i<n; i++)
    {
        if(adj[x][i] == 1) // Neighbors
        {
            if(color[i] == WHITE)
            {
                dfsVisit(i); // Recarsion
            }
        }
    }
    color[x] = BLACK;
    cout<<"Node "<<x<<" is "<<color[x]<<" means Black";
    cout<<endl;
}

// All Node making White
void dfs()
{
    for(int i=0; i<n; ++i)
    {
        color[i] = WHITE;
    }
    for(int i=0; i<n; i++)
    {
        if(color[i] == WHITE)
        {
            dfsVisit(i); // Travers Function call
        }
    }
}

int main()
{
    freopen("input.txt","r",stdin);
    cin>>n>>e;

    int n1, n2;

    // Matrix
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
            cout<<adj[i][j]<<"   ";
        }
        cout<<endl<<endl;
    }
    cout<<endl;

    // Neighbors
    for(int i=0; i<n; i++)
    {
        if(adj[0][i] == 1)
        {
            cout<<i<<"  ";
        }
    }
    cout<<endl<<endl;

    dfs(); // DFS Function call

    return 0;
}
