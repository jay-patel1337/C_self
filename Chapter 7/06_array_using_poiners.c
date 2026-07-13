#include <stdio.h>

int main(){
    int marks[] = {34, 76, 89, 90};

    // int* ptr = &marks[0];
    int* ptr = marks; // Same as int* ptr = &marks[0];

    for (int i = 3; i >= 0; i--)
    {
        printf("The value of marks at index %d is %d\n", i, marks[i]);
        // printf("The value of marks at index %d is %d\n", i, *(ptr+i));
        printf("The value of marks at index %d is %d\n", i, (ptr+i));
        printf("The value of marks at index %d is %u\n", i, ptr);
        printf("The value of marks at index %d is %d\n", i, *ptr);
        // printf("The value of marks at index %d is %d\n", i, &i);
        ptr++;
    }
    //use (ptr+i) to not change the ptr value (works as a temporary use of ptr)
    return 0;
}
