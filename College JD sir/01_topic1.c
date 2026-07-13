#include <stdio.h>

int main(){
    int marks;
    // a = 17%2;
    // printf("%d", a);
    printf("Enter marks: ");
    scanf("%d", &marks);
    if(marks < 0){
        printf("Re-enter the marks");
    }
    else if(marks > 30){
        printf("Re-enter the marks");
    }
    else{
        printf("The entered marks is valid");
    }

    return 0;
}