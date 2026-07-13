#include <stdio.h>
#include <string.h>

int main()
{
    // srtlen
    char st[] = "Jay";
    printf("%d\n", strlen(st));

    // strcat
    char a1[56] = "Jay";
    char a2[56] = " bhai";

    strcat(a1, a2); // s1 now contains "Jay bhai" <no space in between if not given>
    printf("%s\n", a1);

    // strcpy
    char target[30];
    strcpy(target, st); // target now contains "Jay"
    printf("%s %s\n", st, target);

    // strcmp
    int a = strcmp("deep", "joke"); // Negative value       /* DJ is negative */
    printf("%d\n", a);              
    int b = strcmp("joke", "deep"); // Positive value       /* JD is positive */
    printf("%d", b);
    return 0;
}