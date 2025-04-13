#include<stdio.h>
void Head(int x)
    {
       if(x>0) {
        Head(x-1);
        printf("%d ",x);
        Head(x-1);
       }
    }
    void main(){
    Head(4);
    }
