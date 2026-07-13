/*
1 ->
*
**
***
****  (Done)
#include <stdio.h>

int main(){
    for (int i = 1; i <= 4 ; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

2 ->
****
***
**
*  (Done)
#include <stdio.h>

int main(){
    for (int i = 1; i <= 4 ; i++)
    {
        for (int j = 4; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

3 ->
    *
   * *
  * * *
 * * * *  (Done)
#include <stdio.h>

int main(){
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 4; j >= i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf(" *");
        }
        printf("\n");
    }

    return 0;
}

4 ->
1
12
123
1234  (Done)
#include <stdio.h>

int main(){
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}

5 ->
4321
432
43
4  (Done)
#include <stdio.h>

int main(){
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 4; j >= i; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

6 ->
1234
123
12
1  (Done)
#include <stdio.h>

int main(){
    int n = 4;
    for (int i = 1; i <= 4; i++)
    {
            for (int j = 1; j <= n; j++)
            {
            printf("%d", j);
        }
        n--;
        printf("\n");
    }

    return 0;
}

7 ->
11 12 13
21 22 23
31 32 33  (Done)
#include <stdio.h>

int main(){
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            printf("%d%d ", i, j);
        }
        printf("\n");
    }

    return 0;
}

8 ->
11
21 22
31 32 33  (Done)
#include <stdio.h>

int main(){
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d%d ", i, j);
        }
        printf("\n");
    }

    return 0;
}

9 ->
    1
   1 2
  1 2 3
 1 2 3 4  (Done)
#include <stdio.h>

int main(){
    for (int i = 1; i < 5; i++)
    {
        for (int j = 4; j > i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf(" %d", k);
        }
        printf("\n");
    }

    return 0;
}

10 ->
 1 2 3 4
  1 2 3
   1 2
    1  (Done)
#include <stdio.h>

int main(){
    int n =5;
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf(" ");
        }
        for(int k = 1; k < n; k++)
        {
            printf(" %d", k);
        }
        n--;
        printf("\n");
    }

    return 0;
}

11 ->
* * * * *
  * * *
    *
  * * *
* * * * * 
// Code by ChatGPT(Just for logic)
*/
#include <stdio.h>

int main() {
    int n = 5;          // total rows (must be odd for this shape)
    int mid = n / 2;    // middle row index

    // upper half (including middle)
    for (int i = 0; i <= mid; i++) {
        // spaces (two spaces so alignment matches "* ")
        for (int s = 0; s < i; s++)
            printf("  ");
        // stars
        int stars = n - 2 * i;
        for (int j = 0; j < stars; j++)
            printf("* ");
        printf("\n");
    }

    // lower half (mirror of upper)
    for (int i = mid - 1; i >= 0; i--) {
        for (int s = 0; s < i; s++)
            printf("  ");
        int stars = n - 2 * i;
        for (int j = 0; j < stars; j++)
            printf("* ");
        printf("\n");
    }

    return 0;
}
