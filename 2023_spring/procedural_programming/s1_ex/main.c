// -------------------------------------------------------
// notes
// -------------------------------------------------------
/*
Running the code through this command line:
gcc main.c; ./a.exe


Function naming:
homework exercices: 
    formula : ex<major_minor>
    ex      : ex1_17()
    desc    : 1.17 exercise solution

lab exercises:
    formula : lab<major_minor>
    ex      : lab1_12()
    desc    : 1.12 exercise of lab session. Each lab session has its identifier

exceptions:
    1. If the lab exercise is part of some repeatable code. The function could be copied as its own name
*/

// -------------------------------------------------------
// libraries
// -------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

// -------------------------------------------------------
// function declarations
// -------------------------------------------------------
void ex1_7();
void ex1_12();
void calc_division_and_remainder();
void lab1_1();

// -------------------------------------------------------
// main
// -------------------------------------------------------

int main()
{
    // function to be called
    lab1_1();
    //
    return 0;
}

// -------------------------------------------------------
// function definitions
// -------------------------------------------------------

/*
write a program that aks the user to enter two integer numbers. The program should divide the first integer number by the second integer number and then display the resulting quotinent and the remainder.
*/
void ex1_12()
{
    // init variables
    int a = 0;
    int b = 0;

    // get values from user
    printf("Enter a number to divide: ");
    scanf("%d", &a);
    printf("Enter a number as the divisor: ");
    scanf("%d", &b);

    // calculate division and remainder
    int div = a / b;
    int mod = a % b;

    // output
    printf("%d divided by %d is %d with the remainder of %d", a, b, div, mod);
}

void ex1_7()
{
    float temp;
    printf("Please enter temperature: ");
    scanf("%f", &temp);
    printf("Temperature is %.2f Celcius", temp);
}

void calc_division_and_remainder()
{
    return ex1_12();
}

void lab1_1()
{
    char first_name[5] = "Kutay";
    char last_name[8] = "Coskuner";
    int matrikel_number = 3175571;
    char address[] = "Some Place 12, 47059, Duisburg";

    printf("%s %s \n%d \n%s", first_name, last_name, matrikel_number, address);
}
