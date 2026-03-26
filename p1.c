#include<stdio.h>
#include <stdio.h>

/* Function declarations */
void addition();
void subtraction();
void multiplication();
void division();

int main()
{
    int choice;

    do
    {
        printf("\n--- Calculator Menu ---\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addition();
                break;

            case 2:
                subtraction();
                break;

            case 3:
                multiplication();
                break;

            case 4:
                division();
                break;

            case 5:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 5);

    return 0;
}

/* Function definitions */

void addition()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Addition = %d\n", a + b);
}

void subtraction()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Subtraction = %d\n", a - b);
}

void multiplication()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Multiplication = %d\n", a * b);
}

void division()
{
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    if (b != 0)
        printf("Division = %.2f\n", a / b);
    else
        printf("Error! Division by zero is not allowed.\n");
}