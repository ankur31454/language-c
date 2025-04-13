#include<stdio.h>
void main()
{
        int i,j;
        for(i=7;i>=1;i--)
        {

            for(j=7;j>i;j--){
                printf("  ");
            }
            for(j=1;j<=i;j++){
                printf("%c ",64+j);
                }
            for(j=i;j>=1;j--)
            {
                printf("%c ",64+j);
                }
            printf("\n");

        }
          printf("             A");
}
