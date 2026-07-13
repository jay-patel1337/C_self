/*Write a structure capable of storing date. Write a function to compare those
dates.*/

#include <stdio.h>

struct date
{
    int mm;
    int dd;
    int yyyy;
};

int compare(struct date d1, struct date d2)
{
    if ((d1.yyyy == d2.yyyy) && (d1.mm == d2.mm) && (d1.dd == d2.dd))
    {
        return 0;
    }

    // If d1 is in future return 1
    if (d1.yyyy > d2.yyyy)
    {
        return 1;
    }
    else if (d1.yyyy < d2.yyyy)
    {
        return -1;
    }
    else if (d1.mm > d2.mm)
    {
        return 1;
    }
    else if (d1.mm < d2.mm)
    {
        return -1;
    }
    else if (d1.dd > d2.dd)
    {
        return 1;
    }
    else if (d1.dd < d2.dd)
    {
        return -1;
    }
    else 
    {
        printf("Something went wrong!");
    }
}
int main()
{
    struct date d1 = {13, 3, 1994};
    struct date d2 = {10, 2, 1994};
    printf("%d", compare(d1, d2));
    return 0;
}