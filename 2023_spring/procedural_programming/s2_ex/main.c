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
#include <stdlib.h>

// -------------------------------------------------------
// function declarations
// -------------------------------------------------------

// -------------------------------------------------------
// main
// -------------------------------------------------------

int main()
{
    // function to be called
    ex2_14();

    //
    return 0;
}

// -------------------------------------------------------
// function definitions
// -------------------------------------------------------

/*
please trace the results of following program
 */
void ex2_1()
{
    int x = 8, y = 9;
    printf("%d < %d is %d", x, y, x < y);
    printf("\n%d > %d is %d", x, y, x > y);
    printf("\n%d >= %d is %d", x, y, x >= y);
    printf("\n%d <= %d is %d", x, y, x <= y);
    printf("\n%d == %d is %d", x, y, x == y);
}
/*
write a program which claculates whether the folling expressions are true or false and will print accordingly:
3 > 4; 'x' < 'y'; 6==7;
 */
void ex2_2()
{
    printf("%d > %d is %d\n", 3, 4, 3 > 4);
    printf("%c < %c is %d\n", 'x', 'y', 'x' < 'y');
    printf("%d == %d is %d\n", 6, 7, 6 == 7);
}
/*
determine whether the following expressinos return a value true or false
int cutoff=0, count=5, i=0, j=1;
*/
void ex2_3()
{
    int cutoff = 0;
    int count = 5; 
    int i = 0;
    int j = 1;

    if (cutoff == 0 && count <= 5) printf("\na true");
    if (cutoff == 0 && count < 10) printf("\nb true");
    if (count < 20 || cutoff > 5) printf("\nc true");
    if (!((cutoff < 100 || i < j) && count <= 10)) printf("\nd true");
    if (cutoff < 20 || j < i) printf("\ne true");


}
/*
Write a program which prompts the user to enter two numbers type of double. The program then shuld ecide which nuber is smaller of the two and then displays an appropriate message.
*/
void ex2_5()
{
    double x = 0, y = 0;
    printf("Enter a first number: \n");
    scanf("%lf", &x);
    printf("Enter a second number: \n");
    scanf("%lf", &y);
    if(x < y)
    {
        printf("%lf is smaller than %lf", x, y);
    }
    else if(x > y)
    {
        printf("%lf is smaller than %lf", y, x);
    }
    else
    {
        printf("%lf is equal to %lf", x, y);
    }
}
/*
write a program which asks the user to enter a number of type integer, decides whether the integer number is an even or an odd number, and then displays an appropriate message.
*/
void ex2_6()
{
    int x;
    printf("Enter a number: \n");
    scanf("%d", &x);
    if (x % 2)
    {
        printf("This is an odd number. \n");
    }
    else
    {
        printf("This is an even number. \n");
    }
}
/*
*/
void ex2_7()
{
    float x = 52.5f;
    float y = 37.6f;
    int result = 0;

    if ( x > 40.0 && y <= 40.0 )
        result = result + 1;
    else
        result = result -1;
    printf("Result is: %d \n", result);
}

void ex2_8()
{
    int a,b,c;
    printf("Ënter the first num: \n");
    scanf("%d", &a);
    printf("Ënter the second num: \n");
    scanf("%d", &b);
    printf("Ënter the third num: \n");
    scanf("%d", &c);

    if (a > b && a > c)
        printf("%d \t is greater \n", a);
    else
        printf("%d \t is smaller \n", a);
    
    if (b > a && b > c)
        printf("%d \t is greater \n", b);
    else
        printf("%d \t is smaller \n", b);
    
    if (c > a && c > b)
        printf("%d \t is greater \n", c);
    else
        printf("%d \t is smaller \n", c);
    
}
void ex2_9()
{
    int x;
    printf("Enter an integer number: \n");
    scanf("%d", &x);
    if (x > 0)
    {
        printf("This is a positive number. \n");
    }
    else if (x < 0)
    {
        printf("This is a negative number. \n");
    }
    else
    {
        printf("The number is zero. \n");
    }

}

void ex2_10()
{
    int num;
    printf("Please enter a positive integer number: \n");
    scanf("%d", &num);
    if (num < 0)
        printf("Given number is negative. ");
    if (num % 2)
        printf("This is an odd number. \n");
    else
        printf("This is an even number. \n");
}

void ex2_13()
{
    int balance;
    int count = 1;
    if (balance  >= 0)
    {
        int current_balance = balance;
        printf("Balance\t: %d \n", balance);
    }
    else
    {
        count = 0;
    }
}

void ex2_14()
{
    int const choice = 1;
    switch(choice+1)
    {
        case 1:
        printf("Tea\n");
        break;
        case 2:
        printf("Coffee\n");
        break;
        case 3:
        printf("Milkshake\n");
        break;
        default:
        printf("Bon appetit!\n");
    }
}