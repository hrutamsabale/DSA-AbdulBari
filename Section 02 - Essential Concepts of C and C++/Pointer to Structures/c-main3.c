#include<stdio.h>
#include<stdlib.h>

struct Rectangle
{
    int length;
    int breadth;
};

// int main()
// {
//     struct Rectangle r = {5,10};
//     struct Rectangle *p2r = &r;
//     printf("Length: %d\n", p2r->length);
//     printf("Breadth: %d\n", p2r->breadth);

// }

int main()
{
    struct Rectangle *p2r = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    printf("Length: %d\n", p2r->length);
    printf("Breadth: %d\n", p2r->breadth);

}