#include<iostream>
using namespace std;

template<typename U>
class Arithmetic
{
    private:
        U a;
        U b;
    public:
        Arithmetic(U a, U b);
        U add();
        U sub();
};

template<typename U>
Arithmetic<U>::Arithmetic(U a, U b)
{
    this->a = a;
    this->b = b;
}

template<typename U>
U Arithmetic<U>::add()
{
    return this->a + this->b;
}

template<typename U>
U Arithmetic<U>::sub()
{
    return this->a - this->b;
}

int main()
{
    Arithmetic<float> a1(1,2.3);
    cout<<a1.add();
}