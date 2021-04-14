#include<iostream>
#include<stdio.h>
#include<queue>

using namespace std;

int main()
{
    queue <int> q;
    q.push(1);
    q.push(5);
    q.push(10);
    q.push(15);
    q.push(20);

    while( ! q.empty() )
    {
        int r = q.front();
        cout<<r<<"  ";
        q.pop();
    }

    return 0;
}
