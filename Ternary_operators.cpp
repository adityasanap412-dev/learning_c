#include <stdio.h>

int main() {
    int num1, num2, max;

    printf("Enter First Number (num1): \n");
    scanf("%d", &num1);

    printf("Enter Second Number (num2): \n");
    scanf("%d", &num2);

    // Find maximum using ternary
    max = (num1 > num2) ? num1 : num2;
    printf("Maximum Number = %d\n", max);

    // Example condition: Is num1 greater than num2? (1 = True, 0 = False)
    int isNum1Greater = (num1 > num2) ? 1 : 0;
    printf("Is num1 greater than num2? ? %d\n", isNum1Greater);

    return 0;
}

