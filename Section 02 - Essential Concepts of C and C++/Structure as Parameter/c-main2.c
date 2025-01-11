#include<stdio.h>

struct Test
{
    int A[5];
    int n;
};

void fun(struct Test t1)
{
    for(int i=0; i<5; i++)
    {
        t1.A[i] = 2*i;
    }
    printf("\nInside:\n");
    for(int i=0; i<5;i++)
    {
        printf("%d\n", t1.A[i]);
    }
}

int main()
{
    struct Test t={{1,2,3,4,5}, 6};
    printf("Before:\n");
    for(int i=0; i<5;i++)
    {
        printf("%d\n", t.A[i]);
    }
    fun(t);
    printf("\nAfter:\n");
    for(int i=0; i<5;i++)
    {
        printf("%d\n", t.A[i]);
    }
}