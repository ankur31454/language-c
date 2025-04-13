#include <stdio.h>

int main() {
    int amount, count;

    printf("Enter the amount: ");
    scanf("%d", &amount);

    if(amount>=500){
    count = amount / 500;
    amount %= 500;
    printf("500 Rs. notes: %d\n", count);
    }

    if (amount >= 200) {
        count = amount / 200;
        amount %= 200;
        printf("200 Rs. notes: %d\n", count);
    }

    if (amount >= 100) {
        count = amount / 100;
        amount %= 100;
        printf("100 Rs. notes: %d\n", count);
    }

    if (amount >= 50) {
        count = amount / 50;
        amount %= 50;
        printf("50 Rs. notes: %d\n", count);
    }

    if (amount >= 20) {
        count = amount / 20;
        amount %= 20;
        printf("20 Rs. notes: %d\n", count);
    }

    if (amount >= 10) {
        count = amount / 10;
        amount %= 10;
        printf("10 Rs. notes: %d\n", count);
    }

    if (amount >= 5) {
        count = amount / 5;
        amount %= 5;
        printf("5 Rs. notes: %d\n", count);
    }


    if (amount >= 2) {
        count = amount / 2;
        amount %= 2;
        printf("2 Rs. notes: %d\n", count);

    }
    if(amount>=1)
    {
    amount%=2;
    printf("1 Rs. notes: %d\n", amount);
    }
    else{
    printf("Invalid amount");
    }
    return 0;
}
