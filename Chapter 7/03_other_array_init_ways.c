#include <stdio.h>

int main(){
    int cgpa[] = {8, 9, 8}; // It automatically counts the number of values so no need to type cgpa[3]
    for (int i = 0; i < 3; i++)
    {
        printf("The value of array at index %d is %d\n", i, cgpa[i]);
    }
    
    return 0;
}