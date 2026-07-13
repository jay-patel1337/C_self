/*Write a program to convert Celsius (Centigrade degrees temperature to
Fahrenheit).*/

#include <stdio.h>

int main(){
    float c = 37.0;
    float f;

    f = ((9.0/5.0)*c) + 32;
    printf("The reading is %f", f);

    return 0;
}