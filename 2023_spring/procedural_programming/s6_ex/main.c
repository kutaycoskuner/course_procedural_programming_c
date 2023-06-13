// -------------------------------------------------------
// notes
// -------------------------------------------------------
/*

gcc main.c; ./a.exe


*/

// libraries
// ----------------------------------------------------------------------------
#include <stdio.h>

// function declarations
// ----------------------------------------------------------------------------
void ex6_4();
void ex6_5();
void ex6_6();
void ex6_7();
void triple(int* x);


// main
// ----------------------------------------------------------------------------

int main()
{
    // ex6_4();
    // ex6_5();
    // ex6_6();
    // ex6_7();

    int num = 3;
    triple(&num);
    printf("The entered number tripled in main function is: %d \n", num);
    
        


    // exit
    return 0;
}

// function definitions
// ----------------------------------------------------------------------------
void ex6_4()
{
    int x = 4;
    int y = 8;
    int* i = &x;
    int* j = &y;

    printf("\nThe address of x: %p and the value of x: %d", i, x);
    printf("\nThe value of i: %p and the value of *i: %d", i, *i);
    printf("\nThe address of y: %p and the value of y: %d", j, y);
    printf("\nThe value of j: %p and the value of *j: %d", j, *j);
    printf("\nThe address of i: %p", &i);
    printf("\nThe address of j: %p", &j);

}

void ex6_5()
{
    int w = 6;
    int x = 2;
    int y;
    int z;

    int* w_ptr = &w;
    int* x_ptr = &x;
    int* y_ptr = &y;
    int* z_ptr = &z;

    // this fails 
    // *x_ptr = &x;

}
/*
Declare three integer variables x,y,z and three integer pointer variables i,j,k. Assign three different values to x,y. Set i,j,k to the addresses of x,y,z correspondingly.
a- print the values of integer variables x,y,z, and the integer pointer variables i,j,k with labels.
b- Print the message: substituting values.
c- Run the substitution code: z=x; x=y; y=z;
d- print the values of x,y,z,i,j,k,*i,*j,*k with labels.
*/
void ex6_6()
{
    int x = 3; int y = 4; int z = 6;
    int* i = &x;
    int* j = &y;
    int* k = &z;

    printf("\nInteger x: %d \t Pointer i: %p", x, i);
    printf("\nInteger y: %d \t Pointer j: %p", y, j);
    printf("\nInteger z: %d \t Pointer k: %p", z, k);

    printf("\nSubstituting values:");
    z=x; x=y; y=z;

    printf("\nInteger x: %d \t Pointer i: %p \t Pointer targeting value: %d", x, i, *i);
    printf("\nInteger y: %d \t Pointer j: %p \t Pointer targeting value: %d", y, j, *j);
    printf("\nInteger z: %d \t Pointer k: %p \t Pointer targeting value: %d", z, k, *k);
}
/*
Assuming following declarations:
    int array[] = {1,2,3,4,5,6};
    int* array_pntr = array;
    State the value of following expressinos
*/
void ex6_7()
{
    int array[] = {1,2,3,4,5,6};
    int* array_pntr = array;
    
    printf("\narray_pntr[4] : %d %p", array_pntr[4], array_pntr[4]);
    printf("\n*array_pntr + 4 : %d %p", *array_pntr + 4, *array_pntr + 4);
}

void triple(int* x)
{
    printf("The number to be triped is: %d \n", *x);
    *x = *x * 3; // other but equivalent expression: *x *= 3;
    printf("The number tripled in triple function is %d  \n",  *x);
}