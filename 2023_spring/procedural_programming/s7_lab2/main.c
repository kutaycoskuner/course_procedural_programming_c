// notes
// ----------------------------------------------------------------------------
/*

Letter counter: Write a program that outputs the number of letters and whitespaces in a
text file. Assume that the text file contains only letters and whitespaces. The file is not
empty.

- At first, your program shall ask the user for a filename (up to 255 characters long) of
the file that should be opened.
- If the file cannot be opened, the output shall be “ERROR OPENING FILE!” and the
program shall exit.
- If no error occurred, the program shall output "number of letters:[X], number of
whitespaces:[Y].

gcc main.c; ./a.exe

ex72.txt

*/

// libraries
// ----------------------------------------------------------------------------
#include <stdio.h>
#include <string.h>

// function declarations
// ----------------------------------------------------------------------------


// abstract
// ----------------------------------------------------------------------------

// main
// ----------------------------------------------------------------------------

int main()
{
    
    // variables
    FILE *file1;
    char file_path1[255];

    unsigned int numof_letters = 0;
    unsigned int numof_whitespaces = 0;

    // input: get file name
    printf("Input file name \t: ");
    scanf("%s", &file_path1);

    // validate
    file1 = fopen(file_path1, "r");
    if (file1 == NULL)
    {
        printf("\nERROR OPENING FILE!");
        return 0;
    }

    // read file
    char iter = fgetc(file1);
    while(iter != EOF)
    {
        printf("%c", iter);
        if (iter == ' ')
            numof_whitespaces += 1;
        else
            numof_letters += 1;
        iter = fgetc(file1);
    }

    // close file
    fclose(file1);

    // output 
    printf("\n -- Letter and Whitespace Counter -- \n");
    printf("Input file name \t: %s \n", file_path1);
    printf("Number of letters \t: %d \n", numof_letters);
    printf("Number of whitespaces \t: %d \n", numof_whitespaces);

    // exit
    return 0;
}

// function definitions
// ----------------------------------------------------------------------------
