// #include <stdio.h>
// int main() {

// char ch;
// printf("Enter a character: ");
// ch = getchar(); // Reads a single character
// printf("You entered: ");
// putchar(ch); // Prints the character
// return 0;
// }

// #include<stdio.h>
// int main()
// {
// int var;
// int flag = 0;
// // using conditional operator to assign the value to var
// // according to the value of flag
// var = flag == 0 ? 25 : -25;
// printf("Value of var when flag is 0: %d\n", var);
// // changing the value of flag
// flag = 1;
// // again assigning the value to var using same statement
// var = flag == 0 ? 25 : -25;
// printf("Value of var when flag is NOT 0: %d", var);
// return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int num, i = 1;
//     printf("Enter the number whose table you want to print\n");
//     scanf("%d", &num);
// table:
//     printf("%d x %d = %d\n", num, i, num * i);
//     i++;
//     if (i <= 10)
//     {
//         goto table;
//     }
// }

#include <stdio.h>

int main() {
    int n, i;

    // Prompt the user to enter an integer
    printf("Enter an integer up to which to display cubes: ");
    
    // Read the integer input from the user
    scanf("%d", &n);

    // Loop from 1 up to the entered integer 'n'
    for (i = 1; i <= n; i++) {
        // Calculate the cube of the current number 'i'
        long long cube = (long long)i * i * i; 
        // Using long long to prevent potential overflow for larger cubes

        // Display the number and its cube
        printf("Number is: %d and cube of %d is: %lld\n", i, i, cube);
    }

    return 0; // Indicate successful program execution
}