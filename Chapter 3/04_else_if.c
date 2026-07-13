#include <stdio.h>

int main()
{
    /*This is by code with harry*/
    int age = 60;

    if (age >= 60)
    {
        printf("You can drive and you are a senior citizen\n");
    }
    else if (age >= 40)
    {
        printf("You can drive and you are elder\n");
    }
    else if (age > 18)
    {
        printf("You can drive\n");
    }
    else
    {
        printf("You can not drive\n");
    }

    /*This is by me*/
    int a = 3000;
    if (a >= 5000)
    {
        printf("you can buy a good headphone\n");
    }

    else if (a >= 3000)
    {
        printf("you can buy a headphone\n");
    }

    else if (a > 1000)
    {
        printf("you can not buy a headphone but can buy a earbud\n");
    }

    else
    {
        printf("you can not buy a headphone\n");
    }
    return 0;
}
