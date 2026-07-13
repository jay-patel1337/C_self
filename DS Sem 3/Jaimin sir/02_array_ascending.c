// #include <stdio.h>

// int main()
// {
//     int a[5] = {92, 30, 20, 192, 47}; 
//     int temp;
//     for (int i = 0; i < 5; i++)
//     {
//         // int* compare = &a[i];
//         for (int j = 1; j < 5; j++)
//         {
//             if (*compare < a[j])
//             {
//                 a[i] = temp;
//                 temp = *compare;
//                 a[i] = *compare;
//             }
//             // compare++;
//         }
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d\n", a[i]);
//     }
//     return 0;
// }