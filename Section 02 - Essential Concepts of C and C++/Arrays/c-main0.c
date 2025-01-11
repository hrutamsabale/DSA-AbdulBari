#include<stdio.h>
int main()
{
    int A[5] = {0};
    for(int i=0;i<5;i++)
    {
        printf("%d\n", A[i]);
    }
    printf("%d", A[10]);
}