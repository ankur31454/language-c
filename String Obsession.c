#include<stdio.h>
#include<string.h>
int main()
{
    short int num,i,j;
    char substring[55][15];
    char string[55];
    scanf("%d",&num);

    for(i=0;i<num;i++)
            gets(substring[i]);
    for(i=0;i<num;i++)
            printf("%s",substring[i]);
}