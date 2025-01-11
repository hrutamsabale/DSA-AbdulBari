#include<iostream>
using namespace std;

class Rectangle
{
    private:
        int length;
        int breadth;
    public:
        Rectangle(int len, int bred)
        {
            length = len;
            breadth = bred;
        }
        int area()
        {
            return length*breadth;
        }
        int peri()
        {
            return 2*(length+breadth);
        }
};

int main()
{
    int l,b;
    cout<<"Enter Length: ";
    cin>>l;
    cout<<"Enter Breadth: ";
    cin>>b;
    Rectangle r1(l,b);
    cout<<"Area: "<< r1.area()<<endl;
    cout<<"Perimeter: "<< r1.peri()<<endl;
}