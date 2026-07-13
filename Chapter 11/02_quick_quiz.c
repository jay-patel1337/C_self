#include <stdio.h>
#include <stdlib.h>

int main(){
    float n = 5;
    float* ptr;
    ptr = (float*) malloc(n * sizeof (float));
    // int arr[n]; // Not allowed in c
    ptr [0] = 75.5;
    ptr [1] = 76.05;
    ptr [2] = 65.88;
    ptr [3] = 61.77;
    ptr [4] = 62.11;
    // printf("%f", ptr[0]);
    for (int i = 0; i < 5; i++)
    {
        printf("%.2f\n", ptr[i]);
    }
    
    return 0;
}