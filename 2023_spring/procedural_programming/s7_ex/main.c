// notes
// ----------------------------------------------------------------------------
/*

gcc main.c; ./a.exe

File writing modes

r   : read
w   : write
a   : append the end line
r+  : open file for update
w+  : trims to zero if exists createst if it does not exists
a+  : read, writing only append

*/

// libraries
// ----------------------------------------------------------------------------
#include <stdio.h>
#include <string.h>

// function declarations
// ----------------------------------------------------------------------------
void testStrCpy();
void ex7_3();
void ex7_4();
void ex7_5();
void ex7_7();
void ex7_8();

// abstract
// ----------------------------------------------------------------------------

// main
// ----------------------------------------------------------------------------

int main()
{
    // testStrCpy();
    // ex7_3();
    // ex7_4();
    // ex7_5();
    // ex7_7();
    ex7_8();
    // exit
    return 0;
}

// function definitions
// ----------------------------------------------------------------------------

void testStrCpy()
{
    char str1[10] = "Hello";
    char str2[10] = "world";

    strcpy(str1, str2);

    printf("%s %s \n", str1, str2);
}

void ex7_3()
{
    char str[20];
    printf("Enter a string (max 20 characters): \n");
    scanf("%s", &str);

    printf("\"%s\" has %d characters", str, strlen(str));
}
/*
    Write a c program which inputs a first name and a last name separately and then concatenates both into a new string.
*/
void ex7_4()
{
    char first_name[60];
    char last_name[30];
    printf("Enter your first name: \n");
    scanf("%s", &first_name);

    printf("Enter your last name: \n");
    scanf("%s", &last_name);

    strcat(first_name, " ");
    strcat(first_name, last_name);

    printf("Your name is: %s", first_name);
}

/*
    Write a program wich asks the user to input a string and then prints that string backward.
*/
void ex7_5()
{
    char str[40];
    printf("Enter a string: \n");
    scanf("%s", &str);

    printf("Your string backward is: %s", strrev(str));
}
/*
    Write a program which compares two files, and prints the first line where they differ.
*/
void ex7_7()
{
    // variables
    FILE *file1, *file2;
    char file_path1[100] = "test1.txt";
    char file_path2[100] = "test2.txt";

    // open files
    file1 = fopen(file_path1, "r");
    file2 = fopen(file_path2, "r");

    // validation
    if (file1 == NULL || file2 == NULL)
        printf("Error while opening files.\n");

    // comparison
    char line1[100];
    char line2[100];
    int line_iterator = 1;
    int b_identical = 1;
    while (fgets(line1, sizeof(line1), file1) != NULL && fgets(line2, sizeof(line2), file2) != NULL)
    {
        if (strcmp(line1, line2) != 0)
        {
            printf("Files differ at line %d: \n", line_iterator);
            printf("File 1: %s \n", line1);
            printf("File 2: %s \n", line2);
            b_identical = 0;
            break;
        }
        line_iterator++;
    }

    // report output
    if (b_identical)
    {
        printf("Files are identical. \n");
    }

    // close files
    fclose(file1);
    fclose(file2);
}

/*
    Declare and open an output file c:\example.txt and write your name, matrikulation number, address and phone number onto the file c:\test.txt on separate lines.
*/

void ex7_8()
{
    FILE *output_file;
    char *name = "Magnus Korcanus\n";
    char *matriculation_number = "123456\n";
    char *address = "Potatostraße 23, 42156, Iceland\n";
    char *phone = "124-513-3412\n";

    output_file = fopen("example.txt", "w");
    if (output_file == NULL)
    {
        printf("Error while opening the file. \n");
    }
    else
    {
        fputs(name                 , output_file);
        fputs(matriculation_number , output_file);
        fputs(address              , output_file);
        fputs(phone                , output_file);
        fclose(output_file);
    }
}
