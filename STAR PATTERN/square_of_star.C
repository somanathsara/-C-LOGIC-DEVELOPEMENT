#include <stdio.h>

int main() {
    int n, j, i;
    printf("Enter number of rows here: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}