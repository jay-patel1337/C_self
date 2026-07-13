#include <stdio.h>
struct Student
{
    int roll;
    char name[20];
    float marks;
};

int main()
{
    struct Student s[3] = {
        {101, "Alice", 88.5},
        {102, "Bob", 76.0},
        {103, "Carol", 92.3}};

    printf("%-5s %-10s %-6s\n", "Roll", "Name", "Marks");
    printf("-------------------------------\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%-5d %-10s %.1f\n",
               s[i].roll, s[i].name, s[i].marks);
    }
    return 0;
}