#include<stdio.h>
 int fact(int n){
    if(n==0 || n==1)
    return 1;
    else
        return n*fact(n-1);
 }
 int main(){
    int num;
    scanf("%d",&num);
    if(num<0)
        printf("factorial is not defined for negative integers");
    else
        printf("factorial is %d  = %d",num,fact(num));
    return 0;

 }
