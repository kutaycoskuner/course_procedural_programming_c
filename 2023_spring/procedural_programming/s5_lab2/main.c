// -------------------------------------------------------
// notes
// -------------------------------------------------------
/*

gcc main.c; ./a.exe

Write a program to enter 5 integer numbers and sort them in ascending order and display the sorted numbers on the screen.
Use an array to sture the numbers
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
    const int array_length = 5;
    int array[array_length];

    // get input
    for (int ii = 0; ii < array_length; ii++)
    {
        printf("Please enter number %d: \n", ii + 1);
        scanf("%d", &array[ii]);
    }

    // sort array
    int ii = 0;
    while(ii < array_length)
    {
        if(array[ii] > array[ii+1])
        {
            int temp = array[ii];
            array[ii] = array[ii+1];
            array[ii+1] = temp;
            ii = 0;
            continue;
        }
        ii++;
    }

    // print sorted
    printf("Sorted array: \n");
    for (int ii = 0; ii < array_length; ii++)
    {
        if (ii < array_length-1)
            printf("%d, ", array[ii]);
        else
            printf("%d \n", array[ii]);
    }

    // exit
    return 0;
}

// function definitions
// ----------------------------------------------------------------------------
