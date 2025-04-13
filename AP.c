#include <stdio.h>

int main() {
    int n=10, i ;
    float a=2,d=4;
    float s;

    s=((2*a+(n-1)*d)*n/2);
    for(i=0;i<n;i++)
    printf("\n%f",(a+(i*d)));
    printf("sum of all these terms =%f",s);


    return 0;
}
