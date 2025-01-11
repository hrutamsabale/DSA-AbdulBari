#include<stdio.h>

int main()
{
    int a[5] = {1,2,3,4,5};
    int *p;
    p = a;
    printf("a: %p\n", a);
    printf("p: %p\n", p);
    printf("&a[0]: %p\n", &a[0]);
    printf("&a: %p\n", &a);
    printf("&p: %p\n", &p);
    printf("a[0] = %d\n", a[0]);
    printf("p[0] = %d\n", p[0]);
}