#include<stdio.h>
#include<conio.h>
void main()
{
 int calls;
 float bill;
 printf("enter number of calls:");
 scanf("%d",&calls);
 if(calls<=50)
 bill=100;

 else if(calls>50&&calls<=100)
 bill=100+(0.80*(calls-50));

 else if(calls>100&&calls<=200)
 bill=140+(0.60*(calls-100));

 else if(calls>200)
 bill=200+(0.40*(calls-200));

 printf("bill is %f",bill);
 getch();

}
