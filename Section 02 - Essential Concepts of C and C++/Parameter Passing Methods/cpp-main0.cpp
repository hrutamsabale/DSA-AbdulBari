#include<iostream>

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Inside, x is %d and y is %d\n", a, b);
}

int main()
{
    int x=10, y=20;
    printf("Before, x is %d and y is %d\n", x, y);
    swap(x, y);
    printf("After, x is %d and y is %d\n", x, y);
    return 0;
}