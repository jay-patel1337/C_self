#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("harry2.txt", "w");
    // char c = fgetc(ptr);      // used to read a character from file
    // printf("%c", c);
    
    fputc('c', ptr);       // used to write character 'c' to the file
    return 0;
}