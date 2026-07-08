#include <stdio.h>

int main() {
    int n, i, j, k, no;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        no = (n/2) + 1;
        if(i<no){
            for(j=1;j<=n-i;j++){
                printf("  ");
            }
            for(k=1;k<=2*i-1;k++){
                printf("* ");
            }
            printf("\n");
        }
        else{
            for(j=1;j<=i-no;j++){
                printf("  ");
            }
            for(k=1;k<=2*(n-i)-1;k++){
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}