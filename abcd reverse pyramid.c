#include <stdio.h>

int main() {
    int i,j;

    for (int i =7; i>=1; i--) {

        for (int j =7; j>i;j--) {
            printf("  ");
        }

        for (int j=1; j<=i;j++)
            printf("%c ", 64 + j);
        for (int j=i; j>=1;j--)
            printf("%c ", 64 + j);


        printf("\n");
    }

    return 0;
}
