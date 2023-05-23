// -------------------------------------------------------
// notes
// -------------------------------------------------------
/*

gcc main.c; ./a.exe

Write a program that prints out the minimum of three entered integer numbers. A separate function “int findMin(int x1,int x2,int x3” has to be implemented comparing the values of three integer variables x1, x2, x3. It can be assumed that their values are different pairwise (x1≠x2≠x3). The function shall return the smallest value of these! The input of the three integer values and as well the output of the smallest value should be handled by the main function. Don’t use global variables.

*/

// -------------------------------------------------------
// libraries
// -------------------------------------------------------
#include <stdio.h>

// -------------------------------------------------------
// function declarations
// -------------------------------------------------------
int findMin(int x1, int x2, int x3);

// -------------------------------------------------------
// main
// -------------------------------------------------------

int main()
{
    // input numbers
    int x, y, z;
    printf("Please enter first number: \n");
    scanf("%d", &x);
    printf("Please enter second number: \n");
    scanf("%d", &y);
    printf("Please enter third number: \n");
    scanf("%d", &z);

    // calculate and print
    printf("Smallest of the given numbers is: %d", findMin(x,y,z));

    return 0;
}

// -------------------------------------------------------
// function definitions
// -------------------------------------------------------
int findMin(int x1, int x2, int x3)
{
    int min;
    if (x1 > x2)
    {
        if (x2 >= x3)
            min = x3;
        else
            min = x2;
    }
    else
    {
        if (x1 >= x3)
            min = x3;
        else
            min = x1;
    }
    return min;
}