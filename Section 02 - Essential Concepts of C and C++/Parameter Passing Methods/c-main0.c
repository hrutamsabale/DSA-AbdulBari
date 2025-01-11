#include<stdio.h>

void SWaP(int a, int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("Inside SWaP, a=%d and b=%d\n", a,b);
}

void SWP(int *p1, int *p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    printf("Inside SWP, a=%d and b=%d\n", *p1,*p2);
}

int main()
{
    int a=5, b=10;
    int *p2a, *p2b;
    p2a = &a;
    p2b = &b;
    printf("Before using SWaP, a=%d and b=%d\n", a, b);
    SWaP(a, b);
    printf("After using SWaP, a=%d and b=%d\n", a, b);
    printf("\n\n");
    printf("Before using SWP, a=%d and b=%d\n", a, b);
    SWP(p2a, p2b);
    printf("After using SWP, a=%d and b=%d\n", a, b);


}