#include<stdio.h>
int main()
{
    int i,n;
    double sum=0.0;
    printf("Enter the range :");
    scanf("%d",&n);
    printf("Harmonic series is:");
    for(i=1;i<=n;i++){
        sum+=1.0/i;
    }
    printf("The sum of harmonic series: %lf \n",sum);

}
