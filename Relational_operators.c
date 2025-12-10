#include <stdio.h>

int main() {
    int num1, num2;

    // Input
    printf("Enter First Number (num1): \n");
    scanf("%d", &num1);

    printf("Enter Second Number (num2): \n");
    scanf("%d", &num2);

    // Relational checks
    printf("\n--- Relational Operations Result ---\n");

    if (num1 == num2)
        printf("%d == %d : 1\n", num1, num2);
    else
        printf("%d == %d : 0\n", num1, num2);

    if (num1 != num2)
        printf("%d != %d : 1\n", num1, num2);
    else
        printf("%d != %d : 0\n", num1, num2);

    if (num1 > num2)
        printf("%d > %d : 1\n", num1, num2);
    else
        printf("%d > %d : 0\n", num1, num2);

    if (num1 < num2)
        printf("%d < %d : 1\n", num1, num2);
    else
        printf("%d < %d : 0\n", num1, num2);

    if (num1 >= num2)
        printf("%d >= %d : 1\n", num1, num2);
    else
        printf("%d >= %d : 0\n", num1, num2);

    if (num1 <= num2)
        printf("%d <= %d : 1\n", num1, num2);
    else
        printf("%d <= %d : 0\n", num1, num2);

    return 0;
}

