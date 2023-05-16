

// -------------------------------------------------------
// notes
// -------------------------------------------------------
/*
Running the code through this command line:
gcc main.c; ./a.exe
*/

// -------------------------------------------------------
// libraries
// -------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

// -------------------------------------------------------
// function declarations
// -------------------------------------------------------

// -------------------------------------------------------
// main
// -------------------------------------------------------

int main()
{
    // receive input
    int n = 0;
    printf("Please enter a number between 2-10 to calculate factorial:\n");
    scanf("%d", &n);

    // validation
    if ( n<2 || n>10 )
    {
        printf("N is out of range, please enter a number between 2 and 10.\n");
        return 0;
    }

    // calculate factorial value for given input(n)
    int factorialof_n = 1;
    for (int ii=1; ii<=n; ii++)
    {
        factorialof_n *= ii;
    }
    printf("%d! is: %d", n, factorialof_n);

    //
    return 0;
}

// -------------------------------------------------------
// function definitions
// -------------------------------------------------------
