#include <stdio.h>

int main(){
    int i = 8;
    int* j = &i;
    int** k = &j;
    int*** u = &k;

    printf("Address of i is %p\n", &i);
    printf("Address of i is %p\n", j);
    printf("Address of j is %p\n", k);
    printf("Address of k is %p\n", u);

    printf("Value at address of i is %d\n", *j);
    return 0;
}