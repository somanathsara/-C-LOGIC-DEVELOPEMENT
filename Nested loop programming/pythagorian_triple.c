#include <stdio.h>

int main() {
    int i, j, k, n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
         for(j=1;j<=n;j++){
            for(k=1;k<=n;k++){
                if(i*i + j*j == k*k){
                    printf("%d, %d, %d\n",i,j,k);
                }
                else
                continue;
            }
         }
    }
    return 0;
}