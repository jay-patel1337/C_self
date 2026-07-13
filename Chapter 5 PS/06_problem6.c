// Write a recursive function to calculate the sum of first ‘n’ natural numbers.

#include <stdio.h>

int sum_natural(int);

int sum_natural(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return sum_natural(n - 1) + n;
}

int main()
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);
    printf("The sum of first %d natural numbers is %d", number, sum_natural(number));
    return 0;
}