#include <stdio.h>

int main(){
    // char st[] = {'a', 'b', 'c', '\0'};
    char st[] = "Jay"; // Same as doing char st[] = {'a', 'b', 'c', '\0'};
    for (int i = 0; i < 3; i++)
    {
        printf("%c", st[i]);
    }
    printf("\n%s", st); 
    
    return 0;
}