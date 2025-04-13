
#include <stdio.h>

int main()
{
    int i, j,k, n,num=10;

    /* Input n from user */
    printf("Enter number of n : ");
    scanf("%d", &n);

    for(i=n; i>0; i--)
    {
        for(k=0; k<i; k++)
        {
            printf(" ");
            //printf("%d ",num);
            //num--;
            //printf("%c ",num);
            //num++;
        }
        for(j=0;j<=n-i;j++)
        {
            printf("%d",i+1);
        }

        printf("\n");
    }

    return 0;
}
