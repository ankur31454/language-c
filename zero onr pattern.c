#include <stdio.h>

int main() {
    int n;

    // Prompt the user to enter the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Loop to print each row
    for (int i = 1; i <= n; ++i) {
        // Inner loop to print numbers in each row
        for (int j = 1; j <= i; ++j) {
            // Print 1 if the sum of row and column indices is even, otherwise print 0
            if ((i + j) % 2 == 0) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        // Move to the next line after printing all numbers in a row
        printf("\n");
    }

    return 0;
}
