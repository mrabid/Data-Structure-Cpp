#include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    vector <int> vec[5];
    int n, e;
    cin>>n>>e;
    int n1, n2;
    for(int i=0; i<e; i++)
    {
        cin>>n1>>n2;
        vec[n1].push_back(n2);
        vec[n2].push_back(n1);
    }

    cout<<"Neighbors: ";
    for(int i=0; i<vec[2].size(); i++)
    {
        cout<<vec[2][i]<<"  ";
    }

    return 0;
}
