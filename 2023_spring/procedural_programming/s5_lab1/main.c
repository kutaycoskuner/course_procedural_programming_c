// -------------------------------------------------------
// notes
// -------------------------------------------------------
/*

gcc main.c; ./a.exe

Write a program which asks for six float values and uses a one-dimensional array to store these values.
Multiply the first three vale of the array by 2, the last three values by 3.
Print out the resulting arraya in reverse order
and print out the largest value on the array.


*/

// libraries
// ----------------------------------------------------------------------------
#include <stdio.h>

// function declarations
// ----------------------------------------------------------------------------

// main
// ----------------------------------------------------------------------------

int main()
{
    // variables
    const int array_length = 6;
    float array[array_length];
    float array_calculated[array_length];
    float largest;
    float largest_position;


    // input numbers
    for (int ii = 0; ii < array_length; ii++)
    {
        printf("Please enter number %d: \n", ii + 1);
        scanf("%f", &array[ii]);
    }

    // calculate outputs
    for (int ii = 0; ii < array_length; ii++)
    {
        if (ii < 3)
        {
            array_calculated[ii] = array[ii] * 2;
            continue;
        }
        array_calculated[ii] = array[ii] * 3;
    }

    // print out in reverse
    for (int ii = array_length;  ii > 0; ii--)
    {
        printf("For Entered value: %.2f in position %d Calculated value is: %.2f\n", array[ii-1], ii, array_calculated[ii-1]);
    }

    // find largest
    for (int ii=0; ii < array_length; ii++)
    {
        if(ii==0)
            largest = array_calculated[ii];
        if(array_calculated[ii] > largest)
            largest = array_calculated[ii];
    }
    printf("Largest calculated value is: %.2f\n", largest);

    // exit
    return 0;
}

// function definitions
// ----------------------------------------------------------------------------
