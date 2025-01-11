#include<stdio.h>
#include<stdlib.h>

// int main()
// {
//     int *p2array = malloc(5*sizeof(int));
//     printf("%p\n", p2array);
//     p2array = p2array + 1;
//     printf("%p", p2array);
// }

int main()
{
    int *p2array = malloc(5*sizeof(int));
    for(int i=0; i<5; i++)
    {
        printf("%d\n", *(p2array+i));
    }
    printf("\n");
    for(int i=0; i<5; i++)
    {
        *(p2array+i) = 0;
    }
    for(int i=0; i<5; i++)
    {
        printf("%d\n", *(p2array+i));
    }
}