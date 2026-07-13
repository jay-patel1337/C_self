/*Write a program to find whether a year entered by the user is a leap year or not.
Take year as an input from the user.*/

#include <stdio.h>

int main(){
    int year;
    printf("Enter year: ");
    scanf("%d", &year);

    if((year%4==0 && year%100!=0) || year%400==0){
        printf("This is leap year");
    }
    else{
        printf("This is not leap year");
    }
    return 0;
}

/*"if((year%4==0 && year%100!=0) || year%400==0)"
This says given year should be divisible by 4 and not divisible by 100 "or"
given year should be divisible by 400 only
if we consider &&=0 and ||=1 so we will get answer as yes and vice-versa (Just a example)*/