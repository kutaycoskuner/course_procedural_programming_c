// -------------------------------------------------------
// notes
// -------------------------------------------------------
/*

gcc main.c; ./a.exe

*/

// -------------------------------------------------------
// libraries
// -------------------------------------------------------
#include <stdio.h>

// -------------------------------------------------------
// function declarations
// -------------------------------------------------------
void Display_Stars();
float calc_square(float x);
int ex4_11();
int fibonacci(int n);
void print_fibonacci(unsigned int n);

// -------------------------------------------------------
// main
// -------------------------------------------------------

int main()
{
    int n;
    printf("Please enter number of fibonacci terms you want to print:\n");
    scanf("%d", &n);
    print_fibonacci(n);
    //
    return 0;
}

// -------------------------------------------------------
// function definitions
// -------------------------------------------------------
int ex4_11()
{
    int y = 10; // Internal declaration
    y++;        // Internal variable
    return y;
}

void Display_Stars(void)
{
    for (int y = 1; y <= 10; ++y)
    {
        printf("*");
    }
}

float calc_square(float x)
{
    return x * x;
}

int fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return (fibonacci(n - 1) + fibonacci(n - 2));
}

void print_fibonacci(unsigned int n)
{
    int fib_x = 0, fib_y = 1;
    if (n > 0)
    {
        printf("First %d terms of Fibonacci sequence are: \n", n);
        printf("%d ", fib_x);
    }
    if (n > 1)
        printf("%d ", fib_y);
    if (n > 2)
    {
        int fib;
        for (int ii = 2; ii < n; ii++)
        {
            fib = fib_x + fib_y;
            fib_y = fib;
            fib_x = fib_y;
            printf("%d ", fib);
        }
    }
}