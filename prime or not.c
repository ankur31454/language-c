#include <stdio.h>

void main() {
    int n,i,flag=0;

    printf("Enter the number: ");
    scanf("%d",&n);

    if(n<2)
    printf("Not a prime number");
    else
    {
    for(i=2;i<=n/2;i++)
    {
    if(n%i==0)
    {
    flag=1;
    break;
    }
    }
    if(flag==0)
    printf("\n yes, it is a prime number");
    else
    printf("\n No,it is composite number");
    }


}
