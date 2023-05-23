// -------------------------------------------------------
// notes
// -------------------------------------------------------
/*

gcc main.c; ./a.exe

Write a C program that converts a decimal number N into the corresponding binary number with 5 digits. Use a function “d2b(int n)” in order to convert the decimal number N into a binary number. The calculated binary number should be printed out by the function.  The function should return no value. The program shall ask the user for the number N. The allowed range for N is between 0 and 31. If the user enters a value for N which is not in the allowed range, the message “N is out of range, please enter a number between 0 and 31 should appear”. The input of N and the range checking should be handled by the main function. "Note that the function d2b does not need to be able to handle numbers bigger than 31. Therefore you can keep the algorithm relatively simple" Example: The user enters 26 => 11010

*/

// -------------------------------------------------------
// libraries
// -------------------------------------------------------
#include <stdio.h>

// -------------------------------------------------------
// function declarations
// -------------------------------------------------------
void d2b(int n);

// -------------------------------------------------------
// main
// -------------------------------------------------------

int main()
{
    // request input
    int n;
    printf("Please enter a decimal number:\n");
    scanf("%d", &n);

    // validate input
    if (n < 0 || n > 31)
    {
        printf("N is out of range, please enter a number between 0 and 31.\n");
        return 0;
    }

    // calculate and print value
    d2b(n);

    // exit
    return 0;
}

// -------------------------------------------------------
// function definitions
// -------------------------------------------------------
void d2b(int n)
{
    int division = n;
    int binaryof_n;
    int b0, b1, b2, b3, b4;

    b0 = division % 2;
    division = division / 2;
    b1 = division % 2;
    division = division / 2;
    b2 = division % 2;
    division = division / 2;
    b3 = division % 2;
    division = division / 2;
    b4 = division % 2;
    division = division / 2;

    printf("Binary equivalent of decimal %d is: %d%d%d%d%d", n, b4, b3, b2, b1, b0);
}
