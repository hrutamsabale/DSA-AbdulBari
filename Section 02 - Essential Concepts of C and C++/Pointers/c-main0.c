#include<stdio.h>

int main()
{
    int x = 10;
    int *p2x;
    p2x = &x;
    printf("Address of location lebelled by 'x': %p\n", p2x);
    printf("Value at address pointed by p2x, Before: %d\n", *p2x);
    *p2x = 12;
    printf("Value at address pointed by p2x, After: %d\n", *p2x);
    p2x = (int*)0x000000000061FE4;
    printf("Value the address manually assigned to p2x, Even after: %d\n", *p2x);
}

