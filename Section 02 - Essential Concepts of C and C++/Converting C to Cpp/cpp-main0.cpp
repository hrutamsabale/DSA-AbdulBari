#include<iostream>
using namespace std;

class Rectangle
{
    private:
        int length;
        int breadth;
    public:
        Rectangle(int l, int b)
        {
            length = l;
            breadth = b;
        }
        int area()
        {
            return length*breadth;
        }
        void changeLen(int l)
        {
            length = l;
        }
        void printRec()
        {
            cout<<"\nLength: "<<length<<", Breadth: "<<breadth<<endl;
        }
};

int main()
{
    Rectangle r(5,10);
    r.printRec();
    cout<<"\nArea: "<<r.area();
    r.changeLen(10);
    cout<<"\nArea: "<<r.area();    
    return 0;
}