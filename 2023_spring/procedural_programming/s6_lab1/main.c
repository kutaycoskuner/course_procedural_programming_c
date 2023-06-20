// notes
// ----------------------------------------------------------------------------
/*

gcc main.c; ./a.exe

Declare a struct named ‘dtime’ that contains the following elements: hour (integer),
minute (integer), seconds (integer), degree(float).
Write a program that makes use of this struct. Define a variable ‘user_dtime’ of type
‘struct dtime’. Input the hour, minutes, seconds and degree into ‘user_dtime’.
Afterwards, output the entered date in the format [hour]:[minute]:[seconds] and
[degree] in Fahrenheit 


*/

// libraries
// ----------------------------------------------------------------------------
#include <stdio.h>

// function declarations
// ----------------------------------------------------------------------------


// abstract
// ----------------------------------------------------------------------------
struct dtime
{
    int hour;
    int minute;
    int second;
    float degree;
};

// main
// ----------------------------------------------------------------------------

int main()
{
    struct dtime user_dtime;

    // request input
    printf("Enter hour: \n");
    scanf("%d", &user_dtime.hour);

    printf("Enter minute: \n");
    scanf("%d", &user_dtime.minute);

    printf("Enter secound: \n");
    scanf("%d", &user_dtime.second);

    printf("Enter degree in Fahrenheit: \n");
    scanf("%f", &user_dtime.degree);

    printf("Formattted: %.2d:%.2d:%.2d and %.2f degrees in \n", user_dtime.hour, 
        user_dtime.minute, user_dtime.second, user_dtime.degree);

    // exit
    return 0;
}

// function definitions
// ----------------------------------------------------------------------------
