#include <stdio.h>
#include <stdlib.h>
// -------------------------------------------------------
// main
// -------------------------------------------------------

int main()
{
    // variable declaration
    int room_number;

    // receive input
    printf("Please enter the room no.: ");
    scanf("%d", &room_number);

    // validate input
    if (room_number < 1 || room_number > 8)
    {
        printf("You have entered invalid input.");
        return 0;
    }

    // calculate
    switch(room_number)
    {
        case 3:
            printf("First floor");
            break;
        case 4:
            printf("First floor");
            break;
        case 5:
            printf("Second floor");
            break;
        case 6:
            printf("Second floor");
            break;
        case 7:
            printf("Third floor");
            break;
        case 8:
            printf("Third floor");
            break;
        default:
            printf("Ground floor");
    }

    // end
    return 0;
}
