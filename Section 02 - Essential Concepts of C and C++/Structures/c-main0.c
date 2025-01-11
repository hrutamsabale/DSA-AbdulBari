#include<stdio.h>

// int main()
// {
//     struct Rectangle
//     {
//         int length;
//         int breadth;
//     };

//     struct Rectangle a1={4,5};
//     printf("Length: %d \nBreadth: %d", a1.length, a1.breadth);
// }

// int main()
// {
//     struct Rectangle
//     {
//         int length;
//         int breadth;
//     };

//     struct Rectangle rec[3] = {{1,2}, {3,4}};
//     for (int i=0; i<3;i++)
//     {
//         printf("Rectangle: %d. Length: %d, Breadth: %d\n", i+1, rec[i].length, rec[i].breadth);
//     }
// }

int main()
{
    struct Rectangle
    {
        int length;
        int breadth;
        char x;
    };

    struct Rectangle r;
    printf("Size: %d", sizeof(r));
}
