#include<stdio.h>

int factorial(int a)
{
    if(a==1 || a==0)
    {
        return 1;
    }
    else{
        return a*factorial(a-1);
    }
}
int main()
{
    printf("%d", factorial(2));
}