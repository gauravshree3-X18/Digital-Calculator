#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double num1, num2, result;

    printf("===== DIGITAL CALCULATOR =====\n");

    while (1) {
        printf("\nChoose an operation:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulo\n");
        printf("6. Power\n");
        printf("7. Square Root\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1: 
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 + num2;
                printf("Result = %.2lf\n", result);
                break;

            case 2: 
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 - num2;
                printf("Result = %.2lf\n", result);
                break;

            case 3: 
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 * num2;
                printf("Result = %.2lf\n", result);
                break;

            case 4: 
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                if (num2 == 0)
                    printf("Error! Division by zero not allowed.\n");
                else {
                    result = num1 / num2;
                    printf("Result = %.2lf\n", result);
                }
                break;

            case 5: 
                printf("Enter two integers: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Result = %d\n", (int)num1 % (int)num2);
                break;

            case 6:
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &num1, &num2);
                result = pow(num1, num2);
                printf("Result = %.2lf\n", result);
                break;

            case 7:
                printf("Enter a number: ");
                scanf("%lf", &num1);
                if (num1 < 0)
                    printf("Error! Square root of negative number not possible.\n");
                else {
                    result = sqrt(num1);
                    printf("Result = %.2lf\n", result);
                }
                break;

            case 8:
                printf("Exiting calculator...\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}