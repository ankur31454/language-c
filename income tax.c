#include<stdio.h>
int main(){
   double tax, income ;
   printf("Enter the annual income:");
   scanf("%lf",&income);
   if(income>250000)
   tax=25000+(30*(income-250000)/100);
   else if(income>100000 || income<=150000)
   tax=5000+((income -15000)*20/100);
   else if(income>100000)
   tax=((income-100000)*10/100);
   else
   tax=0;
   printf("total tax =%lf",tax);

}
