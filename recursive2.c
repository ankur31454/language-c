#include<stdio.h>
void fun(int x)
    {
       if(x>0) {
        fun(x-1);
        printf("%d ",x);
       }
    }
    void main(){
    fun(4);
    }
