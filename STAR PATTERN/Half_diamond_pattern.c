#include <stdio.h>

int main() {
    int n, j, i, k, no;
    printf("Enter the number of rows here: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        no = (n/2) + 1;
        if(i<no){
            for(j=1;j<=i;j++){
                printf("*");
            }
        }
        else{
            for(j=1;j<=n-i;j++){
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}