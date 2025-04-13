#include<stdio.h>

void main()
{
    int i,j,sp;
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=n-1;i>=0;i--)
    {
        for(j=0;j<=i;j++)
        {
            printf("* ");
        }
        printf(" ");
        for(sp=1;sp<=n-i-1;sp++)
        {
            printf("  ");
        }
        for(sp=1;sp<=n-i-1;sp++)
        {
            printf("  ");
        }
        for(j=0;j<=i;j++)
        {
            printf("* ");
        }

        printf("\n");
    }
    for(i=1;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("* ");
        }
        printf(" ");
        for(sp=1;sp<=n-i-1;sp++)
        {
            printf("  ");
        }
        for(sp=1;sp<=n-i-1;sp++)
        {
            printf("  ");
        }
        for(j=0;j<=i;j++)
        {
            printf("* ");
        }

        printf("\n");
    }

}
