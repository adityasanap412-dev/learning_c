#include <stdio.h>

int main() {
    int a;

    printf("Enter any number: \n");
    scanf("%d", &a);

    printf("\n--- Unary Operators Result ---\n");

    // Pre-increment: First a is increased, then printed
    printf("++a (pre-increment) = %d\n", ++a);

    // Post-increment: First a is printed, then increased
    printf("a++ (post-increment) = %d\n", a++);
    printf("Value of a after a++ = %d\n", a);

    // Pre-decrement: First a is decreased, then printed
    printf("--a (pre-decrement) = %d\n", --a);

    // Post-decrement: First a is printed, then decreased
    printf("a-- (post-decrement) = %d\n", a--);
    printf("Value of a after a-- = %d\n", a);

    return 0;
}

