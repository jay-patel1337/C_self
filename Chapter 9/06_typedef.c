#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code;
    float salary;
    char name[10];
} Emp;
int main()
{
    // typedef int jay;
    // jay a = 34;
    // printf("The value of a is %d\n", a);

    // typedef struct employee Emp;
    Emp e1;
    Emp* ptr = &e1;
    e1.code = 45;
    strcpy(e1.name, "Harry");
    e1.salary = 55.65;

    printf("%d %f %s\n", e1.code, e1.salary, e1.name);
    printf("%d %f %s", ptr->code, ptr->salary, ptr->name);
    return 0;
}