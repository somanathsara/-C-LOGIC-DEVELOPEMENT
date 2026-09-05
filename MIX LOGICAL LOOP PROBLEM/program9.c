//print the pattern where ith row prints the pattern i * i.
#include <stdio.h>

int main() {
    int i, j, n;
    printf("Enter the vaiue of n: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ", i*i);
        }
        printf("\n");
    }
    return 0;
}