#include <stdio.h>

int main() {
    int n, i, j, row;
    printf("Enter the number of rows wants to print: ");
    scanf("%d", &n);
    for(i = 1; i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}