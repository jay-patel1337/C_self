// Write a program using function to find average of three numbers.

#include <stdio.h>

float average(int a, int b, int c);

float average(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}

int main()
{
    int a;
    int b;
    int c;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);
    printf("The average of a, b and c is %f", average(a, b, c));
    return 0;
}