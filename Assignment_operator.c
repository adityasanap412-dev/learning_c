#include <stdio.h>

int main() {
    int num;

    printf("Enter Number : \n");
    scanf("%d", &num);

    printf("\n--- Assignment Operators Result ---\n");

    int x;

    // = operator
    x = num;
    printf("x = num  ? %d\n", x);

    // += operator
    x = num;
    x += 5;
    printf("x += 5   ? %d\n", x);

    // -= operator
    x = num;
    x -= 5;
    printf("x -= 5   ? %d\n", x);

    // *= operator
    x = num;
    x *= 5;
    printf("x *= 5   ? %d\n", x);

    // /= operator
    x = num;
    x /= 5;
    printf("x /= 5   ? %d\n", x);

    // %= operator
    x = num;
    x %= 5;
    printf("x %%= 5  ? %d\n", x);

    return 0;
}

