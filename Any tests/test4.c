#include <stdio.h>
#include <math.h>

int main()
{
    int r = 10;               // radius
    float aspect_ratio = 2.0; // to make circle look proper in console

    for (int y = -r; y <= r; y++)
    {
        for (int x = -r; x <= r; x++)
        {
            if ((x * x + (y * aspect_ratio) * (y * aspect_ratio)) <= r * r)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
