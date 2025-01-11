#include<iostream>
using namespace std;

template<typename T, typename U>
class Box
{
    private:
        T name;
        U vol;
    public:
        Box(T name, U vol);
        T both_int();
        T both_diff();
};

template<typename T, typename U>
Box<T, U>::Box(T name, U vol)
{
    this->name = name;
    this->vol = vol;
}

template<typename T, typename U>
T Box<T, U>::both_int()
{
    return this->name * this->vol;
}

template<typename T, typename U>
T Box<T, U>::both_diff()
{
    return this->name;
}

int main()
{
    Box<string, int> b1("Box1", 5);
    Box<int, int> b2(2,3);
    cout<<b1.both_diff()<<endl;
    cout<<b2.both_int()<<endl;
}