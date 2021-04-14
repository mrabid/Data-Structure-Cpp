#include<iostream>
using namespace std;

int main()
{
    int a = 5, b = 10, temp;

/*    temp = a;
    a = b;
    b = temp;

    cout<<"a = "<<a<<", b = "<<b;  */

//    a = a ^ b;
//    b = a ^ b;
//    a = a ^ b;

     a^=b^=a^=b;

    cout<<"a = "<<a<<", b = "<<b;

    return 0;
}
