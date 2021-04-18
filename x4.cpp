#include <iostream>

using namespace std;

struct student
{

    string name;

    float height;

};

int main()
{
    student *s = new student;
    student *s1 = new student;

//Write to s

    s->name = "Al";
    s1->name = "Abid";

    s->height = 5.8;

//Display value of s

    cout<<s->name<<" ";
    cout<<s1->name<<endl;

    cout<<s->height<<endl;

    return 0;

}
