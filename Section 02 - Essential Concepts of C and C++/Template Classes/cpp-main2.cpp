#include<iostream>
using namespace std;

template<typename T>
class Arithmetic
{
    private:
        T a;
        T b;
    public:
        Arithmetic(T a, T b)
        {
            this->a = a;
            this->b = b;
        }
        T add()
        {
            return this->a + this->b;
        }
        T sub()
        {
            return this->a - this->b;
        }
};

int main()
{
    Arithmetic<int> a1(1,2);
    Arithmetic<float> a2(1.4,5.3);
    cout<<a1.add()<<" "<<a2.add();
}