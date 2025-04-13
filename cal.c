#include<stdio.h>

void main()
{

    int num1,num2,res;
    char opr;
    printf("Enter the two numbers:");
    scanf("%d%d",&num1,&num2);
    printf("Enter operator(+,-,*,/,%)");
    scanf(" %c",&opr);

    res=(opr=='+')?(num1+num2):
        (opr=='-')?(num1-num2):
        (opr=='*')?(num1*num2):
        (opr=='/')?(num1/num2):
            num1%num2;
    printf("\n result=%d",res);



}
