//Single Element
#include <iostream>
using namespace std;

struct rectangle
{
    float length;
    float width;
};

void setLengthWidth(rectangle *r)
{
    r->length = 5.0;
    r->width = 6.0;
//(*r).length = 5.0;
//(*r).width = 4.0;
}

void getArea(rectangle *r)
{
    cout<<r->length*r->width<<endl;
//cout<<(*r).length*(*r).width<<endl;
}

int main()
{
    rectangle *r = new rectangle;
    setLengthWidth(r);
    getArea(r);
    return 0;

}
