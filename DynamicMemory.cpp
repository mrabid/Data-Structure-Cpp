#include<iostream>

using namespace std;

int main()
{
    int x=8;
    int *px = &x;
    cout<<&x<<endl;
    cout<<px<<endl;
    cout<<*px<<endl;
    ++(px);
    cout<<px<<endl;
    cout<<"\n"<<endl;
    
    
    char ch = 'A';
    char *pch = &ch;
    cout<<(void*) &ch<<endl;
    cout<<(void*)pch<<endl;
    cout<<*pch<<endl;
    ++(pch);
    cout<<(void*)pch<<endl;
    return 0;
}