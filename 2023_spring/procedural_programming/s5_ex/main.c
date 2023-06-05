// notes
// -------------------------------------------------------
/*

gcc main.c; ./a.exe

Write a C program that converts a decimal number N into the corresponding binary number with 5 digits. Use a function “d2b(int n)” in order to convert the decimal number N into a binary number. The calculated binary number should be printed out by the function.  The function should return no value. The program shall ask the user for the number N. The allowed range for N is between 0 and 31. If the user enters a value for N which is not in the allowed range, the message “N is out of range, please enter a number between 0 and 31 should appear”. The input of N and the range checking should be handled by the main function. "Note that the function d2b does not need to be able to handle numbers bigger than 31. Therefore you can keep the algorithm relatively simple" Example: The user enters 26 => 11010

*/

// libraries
// -------------------------------------------------------
#include <stdio.h>

// function declarations
// -------------------------------------------------------
void d2b(int n);
void ex5_5();

// main
// -------------------------------------------------------

int main()
{
    ex5_13();

    // exit
    return 0;
}

// function definitions
// -------------------------------------------------------
void ex5_5()
{
    // request input
    int array[10];
    array[2] = 10;
    array[4] = 9;

    printf("Array elements index 3,5 respectively: %.2d, %.2d", array[2], array[4]);
}

void ex5_8()
{
    const int num_students = 25;
    char marks[num_students];

    // for (int ii = 65; ii < num_students + 65; ii++)
    // {
    //     marks[ii-65] = ii;
    // }

    for (int ii = 0; ii < num_students; ii++)
    {
        printf("%c \n", marks[ii]);
    }
}

void ex5_13()
{
    printf("%d \n", arr1[1][2]);
    printf("%d \n", arr2[1][2]);
}
