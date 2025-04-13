#include<stdio.h>
int main(){
   int  arr[5]={3,32,115,18,9};
   int i,j,temp;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }

        }
    }
    for(i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

