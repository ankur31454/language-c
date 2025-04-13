#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x=(rand()%100),y;
    while(1)
    {
    printf("Enter the number between 1 and 100\n");
    scanf("%d",&y);
    if(y==x)
    {
    printf("You gussal it correct!!");
    break;
    }
    else if(y<x)
    printf("enter a longer number");
    else
    printf("Enter a smaller number");
    }

    return 0;
}
