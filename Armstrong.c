#include <stdio.h>
#include <math.h>

int main() {
    int n,x,p=0,r=0;
    printf("Enter the number:");
    scanf("%d",&n);
    x=n;
    while(x)
    {
        p++;
        x/=10;
    }
    x=n;
    while(x)
    {
    r+=pow((x%10),p);
    x/=10;
    }
    if(r==n)
    printf("\n yes it is Armstrong.");
    else
    printf("\n No..");


    return 0;
}
