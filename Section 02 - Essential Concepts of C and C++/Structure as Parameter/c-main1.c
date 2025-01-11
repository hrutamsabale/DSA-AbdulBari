#include<stdio.h>

struct Rectangle
{
    int length;
    int breadth;
};

void changeLen(struct Rectangle *p, int new_l)
{
    p -> length = new_l;
}

int main()
{
    struct Rectangle r = {10,20};
    printf("Before: Length = %d\n", r.length);
    changeLen(&r, 50);
    printf("After: Length = %d\n", r.length);
}