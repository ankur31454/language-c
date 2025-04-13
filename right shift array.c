#include<stdio.h>
void main()
{
int a[10],i,c;
for(i=0;i<10;i++){
printf("Enter number:");
scanf("%d",&a[i]);
}
c=a[9];
for(i=9;i>0;i--){

a[i]=a[i-1];
}
//a[9]=c;
a[i]=c;
for(i=0;i<10;i++){
printf("\n%d",a[i]);
}
}
