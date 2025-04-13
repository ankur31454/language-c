#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n==0){
        printf("the no is Zero %d",n);
    }
    else if(n<0){
        printf("the no is negative %d",n);
    }
    else
    {
        printf("the no is positive %d",n);
    }

    return 0;
}
