#include<stdio.h>
int main()
    {
        int i,n,max,secmax;
        int arr[20];
        printf("Enter the size of array:");
        scanf("%d",&n);
        printf("Enter the element:\n");
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);

            max= arr[0];
            for(i=1;i<n;i++){
                if(arr[i]>max){
                    secmax=max;
                    max=arr[i];
                }
            }
            printf("\nThe largest element is:%d",max);
            printf("\nThe second largest element is :%d",secmax);

             return 0;
    }
