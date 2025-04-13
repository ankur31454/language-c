#include<stdio.h>
int main()
{

    int i,a[5];
    for(i=0;i<5;i++)
    {
        printf("Enter the number:");
        scanf("%d",&a[i]);
    }
        for(i=0;i<5;i++)
    {
        if(a[i]==0)
            continue;
        printf("\t%d",a[i]);

    }

}

