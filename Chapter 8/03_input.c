#include <stdio.h>

int main(){
    char st[4];
    scanf("%s", st);
    // scanf("%s", &st[0]); // Same as upper one
    printf("%s", st);
    return 0;
}