#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n-1; i++) {
        for (int k = 1; k <=i; k++)
            printf("  ");
        for (int j = 1; j <= n - i; j++)
            printf("*");
        printf("\n");

    }
    for (int i = n-2; i >= 1; i--){
            for (int k = 1; k <=i; k++)
            printf("  ");
        for (int j = 1; j <= n - i; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
