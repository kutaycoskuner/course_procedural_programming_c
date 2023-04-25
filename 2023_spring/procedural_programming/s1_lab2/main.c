#include <stdio.h>
#include <stdlib.h>
// -------------------------------------------------------
// main
// -------------------------------------------------------

int main()
{
    // function to be called
    unsigned int mass = 0;
    int acceleration = 0;

    printf("Welcome to force calculator\n");
    printf("Please enter the mass of the object: ");
    scanf("%d", &mass);
    printf("Please enter the acceleration of the object: ");
    scanf("%d", &acceleration);

    int force = mass * acceleration;

    printf("For the Mass of %d and Acceleration of %d, Force is: %d", mass, acceleration, force);
    /*
    Answer to question:
    Limitation for this program is integer could contain up to 2147483647
    1. So if any of the parameters, or the result of calculation is greater than this value calculation would be incorrect
    2. Precision is only at integer level
    */


    //
    return 0;
}
