/*Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
earth. Consider g = 9.8m/s^2.*/

#include <stdio.h>

float force(float);
float force(float mass)
{
    return mass * 9.8;
}

int main()
{
    float m;
    printf("Enter m: ");
    scanf("%f", &m);
    printf("The value of force is %.2f", force(m));
    return 0;
}

// WRITTEN BY ME :
// float Force(float, float);
// float Force(float mass, float g){
//     return mass*g;
// }

// float g = 9.8;
// printf("The force of attraction of mass %f is %.2f", m, Force(m,g));