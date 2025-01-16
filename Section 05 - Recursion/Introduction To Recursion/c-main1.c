#include<stdio.h>

void fun2(int n)
{
    if(n>0)
    {
        fun2(n-1);
        printf("%d ", n);
    }
}

int main()
{
    fun2(5);
}