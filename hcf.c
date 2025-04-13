int main() {
    int n1,n2,temp;
    printf("Enter First number:");
    scanf("%d",&n1);
    printf("Enter second number");
    scanf("%d",&n2);
    while(n2!=0)
   {
   temp=n2;
   n2=n1%n2;
   n1=temp;

   }
   printf("HCF is %d",n1);

    return 0;
}
