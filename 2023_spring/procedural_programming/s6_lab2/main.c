// notes
// ----------------------------------------------------------------------------
/*

gcc main.c; ./a.exe

*/

// libraries
// ----------------------------------------------------------------------------
#include <stdio.h>

// function declarations
// ----------------------------------------------------------------------------
void cubeMinus3(int x, int* result);

// abstract
// ----------------------------------------------------------------------------

// main
// ----------------------------------------------------------------------------

int main()
{
    int array[4] = {0, 10, 20, 30};
    int* p_array = array;

    long int array2[4] = {0, 10, 20, 30};
    long int* p_array2 = array2;

    double array3[4] = {0, 10, 20, 30};
    double* p_array3 = array3;

    // task a: 
    /*
        Define an array of integers that contains the following values: 0, 10, 20 and 30
        (no user input required).
        Then output the address of the first array element and the address of the second
        array element. Can you tell how many bytes your machines reserves for a long
        integer? Write this as a comment into your source code.
    */
    printf("address of 1st element: %d \n", p_array);
    printf("address of 2st element: %d \n", p_array+1);

    printf("address of 1st element: %d \n", p_array2);
    printf("address of 2st element: %d \n", p_array2+1);

    printf("address of 1st element: %d \n", p_array3);
    printf("address of 2st element: %d \n", p_array3+1);

    // difference in size between first and second element of array is 4 bytes it is the same for long as well.

    // task b:
     /*
        Write a function void cubeMinus3(int x, int *result). The
        parameter 'x' contains the value with which the calculation is to be performed.
        The parameter result is a pointer to the variable that is to contain the result of
        the calculation 'x power 3 minus 3'. Note that this function does not return a
        value - it uses the pointer 'result' to output the result of the calculation.
        Write a program that allows you to enter an integer, passes that number to the
        function cubeMinus3 (int x, int *result), and then outputs the value calculated
        by the function. Note: You must declare two integer variables in your main
        function. Use the & operator to pass the address of the result variable to the
        functioncubeMinus3. Within the function cubeMinus3 you need the *-
        operator.
     */
    int x;
    int result;
    int p_result = &result;

    printf("Enter an integer x: \n");
    scanf("%d", &x);
    cubeMinus3(x, p_result);
    printf("%d cube minus three is: %d \n", x, result);

    // exit
    return 0;
}

// function definitions
// ----------------------------------------------------------------------------
void cubeMinus3(int x, int* result)
{
    *result = x * x * x - 3;
}