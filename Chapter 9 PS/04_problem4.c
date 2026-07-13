// Write a program to illustrate the use of arrow operator → in C.

#include <stdio.h>

typedef struct Emp
{
    int salary;
    float score;
}employee;

int main(){
    employee e1;
    employee* ptr = &e1;
    // (*ptr).salary = 56;
    // (*ptr).score = 8.7;
    ptr->salary = 56;
    ptr->score = 8.7;
    printf("The value of salary is %d and the value of score is %f\n", ptr->salary, ptr->score);
    

    return 0;
}




