#include <stdio.h>

int main() {
    int n;


    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n-1; i++) {

        for (int j = 1; j <= n - i; j++) {
            printf("*");
        }
        for (int k = 1; k <=i-1; k++) {
            printf("  ");
        }
        for (int l = n-1; l >= i; l--) {
            printf("*");
        }

        printf("\n");

    }
    for (int i = n-2; i >= 1; i--){

        for (int j = 1; j <= n - i; j++) {
            printf("*");
        }
        for (int k = 1; k <=i-1; k++) {
            printf("  ");
        }
        for (int l = 1; l <= n - i; l++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
