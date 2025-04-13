#include<stdio.h>
int main(){
    int x[5]={1,2,3,4,5};
    int* p;
    p=&x[0];
    printf("%d ",x[0]);
    printf("%d ",*p);
    printf("%d ",*p++);
    printf("%d ",++*p);
    printf("%d ",*(p+4));
    p = &x[2];
    printf("%d ",*(p-1));
    return 0;

}