#include<iostream>

using namespace std;

class Arithmatic
{
    private:
    int a;
    int b;

    public:
    Arithmatic(int a, int b);
    void PrintAll();
};

Arithmatic::Arithmatic(int a, int b)
{
    this->a = a;
    this->b = b;
}

void Arithmatic::PrintAll()
{
    cout<<"a: "<<this->a<<" b: "<<this->b;
}
int main()
{
    Arithmatic test(1,2);
    test.PrintAll();
}