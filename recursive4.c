#include<stdio.h>
int X(int N)
    {
       if(N<3)
        return(1);
       else
        return X(N-1)+X(N-3)+1;
    }
void main()
    {
       int y= X(X(5));
       printf("%d",y);
    }
