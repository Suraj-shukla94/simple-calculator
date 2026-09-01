#include <stdio.h>
#include <conio.h>

int main()
{
    int num1, num2, choice;
    float result;

    printf("== Simple Calculator ==\n");
    printf("enter 1st number: ");
    scanf("%d", &num1);
    printf("enter 2nd number: ");
    scanf("%d", &num2);

    printf("\nChoose Operation:\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        result = num1 + num2;
        printf("Result: %d + %d = %.2f\n", num1, num2, result);
        break;
    case 2:
        result = num1 - num2;
        printf("Result: %d - %d = %.2f\n", num1, num2, result);
        break;
    case 3:
        result = num1 * num2;
        printf("Result: %d * %d = %.2f\n", num1, num2, result);
        break;
    case 4:
        if (num2 != 0)
        {
            result = (float)num1 / num2;
            printf("Result: %d / %d = %.2f\n", num1, num2, result);
        }
        else
        {
            printf("Error: Division by zero is not allowed.\n");
        }
        break;
    default:
        printf("Invalid choice! Please select a valid operation.\n");
    }
}