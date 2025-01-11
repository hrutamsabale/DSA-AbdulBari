#include<iostream>
using namespace std;

class Rectangle
{
    private:
        int length;
        int breadth;
    public:
        Rectangle()
        {
            length=0;
            breadth=0;
        }
        Rectangle(int l, int b);
        int area();
        int perimeter();
        int getLength()
        {
            return length;
        }
        void setLength(int l);
        ~Rectangle();
};

Rectangle::Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}

int Rectangle::area()
{
    return length*breadth;
}

int Rectangle::perimeter()
{
    return 2*(length+breadth);
}

void Rectangle::setLength(int l)
{
    length = l;
}

Rectangle::~Rectangle()
{
    cout<<"\nObject Destroyed";
}

int main()
{
    Rectangle r1;
    cout<<"Length: "<<r1.getLength();
    Rectangle r2(2,2);
    cout<<"\nArea: "<<r2.area();
    cout<<"\nPerimeter: "<<r2.perimeter();
    r2.setLength(5);
    cout<<"\nLength: "<<r2.getLength();
}