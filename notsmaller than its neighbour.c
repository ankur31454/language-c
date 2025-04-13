#include<stdio.h>
void swap(int *x,int *y){
*x^=*y;
*y^=*x;
*x^=*y;


}
 void fun(int *arr,int n){
 int i,j;
   for(i=0,j=n-1;i<j;)
    { if(arr[i]==1 && arr[j]==0){
    swap(arr+i,arr+j);
    i++;j--;
    }
    if(arr[i]==0)
        i++;
    if(arr[j]==1)
        j--;

    }
 }

int main(){
    int n=5,i,j;

    int arr[n];

    printf("Enter the %d element in array",n);
    for(int i=0;i<n;i++){
    scanf("%d ",&arr[i]);
    }
    fun(arr,sizeof(arr)/sizeof(int));
    for(int i=0;i<n;i++){
    printf("%d ",arr[i]);

    }

    return 0;

}

