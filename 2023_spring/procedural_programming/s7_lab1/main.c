// notes
// ----------------------------------------------------------------------------
/*

Word obfuscator: Write a program that obfuscates a word entered by the user by
- replacing a few letters by ‘*’ and appending “strange”.
- The program shall use scanf to ask the user for a word (100 characters max.).
- If the word is shorter than 4 characters, output “Word too short!” and exit.
- If the word is 4 characters or more, copy the word into a second string. Replace the
first and fourth character (in the second string) by ‘*’. Use strcat to create a new
obfuscated word that is the concatenation of the word and “strange”.
- The program shall output the original word and the obfuscated word.


gcc main.c; ./a.exe

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
    char str[100];
    char calc_str[100];

    // input string
    printf("-- Word Obfuscator -- \n");
    printf("Enter a word \t: ");
    scanf("%s", &str);

    // validation
    if (strlen(str) < 4)
    {
        printf("Word too short! \n");
        return 0;
    }

    // calculate new string
    strcpy(calc_str, str);

    for(int ii=0; ii < strlen(str); ii++)
    {
        if(ii == 0 || ii == 3)
        {
            calc_str[ii] = '*';
        }
    }

    strcat(calc_str, "strange");
    // output
    printf("Original \t: %s\n", str);
    printf("Obfuscated \t: %s\n", calc_str);


    // exit
    return 0;
}

// function definitions
// ----------------------------------------------------------------------------
