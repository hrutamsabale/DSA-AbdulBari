#include<stdio.h>

struct Rectangle
{
    int length;
    int breadth;
};

int area(struct Rectangle r1)
{
    int area;
    area = r1.length*r1.breadth;
    return area;
}

int main()
{
    struct Rectangle r = {10,5};
    printf("Area: %d", area(r));
}