#include<iostream>
using namespace std;

int passByValue(int x, int y)
{
    int z=x;
    x=y;
    y=z;
    cout<<x<<endl<<y<<endl;
}

void passByAdress(int *x, int *y)
{
    int z=*x;
    *x=*y;
    *y=z;
    cout<<*x<<endl<<*y<<endl;
}

void passByReference(int &x, int &y)
{
    int z=x;
    x=y;
    y=z;
    cout<<x<<endl<<y<<endl;
}
int main()
{
    int a=5m b=10;
    passByValue(a,b);
    passByAdress(&a, &b);
    passByReference(a,b);


    return 0;
}
