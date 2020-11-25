#include<iostream>
using namespace std;

int main()
{
    int x = 3;

    int *y= &x;
    int **k=&y;

    cout<<"address of x: "<<&x<<endl;
    cout<<"address of y: "<<&y<<endl;
    cout<<"address of k: "<<&k<<endl;
    cout<<"value of y  : "<<y<<endl;
    cout<<"value of k  : "<<k<<endl;
    cout<<"pointer of y: "<<*y<<endl;
    cout<<"pointer of k: "<<*k<<endl;
    cout<<"pointer of pointer: "<<**k<<endl;

    return 0;
}
/*
#include<iostream>
using namespace std;

int main()
{
    int x=3;
    int *y=&x;
    int **k = &y;
    cout<<*y<<endl;
    cout<<*k<<endl;
    cout<<**k;

    return 0;
}

/*
#include<iostream>
using namespace std;

int main()
{
    int x=3;
    int *y=&x;
    int **k = &y;
    cout<<*y<<endl;
    cout<<**k;

    return 0;
}
*/
