#include <stdio.h>

int main(){
    int i = 72;
    int* j = &i; // j is a pointer pointing to i(j is an integer pointer)
    int a = 67;
    printf("The address of i is %p\n", &i);// Can use %u also for integer value u ---> unsigned int (Can not be negative)
    printf("The address of i is %p\n", j);
    printf("The address of a is %p\n", &a);

    printf("The value at address j is %d\n", *(&i));// Same for *j // %d here is used cuz value is in integer
    return 0;
}