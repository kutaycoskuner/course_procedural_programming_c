#include <stdio.h>
#include <stdlib.h>
// -------------------------------------------------------
// main
// -------------------------------------------------------

int main()
{
    // function to be called
    float mass = 0;
    float height = 0;
    const float c_gravity = 9.81;

    printf("Welcome to potential energy calculator\n");
    printf("Enter mass of the object: ");
    scanf("%f", &mass);
    printf("Enter height of the object: ");
    scanf("%f", &height);

    float potential_energy = mass * height * c_gravity;

    printf("For the Mass of %.2f and Height of %.2f, Potential energy is: %.3f", mass, height, potential_energy);
    /*
    Answer to question:
    Limitation for this program is integer could contain up to 2147483647
    1. So if any of the parameters, or the result of calculation is greater than this value calculation would be incorrect
    2. Precision is only at integer level
    */


    //
    return 0;
}

