#include <stdio.h>
int main()
{
    int note;
    int passing_grade = 67;
    printf("Please enter the mark: ");
    scanf("%d", &note);

    // if-else version
    // if (note>passing_grade)
    // {
    //     printf("Your result is: Pass");
    // }
    // else
    // {
    //     printf("Your result is: Fail");
    // }

    // ternary version
    (note > passing_grade) ? printf("Your result is: Pass") : printf("Your result is: Fail");

    return 0;
}
