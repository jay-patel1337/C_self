#include <stdio.h>

int main()
{
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);
    if(marks >= 40 && marks <= 100){
        printf("You passed\n");
    }
    else if(marks >=0 && marks < 40){
        printf("You failed\n");
    }
    else{
        printf("Re-enter marks\n");
    }

    return 0;
}