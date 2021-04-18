#include<iostream>
using namespace std;

struct Point
{
    int x, y;

};

int main()

{

    struct Point p1 = { 1, 2 };

// p2 is a pointer to structure p1

    struct Point* p2 = &p1;

// Accessing structure members using

// structure pointer

    cout << p2->x << " " << p2->y<<endl;



    struct Point arr[10];

// Access array members

    arr[2].x = 10;

    arr[5].y = 20;

    struct Point* p = &arr[2];
    struct Point* p5 = &arr[5];

    cout << p->x << " " << p5->y;


    return 0;
}

