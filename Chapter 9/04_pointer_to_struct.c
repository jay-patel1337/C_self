#include <stdio.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};
int main()
{
    struct employee e1;
    struct employee *ptr;
    e1.code = 56;
    ptr = &e1;
    // now we can print structure elements using:
    // printf("%d\n", (*ptr).code);
    printf("%d", ptr->code); // Same as printf("%d\n", (*ptr).code);

    return 0;
}