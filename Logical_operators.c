#include <stdio.h>

int main() {
    int num1, num2;

    // Input
    printf("Enter First Number (num1): \n");
    scanf("%d", &num1);

    printf("Enter Second Number (num2): \n");
    scanf("%d", &num2);

    printf("\n--- Logical Operators Result ---\n");

    // AND operator
    printf("(num1 > num2) && (num1 > 0) = %d\n", (num1 > num2) && (num1 > 0));

    // OR operator
    printf("(num1 > num2) || (num1 > 0) = %d\n", (num1 > num2) || (num1 > 0));

    // NOT operator
    printf("!(num1 > num2) = %d\n", !(num1 > num2));

    return 0;
}

