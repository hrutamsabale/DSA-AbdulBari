#include<iostream>
using namespace std;

template <class T>
class Arithmetic
{
    private:
        T a;
        T b;
    public:
        Arithmetic(T a, T b);
        T add();
        T sub();
};

template<class T>
Arithmetic<T>::Arithmetic(T a, T b)
{
    this->a = a;
    this->b = b;
}

template<class T>
T Arithmetic<T>::add()
{
    T c = this->a + this->b;
}

template<class T>
T Arithmetic<T>::sub()
{
    T c = this->a - this->b;
    return c;
}

int main()
{
    Arithmetic<int> a1(1,2);
    cout<<a1.add()<<endl;
    Arithmetic<float> a2(2.3,4.5);
    cout<<a2.add()<<endl;
}