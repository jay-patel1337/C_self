/*Try problem 3 using call by value and verify that it does not change the value of
the said variable.*/

#include <stdio.h>
void change_to_ten_times(int);

void change_to_ten_times(int a){
    a = 20;
    a = a * 10;
    printf("%d\n", a);
}
int main(){
    int x = 25;
    printf("The value of x is %d\n", x);
    change_to_ten_times(x);
    printf("The value of x is %d\n", x);
    // Can not change the x here by just giving copy value of it we need address to change it
    
    return 0;
}