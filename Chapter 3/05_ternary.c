#include <stdio.h>

int main(){
    // condition ? expression-if-true : expression-if-false                    
    int a = 3123;
    int b = 2445;

    int temp;
    // if(a>b){
    //     printf("a is greater");
    // }
    // else{
    //     printf("b is greater");
    // }
    temp = a>b?a:b;
    printf("%d", temp);   
    // a>b?printf("a is greater\n"):printf("b is greater\n");


    // int age1 = 40;
    // int age2 = 50;
    // age1>age2?printf("age1 is greater\n"):printf("age2 is greater\n");
}