#include <stdio.h>

int main() {
    int n, j, i, k;
    printf("Enter the number of rows here: ");
    scanf("%d",&n);
    int num ;
    for(i=1;i<=n;i++){
        num = 65;
        for(j=1;j<=i;j++){
            printf("%c ",num);
            num ++;
        }
        printf("\n");
    }
    return 0;
}