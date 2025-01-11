#include<stdio.h>

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    struct Rectangle r = {5,10};
    struct Rectangle *p2r = &r;
    printf("&r: %p\n", &r);
    printf("p2r: %p\n", p2r);
    printf("++p2r: %p\n", ++p2r);

}