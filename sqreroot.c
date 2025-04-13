#include <stdio.h>
int main() {
    int x;
    int y=1;
    printf("enter the positive integer:");
    scanf("%d",&x);
    while(1)
    {
        if(x-y*y<0)
            break;
        y+=1;
    }
    printf("square root of %d is %d",x,y-1);

    return 0;
}
