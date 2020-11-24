#include<iostream>
using namespace std;

void pass(int *a)
{
    *a = 596;
}

int main()
{
    int x=3;
    int *y=&x;
    pass(y);
    cout<<x;

    return 0;
}
