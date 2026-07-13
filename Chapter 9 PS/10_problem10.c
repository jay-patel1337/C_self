// Solve problem 9 for time using ‘typedef’ keyword.

#include <stdio.h>

typedef struct date
{
    int mm;
    int dd;
    int yyyy;
}DT;

int compare(DT d1, DT d2)
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
}
int main()
{
    DT d1 = {13, 3, 2007};
    DT d2 = {10, 2, 1994};
    printf("%d", compare(d1, d2));
    return 0;
}