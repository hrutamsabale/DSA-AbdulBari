#include<stdio.h>

void print_array(int X[], int size)
{
    for (int i=0; i<size;i++)
    {
        printf("%d\n", X[i]);
    }
}

int main()
{
    int A[]={1,2,3,4,5};
    print_array(A,5);

}