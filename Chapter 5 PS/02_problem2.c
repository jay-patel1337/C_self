// Write a function to convert Celsius temperature into Fahrenheit.

#include <stdio.h>

float c2f(float);

float c2f(float c){
    return ((9*c)/5) + 32;
}

int main(){
    float c;
    printf("Enter c: ");
    scanf("%f", &c);
    printf("Celsius to Fahrenheit for %f is %.2f", c, c2f(c));
    return 0;
}