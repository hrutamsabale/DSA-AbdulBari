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
    printf("Normally: %d\n", r.length);
    (*p2r).length = 20;
    printf("Using complex method: %d\n", r.length);
    p2r -> length = 40;
    printf("Using simple method: %d\n", r.length);

}