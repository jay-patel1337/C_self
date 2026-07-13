/*Write a program to generate multiplication table of a given number in text
format. Make sure that the file is readable and well formatted.*/

#include <stdio.h>

int main(){
    int num;
    printf("Enter value of num: ");
    scanf("%d", &num);
    FILE *fptr;
    fptr = fopen("table.txt", "w");
    for (int i = 0; i < 10; i++)
    {
        fprintf(fptr, "%d\n", num*(i+1));
        // fprintf(fptr, "%c", '\n');
    }
    
    return 0;
}