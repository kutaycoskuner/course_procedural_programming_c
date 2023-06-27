// notes
// ----------------------------------------------------------------------------
/*

gcc main.c; ./a.exe

*/

// libraries
// ----------------------------------------------------------------------------
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// abstract
// ----------------------------------------------------------------------------
typedef struct nodestruct
{
    int data;                // data of the node
    struct nodestruct *next; // pointer to the next node
} node;

// global variables
// ----------------------------------------------------------------------------
node *head = NULL;

// function declarations
// ----------------------------------------------------------------------------
void ex8_1();
void ex8_2();
void ex8_3();
void ex8_4();
void ex8_5();
void ex8_6();
void ex8_7();
void ex8_8();
void ex8_9();
void ex8_10();
void ex8_11();
void ex8_12();
void ex8_13();
void ex8_14();
void ex8_15();
void ex8_16();

void display();
int size();
node *newElement(int num, node *next);
void insert(int num);
int delete(int num);
void printListSummary();

// main
// ----------------------------------------------------------------------------

int main()
{

    // printf("%p", head);

    int choice;
    int num;
    head = NULL;
    // pre defined values
    // insert(1);
    // insert(4);
    // insert(8);
    // insert(33);
    // run program
    while (1)
    {
        // display operations
        printf("\n-- Linked List Operations --\n");
        printf("1. Display \n");
        printf("2. Size \n");
        printf("3. Insert \n");
        printf("4. Delete \n");
        printf("5. Print list summary\n");
        printf("6. Exit \n");
        printf("\nPlease enter your choice: ");

        // get choice
        scanf("%d", &choice);
        // validate
        // --
        // operations
        switch (choice)
        {

        case 1:
            if (head == NULL)
                printf("\nThe list ist empty. \n");
            else
            {
                printf("\nThe data values in the list are: ");
                display();
            }
            break;
        case 2:
            printf("\nSize of the list is: %d \n", size());
            break;
        case 3:
            printf("\nEnter data valie to be inserted: ");
            scanf("%d", &num);
            insert(num);
            break;
        case 4:
            if (head == NULL)
                printf("\nThe list is already empty. \n");
            else
            {
                printf("Enter the value to be deleted: \n");
                scanf("%d", &num);
                if (delete (num))
                {
                    printf("\n%d deleted from the list. \n", num);
                }
                else
                    printf("\n%d not found in the list. \n", num);
            }
            break;
        case 5:
            printListSummary();
            break;
        case 6:
            return 0;
        default:
            printf("Please enter one of the operation numbers.\n");
        }
    }

    // exit
    return 0;
}

// function definitions
// ----------------------------------------------------------------------------
void printListSummary()
{
    int sum = 0;
    for (node *n = head; n != NULL; n = n->next)
        sum += n->data;
    printf("\n Summary of the list is: %d\n", sum);
}

void display()
{
    for (node *n = head; n != NULL; n = n->next)
    {
        if (n->next == NULL)
            printf("%d \n", n->data);
        else
            printf("%d, ", n->data);
    }
}

int size()
{
    int count = 0;
    for (node *n = head; n != NULL; n = n->next)
    {
        count++;
    }
    return count;
}

node *newElement(int num, node *next)
{
    node *new_node;
    new_node = (node *)malloc(sizeof(node));
    new_node->data = num;
    new_node->next = next;
    return new_node;
}

void insert(int num)
{
    node *p_curr = head;
    if (head == NULL)
    {
        head = newElement(num, NULL);
    }
    else if (num < head->data)
        head = newElement(num, head);
    else
    {
        while (p_curr != NULL)
        {
            if (p_curr->next == NULL)
            {
                p_curr->next = newElement(num, NULL);
                break;
            }
            else if (p_curr->next->data < num)
            {
                p_curr = p_curr->next;
            }
            else
            {
                p_curr->next = newElement(num, p_curr->next);
                break;
            }
        }
    }
}

int delete(int num)
{
    node *p_curr = head;
    node *p_prev;
    while (p_curr != NULL)
    {
        if (p_curr->data == num)
        {
            if (p_curr == head)
                head = p_curr->next;
            else
                p_prev->next = p_curr->next;
            free(p_curr);
            return 1;
        }
        else
        {
            p_prev = p_curr;
            p_curr = p_curr->next;
        }
    }
    return 0;
}

void ex8_1()
{
    float a = 12.0f;
    float b = 4.0f;
    float c = 7.0f;

    float root = sqrt(a + b * c);

    printf("The squareroot of a + b * c is \t: %f", root);
}

/*
    What is the result after the following function is performed
    ceil(-5.8);
*/
void ex8_2()
{
    printf("Result is \t: %f", ceil(-5.8));
}

/*
    What is the result after the following function is performed
    cos(0.0);
*/
void ex8_3()
{
    printf("Result is \t: %f", cos(0.0));
}

/*
    What is the result after the following function is performed
    exp(5.0)
*/
void ex8_4()
{
    printf("Result is \t: %f", exp(5.0));
}

/*
    What is the result after the following function is performed
    fabs(-4.67)
*/
void ex8_5()
{
    printf("Result is \t: %f", fabs(-4.67));
}

/*
    What is the result after the following function is performed
    floor(-5.9)
*/
void ex8_6()
{
    printf("Result is \t: %f", floor(-5.9));
}

/*
    What is the result after the following function is performed
    fmod(9.6, 3.2)
*/
void ex8_7()
{
    printf("Result is \t: %f", fmod(9.6, 3.2));
}

/*
    What is the result after the following function is performed
    log(8.479065)
*/
void ex8_8()
{
    printf("Result is \t: %f", log(8.479065));
}

/*
    What is the result after the following function is performed
    log10(200)
*/
void ex8_9()
{
    printf("Result is \t: %f", log(200.0));
}

/*
    What is the result after the following function is performed
    pow(5,.2)
*/
void ex8_10()
{
    printf("Result is \t: %f", pow(5, .2));
}

/*
    What is the result after the following function is performed
    sin(5.5)
*/
void ex8_11()
{
    printf("Result is \t: %f", sin(5.5));
    printf("Result is \t: %f", sin(3.14 / 2.0));
}

/*
    What is the result after the following function is performed
    sqrt(5.0)
*/
void ex8_12()
{
    printf("Result is \t: %f", sqrt(5.0));
}

/*
    What is the result after the following function is performed
    tan(5.5)
    trigonometric tangent of x in radians
*/
void ex8_13()
{
    printf("Result is \t: %f", tan(5.5));
}

/*
    What is the result after the following function is performed
*/
void ex8_14()
{
    printf("Result is \t: %f \n", fabs(-3.5));
    printf("Result is \t: %f \n", floor(4.5));
    printf("Result is \t: %f \n", fabs(0.0));
    printf("Result is \t: %f \n", ceil(0.0));
    printf("Result is \t: %f \n", fabs(-5.2));
    printf("Result is \t: %f \n", ceil(-5.2));
}