#include <stdio.h>

int main() {
    int num1, num2;

    // take user input
    printf("Enter First Number (num1): \n");
    scanf("%d", &num1);

    printf("Enter Second Number (num2): \n");
    scanf("%d", &num2);

    // Arithmetic Operations
    printf("\n--- Results ---\n");
    printf("Addition (+) = %d\n", num1 + num2);
    printf("Subtraction (-) = %d\n", num1 - num2);
    printf("Multiplication (*) = %d\n", num1 * num2);

    if (num2 != 0) {
        printf("Division (/) = %d\n", num1 / num2);
    } else {
        printf("Division (/) = Not possible (cannot divide by zero)\n");
    }

    return 0;
}

