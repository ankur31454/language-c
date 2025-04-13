#include<stdio.h>
void main()
{
    int ch,en;
    printf("Enter your choice for plating Type('solid gold=1','Gold placed=2','Siver plated=3')");
    scanf("%d",&ch);
    printf("Enter no. of engraving:");
    scanf("%d",&en);

    switch(ch)
    {
    case 1:
    printf("cost=%f",(en*10.40)+1000);
    break;
    case 2:
    printf("cost=%f",(en*7.30)+500);
    break;
    case 3:
    printf("cost=%f",(en*5.10)+300);
    break;
    default:
    printf("\n wrong chice");
    }

}
