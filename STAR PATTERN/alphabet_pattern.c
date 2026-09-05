#include <stdio.h>

int main() {
     int n, j, i, k;
    printf("Enter the number of rows here: ");
    scanf("%d",&n);
    int num =65;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%c ",num);
            num ++;
        }
        printf("\n");
    }
    return 0;
}