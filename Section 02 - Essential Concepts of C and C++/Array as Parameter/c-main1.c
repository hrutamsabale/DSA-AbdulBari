#include<stdio.h>

void doubled(int *p, int n)
{
    for(int i=0; i<n;i++)
    {
        p[i] = p[i]*2;
    }
    printf("INSIDE:\n");
    for(int i=0; i<n;i++)
    {
        printf("%d\n", p[i]);
    }
}

int main()
{
    int X[5] = {1,2,3,4,5};
    printf("Before:\n");
    for(int i=0; i<5;i++)
    {
        printf("%d\n", X[i]);
    }
    doubled(X, 5);
    printf("After:\n");
    for(int i=0; i<5;i++)
    {
        printf("%d\n", X[i]);
    }
}