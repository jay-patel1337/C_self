#include <stdio.h>

// Function prototype
int sum(int, int);

// Function definition
int sum(int x, int y)
{
    // printf("The sum is %d\n", x+y);
    return x + y;
}
int main()
{
    int a = 1;
    int b = 2;
    // int c = a + b;
    // printf("The sum is %d\n", c);
    int c = sum(a, b); // Function call
    printf("%d\n", c);

    int a1 = 10;
    int b1 = 20;
    // int c1 = a1 + b1;
    // printf("The sum is %d\n", c1);
    int c1 = sum(a1, b1); // Function call
    printf("%d\n", c1);

    int a2 = 4;
    int b2 = 6;
    // int c2 = a2 + b2;
    // printf("The sum is %d\n", c2);
    int c2 = sum(a2, b2); // Function call
    printf("%d\n", c2);

    int c3 = sum(7, 8);
    printf("%d\n", c3);
    return 0;
}