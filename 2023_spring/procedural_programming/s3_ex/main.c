// -------------------------------------------------------
// notes
// -------------------------------------------------------
/*
gcc main.c; ./a.exe
    section 2: exercises
*/

// -------------------------------------------------------
// libraries
// -------------------------------------------------------
#include <stdio.h>

// -------------------------------------------------------
// function declarations
// -------------------------------------------------------

// -------------------------------------------------------
// main
// -------------------------------------------------------

int main()
{
    // function to be called
    ex3_12();
    //
    return 0;
}

// -------------------------------------------------------
// function definitions
// -------------------------------------------------------
// write a program that asks the user to enter the number of times wants to display the word "Hello" and displays it the requested number of times but also displays it at least once.
void ex3_12()
{
    int amount = 0, iter = 0;
    printf("Enter the number of times that you want to display the word \"Hello\"\n");
    scanf("%d", &amount);
    do 
    {
        printf("Hello\n");
        iter += 1;
    } while(iter < amount);
}


// write equivalent do while
void ex3_11()
{
    // for (int x = 2; x <= 28; x += 2)
    //     printf("%d ", x);
    int iter = 2;
    do
    {
        printf("%d ", iter);
        iter += 2;
    } while (iter <=28);
    
}


// write a program which prints number from 1 to 1000 using a for loop and an increament operator
void ex3_1()
{
    for(int ii=0; ii<1000; ii++)
    {
        printf("%d\n", ii+1);
    }
}

// write a program outputs sequence of numbers
// 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
void ex3_2()
{
    for(int ii=0; ii<10; ii++)
    {
        printf("%d", ii+1);
        if (ii < 9) printf(", ");

    }
}

// write a program outputs sequence of numbers
// 20, 16, 12, 8, 4, 0, -4, -8, -12, -16, -20
void ex3_3()
{
    for(int ii=20; ii>-21; ii-=4)
    {
        printf("%d", ii);
        if (ii > -20) printf(", ");

    }
}

// find iteration and final output
void ex3_4()
{
    for(int ii=0; ii <= 20; ii += 2)
    {
        printf("%d ", ii);
    }
}

// print odd numbers from 1 to 100 on separate lines
void ex3_5()
{
    for(int ii=1; ii < 100; ii += 2)
    {
        printf("%d \n", ii);
    }
}

// print even numbers from 1 to 100 on separate lines using while
void ex3_6()
{
    int iterator = 0;
    while(iterator < 100)
    {
        iterator += 2;
        printf("%d \n", iterator);

    }
}

// print even numbers from 1 to 100 on separate lines using while
void ex3_7()
{
    int y = 1, sum = 0;
    while(y <= 100)
    {
        sum += y;
        y++;
        printf("%d %d \n", y, sum);
    }
}

// how many times would the following while loop display the word "C"
void ex3_8()
{
    int i = 1;
    while(i < 10)
    {
        printf("C %d \n", i);
        i += 2;
    }
}

// write equivalent for loop for the following while loop
void ex3_9()
{
    // int i = 1;
    // while (i <= 20)
    // {
    //     printf("\nHello %d", i);
    //     i += 2;
    // }
    for(int ii=1; ii<=20; ii+=2)
    {
        printf("\nHello %d", ii);
    }
}

// what ıs the outputs
void ex3_10()
{
    int i = 2;
    do 
    {
        if ( i % 2 == 0)
            printf("\n%d", i);
        i += 2;
    } while(i <= 100);
}

