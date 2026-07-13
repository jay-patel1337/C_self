#include <stdio.h>

int main()
{
    int arr[2][3];
    int arr[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter values: ");
            scanf("%d", &arr[i][j]);
        }    
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("arr[%d][%d] = %d\t", i, j, arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}