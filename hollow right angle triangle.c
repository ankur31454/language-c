#include <stdio.h>
int main()
{
    int i, j, n;

    printf("Enter number of n : ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(j=i; j<n; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            if(i==n || j==1 || j==i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
