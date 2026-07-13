#include <stdio.h>
#include <string.h>

struct employee
{
    int code; // This declares a new user defined data type!
    float salary;
    char name[10];
}; // semicolon is important
int main()
{
    struct employee e1;
    e1.code = 45;
    // e1.name = "Harry"; // will not work as it is read-only memory
    strcpy(e1.name, "Harry");
    e1.salary = 55.65;

    printf("%d %.2f %s", e1.code, e1.salary, e1.name);
    return 0;
}