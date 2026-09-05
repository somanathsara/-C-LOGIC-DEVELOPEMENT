#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the number of rows wants to print: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    } 
    return 0;
}