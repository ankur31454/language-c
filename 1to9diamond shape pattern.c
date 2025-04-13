#include <stdio.h>

int main() {
    int n=5;


    for (int i = 1; i <= n; ++i) {

        for (int j = 1; j <= n - i; ++j) {
            printf(" ");
        }

        for (int k =i; k <=2*i-1; k++) {
            printf("%d",k);
        }
       for(int l=2*i-2;l>=i;l--){
            printf("%d",l);
        }
        printf("\n");
    }
    for (int i = n-1; i >= 1; --i){

        for (int j = 1; j <= n - i; ++j) {
            printf(" ");
        }
        for (int k = i; k <=i*2-1; k++) {
          printf("%d",k);
        }
        for(int l=2*i-2;l>=i;l--){
            printf("%d",l);
        }
        printf("\n");
    }

    return 0;
}
