#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter the numbers: ");
    scanf("%d %d", &a, &b);



    // Swap using bitwise XOR
    a = a ^ b;  // Step 1: a now holds the XOR of a and b
    b = a ^ b;  // Step 2: b now holds the original value of a
    a = a ^ b;  // Step 3: a now holds the original value of b

    // Display swapped numbers
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
