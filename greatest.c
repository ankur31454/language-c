#include <stdio.h>

int main() {
    int a, b, c, greatest;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Using nested ternary operators to find the greatest number
    greatest = (a > b) ? (a > c ? a : c) : (b > c ? b : c);

    // Output the result
    printf("The greatest number is: %d\n", greatest);

    return 0;
}
