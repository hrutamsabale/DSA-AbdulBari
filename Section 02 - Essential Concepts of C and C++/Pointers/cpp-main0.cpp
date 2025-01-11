#include<iostream>
using namespace std;

int main()
{
    int A[5]={1,2,3,4,5};
    int *p;
    p = A;
    cout<<p<<endl;
    cout<<p+1<<endl;
    cout<<"\n"<<*p<<endl;
    cout<<*++p<<endl;
}