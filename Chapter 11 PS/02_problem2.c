#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 6;
    int *ptr;

    ptr = (int *)malloc(6 * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter values: ");
        scanf("\n%d", &ptr[i]);
    }

    for (int j = 0; j < n; j++)
    {
        printf("%d\n", ptr[j]);
    }

    return 0;
}