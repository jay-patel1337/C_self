// Write a program to check whether a given number is prime or not using loops.

#include <stdio.h>

int main()
{
    // ChatGPT code
    // int n;
    // scanf("%d", &n);
    // int prime = 1;
    // for (int i = 2; i < n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         prime = 0;
    //         break;
    //     }
    // }
    // if (prime)
    // {
    //     printf("%d is a prime number\n", n);
    // }
    // else
    // {
    //     printf("%d is not a prime number\n", n);
    // }

    // CodeWithHarry
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int not_prime = 0;
    if (n == 0 || n == 1)
    {
        not_prime = 1;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0 && n != 2)
            {
                not_prime = 1;
                break;
            }
        }
    }
    if (not_prime)
    {
        printf("%d is not a prime number\n", n);
    }
    else
    {
        printf("%d is a prime number\n", n);
    }

    return 0;
}