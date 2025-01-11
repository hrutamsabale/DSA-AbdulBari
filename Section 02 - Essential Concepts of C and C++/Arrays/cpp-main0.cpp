#include<iostream>
using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter length: ";
//     cin>>n;
//     int A[n];
//     cout<<"Size: "<<sizeof(A);
//     return 0;
// }

int main()
{
    int n;
    cout<<"Enter length: ";
    cin>>n;
    int A[n] = {1, 2, 3};
    cout<<"Size: "<<sizeof(A)<<endl;
    for(int x:A)
    {
        cout<<x<<endl;
    }
    return 0;
}

