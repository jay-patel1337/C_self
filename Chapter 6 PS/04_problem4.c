// Write a function and pass the value by reference.

#include <stdio.h>
void change_to_ten_times(int*);

// x should be changed by a
void change_to_ten_times(int* a){
    *a = 10;
    *a = *a * 10;
}
int main(){
    int x = 25;
    int *p = &x;
    printf("The value of x is %d\n", x);
    change_to_ten_times(&x);
    printf("The value of x is %d\n", x);

    return 0;
}