// Write a program to find greatest of four numbers entered by the user.

#include <stdio.h>

int main()
{
    int n1, n2, n3, n4;
    printf("Enter number: ");
    scanf("%d", &n1);
    printf("Enter number: ");
    scanf("%d", &n2);
    printf("Enter number: ");
    scanf("%d", &n3);
    printf("Enter number: ");
    scanf("%d", &n4);

    if (n1 > n2 && n1 > n3 && n1 > n4)
    {
        printf("Number 1 is the greatest and that is %d", n1);
    }
    else if (n2 > n1 && n2 > n3 && n2 > n4)
    {
        printf("Number 2 is the greatest and that is %d", n2);
    }
    else if (n3 > n1 && n3 > n2 && n3 > n4)
    {
        printf("Number 3 is the greatest and that is %d", n3);
    }
    else
    {
        printf("Number 4 is the greatest and that is %d", n4);
    }
    return 0;
}