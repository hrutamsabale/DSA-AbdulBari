#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int &r = a;
    cout<<"a = " <<a<<endl;
    cout<<"r = "<<r<<endl;
    cout<<"Address of a = "<<&a<<endl;
    cout<<"Address of r = "<<&r<<endl;
}