#include <stdio.h>

int main() {
    int num, reverse= 0, rem;

    printf("Enter an integer: ");
    scanf("%d", &num);

    for( ;num; ) {
        rem = num % 10;
        reverse = reverse* 10 + rem;
        num /= 10;
    }

    printf("Reversed Number = %d",reverse);
    return 0;
}
