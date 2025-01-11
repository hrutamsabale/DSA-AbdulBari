#include<stdio.h>

int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int main()
{
    int n1, n2, res;
    n1 = 11;
    n2 = 13;
    res = add(n1, n2);
    printf("Sum = %d", res);
    return 0;
}