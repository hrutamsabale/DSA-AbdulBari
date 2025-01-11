#include<stdio.h>

struct Rectangle
{
    int len;
    int bred;
};

void initialise(struct Rectangle *r, int length, int breadth)
{
    r -> len = length;
    r -> bred = breadth;
}

int area(struct Rectangle r)
{
    return r.len*r.bred;
}

int peri(struct Rectangle r)
{
    return 2*(r.len+r.bred);
}

int main()
{
    struct Rectangle r1;
    int l,b;
    printf("Length: ");
    scanf("%d", &l);
    printf("Breadth: ");
    scanf("%d", &b);
    initialise(&r1,l,b);
    printf("Area: %d", area(r1));
    printf("\nPerimeter: %d", peri(r1));
}