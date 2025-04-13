#include<stdio.h>
int main()
{
    int x,f,i;
    printf("Enter x:");
    scanf("%d",&x);
    f=x/10000;
    printf("\n%d",f);
    x%=10000;
    f=x/1000;
    printf("\n%d",f);
    x%=1000;
    f=x/100;
    printf("\n%d",f);
    x%=100;
    f=x/10;
    printf("\n%d",f);
    x%=10;
    f=x/1;
    printf("\n%d",f);

    return 0;
}
