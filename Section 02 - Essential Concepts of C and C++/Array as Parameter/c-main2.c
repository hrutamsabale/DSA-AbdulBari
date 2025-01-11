#include<stdio.h>

void swap(int A[], int B[])
{
    int temp;
    temp = *A;
    *A = *B;
    *B = temp;
    printf("Inside: x is %d and y is %d\n", *A, *B);
}

int main()
{
    int x=5, y=10;
    printf("Before: x is %d and y is %d\n", x, y);
    swap(&x, &y);
    printf("After: x is %d and y is %d\n", x, y);
}