#include<stdio.h>
void fun(int n)
    {
        if(n==0)
            return;
        printf("%d ",n);
        fun(n-1);
    }
    void main(){
    fun(5);
    }
