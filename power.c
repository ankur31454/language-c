#include <stdio.h>
#include <math.h>

int main() {
    int x,y,z;
    printf("Enter the number:");
    scanf("%d",&x);
    printf("Enter the power:");
    scanf("%d",&y);

    printf("the result is:%d",z=pow((x),y));

    return 0;
}
