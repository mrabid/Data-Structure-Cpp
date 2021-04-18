#include <iostream>

using namespace std;

struct student
{

    string name;

    float height;

};

int main()
{
    student s;

//Write to s

    s.name = "Abid";

    s.height = 5.8;

//Display value of s

    cout<<s.name<<endl;

    cout<<s.height<<endl;

    return 0;

}
