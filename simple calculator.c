#include <stdio.h>

int main() {
    char operator;
    int n, i;
    double result = 0;

    // Ask the user for the operator
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    // Ask the user for the number of inputs
    printf("Enter the number of numbers: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error: The number of inputs must be greater than 0.\n");
        return 1;
    }

    double numbers[n];

    // Take input of numbers
    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%lf", &numbers[i]);
    }

    // Perform the operation
    switch (operator) {
        case '+':
            for (i = 0; i < n; i++) {
                result += numbers[i];
            }
            printf("Result: %.2lf\n", result);
            break;

        case '-':
            result = numbers[0];
            for (i = 1; i < n; i++) {
                result -= numbers[i];
            }
            printf("Result: %.2lf\n", result);
            break;

        case '*':
            result = 1; // Start with 1 for multiplication
            for (i = 0; i < n; i++) {
                result *= numbers[i];
            }
            printf("Result: %.2lf\n", result);
            break;

        case '/':
            result = numbers[0];
            for (i = 1; i < n; i++) {
                if (numbers[i] == 0) {
                    printf("Error: Division by zero is not allowed.\n");
                    return 1;
                }
                result /= numbers[i];
            }
            printf("Result: %.2lf\n", result);
            break;

        default:
            printf("Error: Invalid operator.\n");
            return 1;
    }

    return 0;
}

