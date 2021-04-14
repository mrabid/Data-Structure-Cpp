#include<iostream>
#include<stdio.h>
#include<queue>

using namespace std;

#define WHITE 1
#define GRAY 2
#define BLACK 3

int adj[100][100];
int color[100];
int parent[100];
int dis[100];
int n, e;

void bfs(int startNode)
{
    for(int i=0; i<n; i++)
    {
        color[i] = WHITE;
        dis[i] = INT_MIN;
        parent[i] = -1;
    }
    dis[startNode] = 0;
    parent[startNode] = -1;

    queue <int> q;
    q.push(startNode);

    while( ! q.empty() )
    {
        int x;
        x = q.front();
        q.pop();

        color[x] = GRAY;
        cout<<x<<"  ";
        for(int i=0; i<n; i++)
        {
            if(adj[x][i] == 1)
            {
                if(color[i] == WHITE)
                {
                    dis[i] = dis[x]+1;
                    parent[i] = x;
                    q.push(i);
                }
            }
        }

        color[x] = BLACK;
    }
}

int main()
{
    freopen("input1.txt","r", stdin);
    cin>>n>>e;
    int n1, n2;
    for(int i=0; i<e; i++)
    {
        cin>>n1>>n2;
        adj[n1][n2] = 1;
        adj[n2][n1] = 1;
    }

    bfs(0);
    cout<<endl;
    cout<<parent[5]<<endl;
    cout<<dis[7]<<endl;

    return 0;
}
