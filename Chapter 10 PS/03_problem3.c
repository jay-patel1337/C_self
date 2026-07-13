/*Write a program to read a text file character by character and write its content
twice in separate file.*/

// chatGPT code (to write same sentence twice)

#include <stdio.h>

int main()
{
    char ch;
    FILE *ptr1 = fopen("harry1.txt", "r");
    FILE *ptr2 = fopen("harry2.txt", "w");

    // First copy
    while ((ch = fgetc(ptr1)) != EOF)
        fputc(ch, ptr2);

    // Go back to start
    rewind(ptr1);

    // Second copy
    while ((ch = fgetc(ptr1)) != EOF)
        fputc(ch, ptr2);

    fclose(ptr1);
    fclose(ptr2);

    return 0;
}

// // chatGPT code (to write a single char twice)

// #include <stdio.h>

// int main()
// {
//     char ch;
//     FILE *ptr1;
//     FILE *ptr2;

//     ptr1 = fopen("harry1.txt", "r");
//     ptr2 = fopen("harry2.txt", "w");

//     while ((ch = fgetc(ptr1)) != EOF)
//     {
//         // write twice
//         fputc(ch, ptr2);
//         fputc(ch, ptr2);
//     }

//     fclose(ptr1);
//     fclose(ptr2);

//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     char ch;
//     FILE *ptr1;
//     FILE *ptr2;
//     ptr1 = fopen("harry1.txt", "r");
//     ptr2 = fopen("harry2.txt", "w");
//     while (1)
//     {
//         ch = fgetc(ptr1); // when all the content of a file has been read break the loop
//         if (ch == EOF)
//         {
//             break;
//         }
//         else
//         {
//             fprintf(ptr2, "%c", ch);
//             fprintf(ptr2, "%c", ch);
//             printf("%c", ch);
//         }
//     }
//     fclose(ptr1);
//     fclose(ptr2);
//     return 0;
// }