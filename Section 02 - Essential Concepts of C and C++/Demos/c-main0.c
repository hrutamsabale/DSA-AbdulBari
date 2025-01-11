#include<stdio.h>

int main()
{
    int l,b,a,p;
    printf("Length: ");
    scanf("%d", &l);
    printf("\nBreadth: ");
    scanf("%d", &b);
    a = l*b;
    p = 2*(l+b);
    printf("Area: %d", a);
    printf("\nPerimeter: %d", p);

}