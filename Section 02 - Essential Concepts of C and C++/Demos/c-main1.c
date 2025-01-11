#include<stdio.h>

int area(int len, int bred)
{
    return len*bred;
}

int peri(int len, int bred)
{
    return 2*(len+bred);
}

int main()
{
    int l=0,b=0,a=0,p=0;
    printf("Length: ");
    scanf("%d", &l);
    printf("\nBreadth: ");
    scanf("%d", &b);
    printf("Area: %d", area(l,b));
    printf("\nPerimeter: %d", peri(l,b));
}